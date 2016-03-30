<?php
/**
 * @file
 * fs_f_fc_bt_foia_history.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_fc_bt_foia_history_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foia_contact|field_collection_item|field_foia_history|form';
  $field_group->group_name = 'group_foia_contact';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_foia_history';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FOIA Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_full_name',
      1 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'FOIA Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-foia-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_foia_contact|field_collection_item|field_foia_history|form'] = $field_group;

  return $export;
}
