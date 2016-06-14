<?php

/**
 * @file
 * fs_f_pg_bt_plan_contact.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fs_f_pg_bt_plan_contact_field_default_field_bases() {
  $field_bases = array();
  
  // Exported field_base: 'field_lead_plan_contact'
  $field_bases['field_lead_plan_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_lead_plan_contact',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );
  
  return $field_bases;
}