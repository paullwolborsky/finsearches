<?php

/**
 * Implements hook_views_pre_build().
 */
function fin_mod_views_pre_build(&$view) {
  if (isset($view->args) && $view->name == 'mandate_plan_info') {
    fin_mod_mandate_plan_info($view);
  }
  if (isset($view->args) && $view->name == 'plan_direct_consultants') {
    fin_mod_plan_direct_consultants_pre($view);
  }
}

/**
 * hook_views_pre_build for plan_direct_consultants
 */
function fin_mod_plan_direct_consultants_pre(&$view) {
  // Short circuit if we are not on a node page
  if (arg(0) != 'node') {
    return;
  }

  // Display suite blocks are having trouble passing the context in properly.
  $view->args[] = arg(1);

  return;
}

/**
 * Modifies plan_direct_consultants
 */
function fin_mod_plan_direct_consultants_query(&$view, &$query) {

  // Force the view to use these two fields in the GROUP BY clause.
  // If the view does not have aggregation enabled, views will ignore this.
  $query->distinct = TRUE;
  $query->add_groupby('field_collection_item.item_id');
  $query->add_groupby('node_field_data_field_consultant_contact_er.nid');
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
        // Condition check, skip if there is no lead plan contact.
        if (isset($plan_contact_wrapper->field_lead_plan_contact->value)) {
          $lead_plan = $paragraph_wrapper->field_lead_plan_contact->value();
        }
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
    // normalize state names
    $state = ucfirst(strtolower($state));
    if (array_key_exists($state, $states)) {
      $state_code = $states[$state];
      if (isset($state_code)) {
        return $state_code;
      }
    }
  }
  if (!isset($state_code)) {
    return FALSE;
  }
}

function fin_mod_content_list_state(&$query, $where, $conditions_key, $key) {
  if ($where['operator'] == 'LIKE') {
    // removes and then readds %s - maybe regex better?
    $value = trim($where['value'], "%");
    // Should only translate state information that is not already in code form
    if (strlen($value) > 2) {
      $state = fin_mod_state_code($value);
      $query->where[$conditions_key]['conditions'][$key]['value'] = "%" . $state . "%";
    }
  }
}

/**
 * Unset Main Office requirement.
 */
function fin_mod_main_office_remove(&$query, $conditions_key, $key) {
  unset($query->where[$conditions_key]['conditions'][$key]);
}

/**
 * Modifies content lists view.
 */
