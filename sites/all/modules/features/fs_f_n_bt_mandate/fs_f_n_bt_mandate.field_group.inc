<?php
/**
 * @file
 * fs_f_n_bt_mandate.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_n_bt_mandate_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_consultant_info|node|mandate|form';
  $field_group->group_name = 'group_consultant_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Consultant Info',
    'weight' => '76',
    'children' => array(
      0 => 'field_consultants_finalists_er',
      1 => 'field_consultants_hired',
      2 => 'field_consultants_terminated',
      3 => 'field_consultants_onwatch_er',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-consultant-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_consultant_info|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manager_info|node|mandate|form';
  $field_group->group_name = 'group_manager_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manager Info',
    'weight' => '76',
    'children' => array(
      0 => 'field_managers_hired',
      1 => 'field_managed_amount',
      2 => 'field_managers_terminated',
      3 => 'field_managers_finalists_er',
      4 => 'field_managers_onwatch_er',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-manager-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_manager_info|node|mandate|form'] = $field_group;

  return $export;
}
