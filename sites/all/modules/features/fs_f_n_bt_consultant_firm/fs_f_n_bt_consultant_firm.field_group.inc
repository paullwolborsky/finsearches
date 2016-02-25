<?php
/**
 * @file
 * fs_f_n_bt_consultant_firm.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_n_bt_consultant_firm_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branch_offices|node|consultant_firm|form';
  $field_group->group_name = 'group_branch_offices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Branch Offices',
    'weight' => '6',
    'children' => array(
      0 => 'field_branch_offices_ev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Branch Offices',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-branch-offices field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_branch_offices|node|consultant_firm|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_office|node|consultant_firm|form';
  $field_group->group_name = 'group_main_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Office',
    'weight' => '5',
    'children' => array(
      0 => 'field_main_office_ev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Main Office',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-main-office field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_main_office|node|consultant_firm|form'] = $field_group;

  return $export;
}
