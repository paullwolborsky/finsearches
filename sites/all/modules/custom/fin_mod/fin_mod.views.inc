<?php

/**
 * Implements hook_views_pre_build().
 */
function fin_mod_views_pre_build(&$view) {
  if (isset($view->args) && $view->name == 'mandate_plan_info') {
    fin_mod_mandate_plan_info($view);
  }
}

/**
 * Modifies mandate_plan_info view.
 */
function fin_mod_mandate_plan_info(&$view) {
  /**
   * Modifies the view so that the faux field for Lead Contact is filled if the
   * Lead Contact field is set. Essentially has to rewalk all of the JOINs. This
   * was the only way I could figure out how to do it - EntityFieldQuery didn't
   * have the required data.
   */
  $entity_ids = array();
  $paragraphs = array();
  foreach ($view->args as $entity_id) {
    $entity_ids[] = $entity_id;
  }
  if (!empty($entity_ids)) {
    $results = db_query('SELECT p2.entity_id FROM field_data_field_plan_er AS p JOIN field_data_field_plan_er AS p2 ON (p.field_plan_er_target_id=p2.field_plan_er_target_id) WHERE p.entity_id IN (:entity_ids)', array("entity_ids" => $entity_ids))->fetchCol();

    $pg_entities = entity_load('paragraphs_item', array($results));

    if (!empty($pg_entities)) {

      foreach ($pg_entities as $pg_entity) {

        $paragraph_wrapper = entity_metadata_wrapper('paragraphs_item', $pg_entity);
        $lead_plan = $paragraph_wrapper->field_lead_plan_contact->value();
        if ($lead_plan == 1) {
          $id = $paragraph_wrapper->getIdentifier();
          $job_history = db_query('SELECT j.entity_id FROM field_data_field_job_history AS j WHERE j.field_job_history_value = :id', array('id' => $id))->fetchField();
          $contact = node_load($job_history);
          $contact_wrapper = entity_metadata_wrapper('node', $contact);
          $name = $contact_wrapper->title_field->value();
          $view->field['nothing']->options['alter']['text'] = $name;
        }
      }
    }
  }
}

/**
 * Modifies content lists view.
 */
function fin_mod_content_list(&$view, &$query) {
  if (!empty($view->exposed_raw_input['field_address_administrative_area_selective'])) {
    foreach ($query->where[1]['conditions'] as $key => $where) {
      if ($where['field'] == 'field_data_field_office_type_tr.field_office_type_tr_tid') {
        unset($query->where[1]['conditions'][$key]);
      }
    }
  }
}

/**
 * Implements hook_views_query_alter().
 */
function fin_mod_views_query_alter(&$view, &$query) {
  if ($view->name == 'content_lists') {
    fin_mod_content_list($view, $query);
  }
}