function fin_mod_content_list(&$view, &$query) {
  module_load_include('inc', 'addressfield', 'addressfield.administrative_areas');
  if (!empty($view->exposed_raw_input['field_address_administrative_area']) || !empty($view->exposed_raw_input['field_address_locality'])) {
    foreach ($query->where as $conditions_key => $conditions) {
      foreach ($conditions['conditions'] as $key => &$where) {
        if(strpos($where['field'], 'field_data_field_address.field_address_administrative_area')) {
          fin_mod_content_list_state($query, $where, $conditions_key, $key);
        }
        if (strpos($where['field'], 'field_data_field_office_type_tr.field_office_type_tr_tid')) {
          fin_mod_main_office_remove($query, $conditions_key, $key);
        }
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
  elseif ($view->name == 'manager_list'/* && $view->current_display == 'block_2' */) {
    fin_mod_manager_list($view, $query);
  }
  if (isset($view->args) && $view->name == 'plan_direct_consultants') {
    fin_mod_plan_direct_consultants_query($view, $query);
  }
  if ($view->current_display == 'consultant_plan_managers') {
    $query->distinct = TRUE;
    $query->add_groupby('node_field_data_field_plan_er_nid');
    $query->add_groupby('field_collection_item_field_data_field_manager_roster_fc__fi');
    $query->add_groupby('field_collection_item_field_data_field_manager_roster_fc__fi_2');
  }
}

function fin_mod_manager_list(&$view, &$query) {
  unset($query->where[2]['conditions']);
  $db_or = db_or();
  $db_and = db_and();
  $db_and->condition("field_collection_item_field_data_field_manager_roster_fc__field_data_field_major_minor_style_tr.field_major_minor_style_tr_tid", 957, "!=");
  $db_and->condition("field_data_field_plan_type_tr.field_plan_type_tr_tid", 1129);
  $db_or->condition("field_data_field_plan_type_tr.field_plan_type_tr_tid", 1129, "!=");
  $db_or->condition($db_and);
  $query->add_where(2, $db_or);
}

/**
 * Implements hook_views_pre_render().
 */
function fin_mod_views_pre_render(&$view) {
  if ($view->current_display == 'consultant_plan_managers' || $view->current_display == 'consultants_by_plan') {
    $view = fin_mod_consultant_plan_manager_remove($view);
  }
}

function fin_mid_consultant_plan_manager_all_types($view) {
  $general = TRUE;
  $outsourced = TRUE;
  foreach ($view->result as $row => $result) {
    if ($view->current_display == 'consultant_plan_managers') {
      if (isset($result->field_field_consultant_type_tr)) {
        $consultant_type = $result->field_field_consultant_type_tr[0]['raw']['taxonomy_term']->name;
      }
    }
    else if ($view->current_display == 'consultants_by_plan') {
      if (isset($result->taxonomy_term_data_field_data_field_consultant_type_tr_name)) {
        $consultant_type = $result->taxonomy_term_data_field_data_field_consultant_type_tr_name;
      }
    }
    if (!isset($consultant_type) || $consultant_type == 'Project-Basis') {
      continue;
    }
    else if ($consultant_type != 'General') {
      $general = FALSE;
    }
    else if ($consultant_type != 'Outsourced CIO') {
      $outsourced = FALSE;
    }
  }
  return array('general' => $general, 'outsourced' => $outsourced);
}

function fin_mod_consultant_plan_manager_remove(&$view) {
  $all_types = fin_mid_consultant_plan_manager_all_types($view);
  foreach ($view->result as $row => $result) {
    // refactor if this gets more complex than two or three.
    if ($view->current_display == 'consultant_plan_managers') {
      if (isset($result->field_field_consultant_type_tr_1)) {
        if ($result->field_field_consultant_type_tr_1[0]['raw']['taxonomy_term']->vocabulary_machine_name == 'consultant_types') {
          $consultant_type = $result->field_field_consultant_type_tr_1[0]['raw']['taxonomy_term']->name;
        }
      }
    }
    else if ($view->current_display == 'consultants_by_plan') {
      if (isset($result->taxonomy_term_data_field_data_field_consultant_type_tr_name)) {
        $consultant_type = $result->taxonomy_term_data_field_data_field_consultant_type_tr_name;
      }
    }
    if (isset($result->field_field_major_minor_style_tr[0])) {
      $tid = $result->field_field_major_minor_style_tr[0]['raw']['tid'];
    }
    if (isset($consultant_type) && isset($tid)) {
      fin_mod_consultant_plan_manager_remove_tid($view, $row, $consultant_type, $tid, $all_types);
    }
  }
  $view->result = array_slice($view->result, 0, 100, TRUE);
}

/**
 * Unsets unwanted results by tid
 */
function fin_mod_consultant_plan_manager_remove_tid(&$view, $row, $consultant_type, $tid, $all_types) {
  switch ($consultant_type) {
    case "General":
      if ($all_types['general'] != TRUE) {
        unset($view->result[$row]);
      }
      break;
    case "Real Estate":
      if ($tid != 881 && $tid != 950 && $tid != 539 && $tid != 566 && $tid != 745) {
        unset($view->result[$row]);
      }
      break;
    case "Private Equity":
      if ($tid != 879 && $tid != 930 && $tid != 540 && $tid != 565 && $tid != 744) {
        unset($view->result[$row]);
      }
      break;
    case "Alternatives":
      $alternatives = array(
        539,
        1108,
        566,
        548,
        567,
        540,
        565,
        744,
        745,
        881,
        950,
        879,
        930,
        874,
        887,
        1095,
        880,
        941,
      );
      if (!in_array($tid, $alternatives)) {
        unset($view->result[$row]);
      }
      break;
    case "Hedge Funds":
      if ($tid != 874 && $tid != 887 && $tid != 1095) {
        unset($view->result[$row]);
      }
      break;
    case "Project-Basis":
      unset($view->result[$row]);
      break;
    case "Timber":
      if ($tid != 880 && $tid != 941 && $tid != 882 && $tid != 949 && $tid != 544 && $tid != 746 && $tid != 567 && $tid != 548) {
        unset($view->result[$row]);
      }
      break;
    case "Infrastructure":
      if ($tid != 880 && $tid != 941 && $tid != 875 && $tid != 946 && $tid != 545) {
        unset($view->result[$row]);
      }
      break;
    case "Outsourced CIO":
      if ($all_types['outsourced'] != TRUE) {
        unset($view->result[$row]);
      }
      break;
    case "Public Equities":
      $public_equities = array(
        815,
        898,
      );
      if (!in_array($tid, $public_equities)) {
        unset($view->result[$row]);
      }
      break;
    case "Real Assets":
      if ($tid != 880 && $tid != 941 && $tid != 746 && $tid != 567 && $tid != 548) {
        unset($view->result[$row]);
      }
      break;
    default:
      unset($view->result[$row]);
      break;
  }
  $view->result = array_slice($view->result, 0, 100, TRUE);
}

/**
 * Unsets unwanted results by string.
 */
/* function fin_mod_consultant_plan_manager_remove_string(&$view, $row, $consultant_type, $major, $minor) {
  switch ($consultant_type) {
  case "General":
  if ($all_types['general'] != TRUE) {
  unset($view->result[$row]);
  }
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
  if ($all_types['outsourced'] != TRUE) {
  unset($view->result[$row]);
  }
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
  } */

/**
 * Implements hook_views_data_alter().
 */
function fin_mod_views_data_alter(&$data) {
  $data['taxonomy_term_hierarchy']['table']['group'] = t('Taxonomy term');

  $data['term_hierarchy']['moved to'] = 'taxonomy_term_hierarchy';
  $data['taxonomy_term_hierarchy']['table']['join'] = array(
    'taxonomy_term_hierarchy' => array(
      // links to self through left.parent = right.tid (going down in depth)
      'field' => 'tid',
      'left_field' => 'parent',
    ),
    'taxonomy_term_data' => array(
      // links directly to taxonomy_term_data via tid
      'left_field' => 'tid',
      'field' => 'parent',
    ),
  );

  // Provide a "default relationship" to keep older views from choking.
  $data['taxonomy_term_hierarchy']['table']['default_relationship'] = array(
    'node' => array(
      'table' => 'node',
      'field' => 'term_node_tid',
    ),
  );

  $data['taxonomy_term_hierarchy']['child'] = array(
    'title' => t('Child term'),
    'help' => t('The child term of the term. This can produce duplicate entries.'),
    'relationship' => array(
      'base' => 'taxonomy_term_data',
      'field' => 'tid',
      'label' => t('Child'),
    ),
    'filter' => array(
      'help' => t('Filter the results of "Taxonomy: Term" by the child pid.'),
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'help' => t('The child term of the term.'),
      'handler' => 'views_handler_argument_taxonomy',
    ),
  );
}

/**
 * Designed to check if a view is empty.
 */
function fin_mod_view_result_empty_check($results) {
  // Results are not truly empty in the fake empty view. This checks for common
  // items that don't actually mean the view has items in it.
  $empty = TRUE;
  foreach ($results as $result) {
    foreach ($result as $key => $item) {
      if (!empty($item) && $key != 'nid' && $item != 'field_collection_item' && $key != 'field_data_title_field_node_entity_type') {
        $empty = FALSE;
      }
    }
  }
  return $empty;
}

/**
 * Designed to check if exposed filters are empty.
 */
function fin_mod_exposed_filter_empty_check($filters) {
  $exposed_empty = TRUE;
  foreach ($filters as $key => $value) {
    if ((($key == 'field_major_minor_style_tr_tid' && $value != 'All') || (!empty($value) && $key != 'field_major_minor_style_tr_tid')) && $key != 'items_per_page') {
      $exposed_empty = FALSE;
    }
  }
  return $exposed_empty;
}

/**
 * Implements hook_views_post_execute().
 */
function fin_mod_views_post_execute(&$view) {
  // Checks the condition for one particular view. Can easily be expanded to
  // all views if desired.
  if (($view->name == 'reference_views' && $view->current_display == 'block_1')
    || ($view->name == 'plan_mandates')
    || ($view->name == 'manager_of_managers_views' && $view->current_display == 'manager_sub_managers')
    || ($view->name == 'consultant_imr_views' && $view->current_display == 'consultant_imr_notes')
    || ($view->name == 'consultant_imr_views' && $view->current_display == 'consultant_imr_questionnaire')
    || ($view->name == 'reference_views' && $view->current_display == 'mandate_manager_finalists')
  ) {
    $empty = fin_mod_view_result_empty_check($view->result);
    $exposed_empty = fin_mod_exposed_filter_empty_check($view->exposed_raw_input);
    if ($empty == TRUE && $exposed_empty == TRUE) {
      $view->fin_mod_suppress = TRUE;
    }
    else if ($empty == TRUE && $exposed_empty == FALSE) {
      $view->result = array();
    }
  }
}
