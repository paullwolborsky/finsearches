<?php
/**
 * @file
 * fs_f_n_bt_plan.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_n_bt_plan_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asset_allocation_history|node|plan|form';
  $field_group->group_name = 'group_asset_allocation_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Asset Allocation History',
    'weight' => '7',
    'children' => array(
      0 => 'field_asset_allocation_history',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Asset Allocation History',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-asset-allocation-history field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_asset_allocation_history|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_consultant_roster|node|plan|form';
  $field_group->group_name = 'group_consultant_roster';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Consultant Roster',
    'weight' => '4',
    'children' => array(
      0 => 'field_consultant_roster_fc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Consultant Roster',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-consultant-roster field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_consultant_roster|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|plan|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_address',
      1 => 'field_website',
      2 => 'field_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'classes' => 'group-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_contact_info|node|plan|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|plan|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_address',
      1 => 'field_website',
      2 => 'field_email',
      3 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_contact_info|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foia_history|node|plan|form';
  $field_group->group_name = 'group_foia_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FOIA History',
    'weight' => '8',
    'children' => array(
      0 => 'field_foia_history',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'FOIA History',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-foia-history field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_foia_history|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manager_roster|node|plan|form';
  $field_group->group_name = 'group_manager_roster';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manager Roster',
    'weight' => '5',
    'children' => array(
      0 => 'field_manager_roster_fc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Manager Roster',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-manager-roster field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_manager_roster|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_placement_policy|node|plan|form';
  $field_group->group_name = 'group_placement_policy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Placement Policy',
    'weight' => '3',
    'children' => array(
      0 => 'field_placement_policy_link',
      1 => 'field_placement_policy_tr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Placement Policy',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-placement-policy field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_placement_policy|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_contacts|node|plan|form';
  $field_group->group_name = 'group_plan_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Contacts',
    'weight' => '1',
    'children' => array(
      0 => 'field_plan_contacts_embed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Plan Contacts',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-plan-contacts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_plan_contacts|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_info|node|plan|default';
  $field_group->group_name = 'group_plan_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_placement_policy_link',
      1 => 'field_plan_type_tr',
      2 => 'field_status_tr',
      3 => 'field_placement_policy_tr',
      4 => 'field_acronym',
      5 => 'reference_views_eva_foia_required',
      6 => 'reference_views_eva_plan_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Plan Info',
      'instance_settings' => array(
        'classes' => 'group-plan-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_plan_info|node|plan|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_info|node|plan|form';
  $field_group->group_name = 'group_plan_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Info',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_plan_type_tr',
      2 => 'field_status_tr',
      3 => 'field_acronym',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Plan Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-plan-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_plan_info|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_notes|node|plan|form';
  $field_group->group_name = 'group_plan_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Notes',
    'weight' => '9',
    'children' => array(
      0 => 'field_plan_notes_ev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Plan Notes',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-plan-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_plan_notes|node|plan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_size_history|node|plan|form';
  $field_group->group_name = 'group_plan_size_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'plan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Size History',
    'weight' => '6',
    'children' => array(
      0 => 'field_plan_size_history',
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
  $export['group_plan_size_history|node|plan|form'] = $field_group;

  return $export;
}
