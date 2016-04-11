<?php
/**
 * @file
 * fs_f_n_bt_consultant_firm.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function fs_f_n_bt_consultant_firm_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'SEC Unique';
  $rule->name = 'sec_unique';
  $rule->field_name = 'field_sec_number';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'consultant_firm';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      3 => 0,
      4 => 0,
      5 => 0,
      2 => 0,
      1 => 0,
      6 => 0,
      7 => 0,
      8 => 0,
      9 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'SEC number must be Unique';
  $export['sec_unique'] = $rule;

  return $export;
}
