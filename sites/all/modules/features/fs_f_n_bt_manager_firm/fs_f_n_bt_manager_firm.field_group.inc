<?php
/**
 * @file
 * fs_f_n_bt_manager_firm.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_n_bt_manager_firm_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|manager_firm|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manager_firm';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_website',
      2 => 'field_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'classes' => 'group-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_info|node|manager_firm|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|manager_firm|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manager_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_website',
      2 => 'field_address',
      3 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_info|node|manager_firm|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_firm_info|node|manager_firm|default';
  $field_group->group_name = 'group_firm_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manager_firm';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Firm Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_status_tr',
      1 => 'field_acronym',
      2 => 'reference_views_eva_major_style',
      3 => 'reference_views_eva_minor_style',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Firm Info',
      'instance_settings' => array(
        'classes' => 'group-firm-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_firm_info|node|manager_firm|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|manager_firm|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manager_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Firm Info',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_status_tr',
      2 => 'field_acronym',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Firm Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info|node|manager_firm|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manager_notes|node|manager_firm|form';
  $field_group->group_name = 'group_manager_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manager_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manager Notes',
    'weight' => '18',
    'children' => array(
      0 => 'field_manager_notes_ev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Manager Notes',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-manager-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_manager_notes|node|manager_firm|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manager_of_managers|node|manager_firm|form';
  $field_group->group_name = 'group_manager_of_managers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'manager_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manager of Managers',
    'weight' => '2',
    'children' => array(
      0 => 'field_manager_of_managers',
      1 => 'field_sub_manager_firms_er',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Manager of Managers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-manager-of-managers field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_manager_of_managers|node|manager_firm|form'] = $field_group;

  return $export;
}
