<?php
/**
 * @file
 * fin_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fin_content_types_field_group_info() {
  $export = array();

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
    'weight' => '8',
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
        'required_fields' => 1,
        'classes' => 'group-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
        'required_fields' => 1,
        'classes' => 'group-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
        'required_fields' => 1,
        'classes' => 'group-organization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organization|paragraphs_item|plan_contact|form'] = $field_group;

  return $export;
}
