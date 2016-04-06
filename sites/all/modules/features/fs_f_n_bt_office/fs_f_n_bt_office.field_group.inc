<?php
/**
 * @file
 * fs_f_n_bt_office.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_n_bt_office_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office_info|node|office|default';
  $field_group->group_name = 'group_office_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'office';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Office Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_email',
      1 => 'field_consultant_firm_er',
      2 => 'field_address',
      3 => 'field_office_type_tr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-office-info field-group-fieldset',
      ),
    ),
  );
  $export['group_office_info|node|office|default'] = $field_group;

  return $export;
}
