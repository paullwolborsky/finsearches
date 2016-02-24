<?php
/**
 * @file
 * fs_f_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_consultant_roster|node|mandate|form';
  $field_group->group_name = 'group_consultant_roster';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Consultant Roster',
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
        'classes' => 'group-consultant-roster field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_consultant_roster|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internal_use_only|node|contact|form';
  $field_group->group_name = 'group_internal_use_only';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'For Internal Use Only',
    'weight' => '6',
    'children' => array(
      0 => 'field_consultant_firm_er',
      1 => 'field_consultant_office_er',
      2 => 'field_manager_firm_er',
      3 => 'field_plan_er',
      4 => 'field_mandate_er',
      5 => 'field_geographic_tr',
      6 => 'field_major_minor_style_tr',
      7 => 'field_plan_type_tr',
      8 => 'field_address',
      9 => 'field_email',
      10 => 'field_website',
      11 => 'field_job_title',
      12 => 'field_plan_size',
      13 => 'field_migration_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'For Internal Use Only',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-internal-use-only field-group-fieldset',
        'description' => 'Used to contain fields to hold data from the most recent entry in Job History. Used to service Autofill and Option Limits elsewhere.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_internal_use_only|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_history|node|contact|form';
  $field_group->group_name = 'group_job_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job History',
    'weight' => '3',
    'children' => array(
      0 => 'field_job_history',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Job History',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-job-history field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_job_history|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manager_roster|node|mandate|form';
  $field_group->group_name = 'group_manager_roster';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manager Roster',
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
        'classes' => 'group-manager-roster field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_manager_roster|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mandate_comments|node|mandate|form';
  $field_group->group_name = 'group_mandate_comments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mandate Comments',
    'weight' => '7',
    'children' => array(
      0 => 'field_mandate_comments_fc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mandate Comments',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-mandate-comments field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_mandate_comments|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mandate_info|node|mandate|default';
  $field_group->group_name = 'group_mandate_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mandate Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_currency_tr',
      1 => 'field_geographic_tr',
      2 => 'field_mandate_status_tr',
      3 => 'field_attribute_tr',
      4 => 'field_date',
      5 => 'reference_views_eva_major_style',
      6 => 'reference_views_eva_minor_style',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mandate Info',
      'instance_settings' => array(
        'classes' => 'group-mandate-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_mandate_info|node|mandate|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mandate_info|node|mandate|form';
  $field_group->group_name = 'group_mandate_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mandate Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_currency_tr',
      1 => 'field_geographic_tr',
      2 => 'field_mandate_status_tr',
      3 => 'field_major_minor_style_tr',
      4 => 'field_attribute_tr',
      5 => 'field_date',
      6 => 'field_account_size',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mandate Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-mandate-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_mandate_info|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mandate_notes|node|mandate|form';
  $field_group->group_name = 'group_mandate_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mandate Notes',
    'weight' => '8',
    'children' => array(
      0 => 'field_mandate_notes_ev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mandate Notes',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-mandate-notes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_mandate_notes|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|paragraphs_item|consultant_contact|form';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'consultant_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '4',
    'children' => array(
      0 => 'field_consultant_firm_er',
      1 => 'field_email',
      2 => 'field_address',
      3 => 'field_consultant_office_er',
      4 => 'field_website',
      5 => 'field_consultant_type_tr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_organization|paragraphs_item|consultant_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|paragraphs_item|manager_contact|form';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'manager_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '3',
    'children' => array(
      0 => 'field_manager_firm_er',
      1 => 'field_address',
      2 => 'field_email',
      3 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_organization|paragraphs_item|manager_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|paragraphs_item|plan_contact|form';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'plan_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '5',
    'children' => array(
      0 => 'field_plan_er',
      1 => 'field_email',
      2 => 'field_address',
      3 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_organization|paragraphs_item|plan_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plan_info|node|mandate|form';
  $field_group->group_name = 'group_plan_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plan Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_plan_er',
      1 => 'field_plan_size',
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
  $export['group_plan_info|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rfp|node|mandate|default';
  $field_group->group_name = 'group_rfp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'RFP',
    'weight' => '1',
    'children' => array(
      0 => 'field_rfp_link',
      1 => 'field_rfp_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'RFP',
      'instance_settings' => array(
        'classes' => 'group-rfp field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_rfp|node|mandate|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rfp|node|mandate|form';
  $field_group->group_name = 'group_rfp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'RFP',
    'weight' => '3',
    'children' => array(
      0 => 'field_rfp_link',
      1 => 'field_rfp_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'RFP',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-rfp field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_rfp|node|mandate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_search_consultant|node|mandate|form';
  $field_group->group_name = 'group_search_consultant';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Search Consultant',
    'weight' => '2',
    'children' => array(
      0 => 'field_consultant_firm_er',
      1 => 'field_consultant_contact_er',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Search Consultant',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-search-consultant field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_search_consultant|node|mandate|form'] = $field_group;

  return $export;
}
