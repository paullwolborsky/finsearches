<?php
/**
 * @file
 * fs_f_fc_bt_inv_mgr_rsch.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_fc_bt_inv_mgr_rsch_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invest_mgr_research|node|consultant_firm|form';
  $field_group->group_name = 'group_invest_mgr_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Investment Manager Research',
    'weight' => '3',
    'children' => array(
      0 => 'field_invest_mgr_research',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-invest-mgr-research field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_invest_mgr_research|node|consultant_firm|form'] = $field_group;

  return $export;
}
