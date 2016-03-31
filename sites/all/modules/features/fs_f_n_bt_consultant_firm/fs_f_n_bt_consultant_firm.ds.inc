<?php
/**
 * @file
 * fs_f_n_bt_consultant_firm.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fs_f_n_bt_consultant_firm_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|consultant_firm|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'consultant_firm';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'consultant_branch_offices_bf' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_contacts_bf' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_main_office_bf' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_mandates_bf' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_mandate_managers_bf' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_node_map_bf' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_plans_bf' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_plan_managers_bf' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_contact_link' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_mandate_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_office_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_plan_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|consultant_firm|default'] = $ds_fieldsetting;

  return $export;
}
