<?php

/**
 * Implements hook_views_pre_build().
 */
function fin_mod_views_pre_build(&$view) {
  if (isset($view->args) && $view->name == 'mandate_plan_info') {
    fin_mod_mandate_plan_info($view);
  }
  if (isset($view->args) && $view->name == 'plan_direct_consultants') {
    fin_mod_plan_direct_consultants($view);
  }
}

/**
 * Modifies plan_direct_consultants
 */
function fin_mod_plan_direct_consultants(&$view) {
  $entity_ids = array();
  foreach ($view->args as $entity_id) {
    $entity_ids[] = $entity_id;
  }
  if (!empty($entity_ids)) {

    $plan_contact_results = db_query("SELECT entity_id FROM field_data_field_plan_er WHERE field_plan_er_target_id IN (:entity_ids) AND bundle = 'plan_contact'", array("entity_ids" => $entity_ids))->fetchCol();

    $plan_contacts = entity_load('paragraphs_item', $plan_contact_results);
    $lead_contact_id = '';
    foreach ($plan_contacts as $plan_contact) {
      $plan_contact_wrapper = entity_metadata_wrapper('paragraphs_item', $plan_contact);
      $lead_contact = $plan_contact_wrapper->field_lead_plan_contact->value();
      if ($lead_contact == 1) {
        $lead_contact_id = $plan_contact_wrapper->getIdentifier();
      }
    }
    if (!empty($lead_contact_id)) {
      $results = db_query('SELECT entity_id FROM field_data_field_job_history WHERE field_job_history_value IN (:entity_ids)', array("entity_ids" => $lead_contact_id))->fetchCol();

      $contacts = entity_load('node', $results);

      foreach ($contacts as $contact) {
        $contact_wrapper = entity_metadata_wrapper('node', $contact);
        $name = $contact_wrapper->title_field->value();
        $email = $contact_wrapper->field_email->value();
        $title = $contact_wrapper->field_job_title->value();
        $phone = $contact_wrapper->field_address->phone_number->value();
        $ext = $contact_wrapper->field_address->phone_number_extension->value();
        $view->field['nothing']->options['alter']['text'] = $name;
        $view->field['nothing_1']->options['alter']['text'] = $phone;
        $view->field['nothing_2']->options['alter']['text'] = $email;
        $view->field['nothing_3']->options['alter']['text'] = $title;
        $view->field['nothing_4']->options['alter']['text'] = $ext;
      }
    }
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
 * Replaces state name with state code
 */
function fin_mod_state_code($state) {
  $administrative_areas = _addressfield_get_administrative_areas_defaults();
  foreach ($administrative_areas as $country => $states) {
    $states = array_flip($states);
    $state_code = $states[$state];
    if (isset($state_code)) {
      return $state_code;
    }
  }
  if (!isset($state_code)) {
    return FALSE;
  }
}

/**
 * Modifies content lists view.
 */
function fin_mod_content_list(&$view, &$query) {
  module_load_include('inc', 'addressfield', 'addressfield.administrative_areas');

  if (!empty($view->exposed_raw_input['field_address_administrative_area_selective'])) {
    foreach ($query->where[2]['conditions'] as $key => &$where) {
      if ($where['field'] == 'field_data_field_address.field_address_administrative_area') {
        if (is_array($where['value'])) {
          foreach ($where['value'] as $where_key => $value) {
            $state = fin_mod_state_code($value);
            if ($state != FALSE) {
              $query->where[2]['conditions'][$key]['value'][$where_key] = $state;
            }
          }
        }
      }
    }
    foreach ($query->where[1]['conditions'] as $key => $where_office) {
      if ($where_office['field'] == 'field_data_field_office_type_tr.field_office_type_tr_tid') {
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

/**
 * 
 */
function fin_mod_views_pre_render(&$view) {
  if ($view->current_display == 'consultant_plan_managers') {
    $view = fin_mod_consultant_plan_manager_remove($view);
  }
}

function fin_mod_consultant_plan_manager_remove(&$view) {
  foreach ($view->result as $row => $result) {
    if ($result->field_field_consultant_type_tr[0]['raw']['taxonomy_term']->vocabulary_machine_name == 'consultant_types') {
      $consultant_type = $result->field_field_consultant_type_tr[0]['raw']['taxonomy_term']->name;
      $major = $result->taxonomy_term_data_taxonomy_term_hierarchy_name;
      $minor = $result->taxonomy_term_data_node_name;
      switch ($consultant_type) {
        case "General":
          break;
        case "Real Estate":
          if ($major != 'Real Estate') {
            unset($view->result[$row]);
          }
          break;
        case "Private Equity":
          if ($major != 'Private Equity') {
            unset($view->result[$row]);
          }
          break;
        case "Alternatives":
          $alternatives = array(
            'Real Estate',
            'Private Equity',
            'Hedge Funds',
            'Real Assets',
          );
          if (!in_array($major, $alternatives)) {
            unset($view->result[$row]);
          }
          break;
        case "Hedge Funds":
          if ($major != 'Hedge Fund') {
            unset($view->result[$row]);
          }
          break;
        case "Project-Basis":
          break;
        case "Timber":
          if ($major != 'Real Assets' && $minor != 'Timber') {
            unset($view->result[$row]);
          }
          break;
        case "Infrastructure":
          if ($major != 'Real Assets' && $minor != 'Infastructure') {
            unset($view->result[$row]);
          }
          break;
        case "Outsourced CIO":
          break;
        case "Public Equities":
          $public_equities = array(
            'Active Equity',
            'Passive Equity',
          );
          if (!in_array($major, $public_equities)) {
            unset($view->result[$row]);
          }
          break;
        case "Real Assets":
          if ($major != 'Real Assets') {
            unset($view->result[$row]);
          }
          break;
      }
    }
  }
}
