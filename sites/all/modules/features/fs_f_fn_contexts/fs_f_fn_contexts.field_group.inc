<?php
/**
 * @file
 * fs_f_fn_contexts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_fn_contexts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_size_history|node|consultant_firm|form';
  $field_group->group_name = 'group_plan_size_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Size History',
    'weight' => '6',
    'children' => array(
      0 => 'field_plan_size_fc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Plan Size History',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-plan-size-history field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_plan_size_history|node|consultant_firm|form'] = $field_group;

  return $export;
}
