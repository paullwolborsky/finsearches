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
  $field_group->identifier = 'group_aua|node|consultant_firm|form';
  $field_group->group_name = 'group_aua';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'AUA',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aua field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_aua|node|consultant_firm|form'] = $field_group;

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
    'weight' => '2',
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
  $field_group->identifier = 'group_consultant_info|node|consultant_firm|form';
  $field_group->group_name = 'group_consultant_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Consultant Info',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_email',
      2 => 'field_website',
      3 => 'field_status_tr',
      4 => 'field_acronym',
      5 => 'field_aua',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Consultant Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-consultant-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_consultant_info|node|consultant_firm|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_firm_info|node|consultant_firm|default';
  $field_group->group_name = 'group_firm_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Firm Info',
    'weight' => '32',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-firm-info field-group-fieldset',
      ),
    ),
  );
  $export['group_firm_info|node|consultant_firm|default'] = $field_group;

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
    'weight' => '1',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec|node|consultant_firm|form';
  $field_group->group_name = 'group_sec';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consultant_firm';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SEC',
    'weight' => '13',
    'children' => array(
      0 => 'field_sec_number',
      1 => 'field_sec_adv_date',
      2 => 'field_sec_5a',
      3 => 'field_sec_5b_1',
      4 => 'field_sec_5c_1',
      5 => 'field_sec_5d_1_a',
      6 => 'field_sec_5d_1_b',
      7 => 'field_sec_5d_1_c',
      8 => 'field_sec_5d_1_d',
      9 => 'field_sec_5d_1_e',
      10 => 'field_sec_5d_1_f',
      11 => 'field_sec_5d_1_g',
      12 => 'field_sec_5d_1_h',
      13 => 'field_sec_5d_1_i',
      14 => 'field_sec_5d_1_j',
      15 => 'field_sec_5d_1_k',
      16 => 'field_sec_5d_1_l',
      17 => 'field_sec_5d_1_m',
      18 => 'field_sec_5f_2_a',
      19 => 'field_sec_5f_2_b',
      20 => 'field_sec_5f_2_c',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sec field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sec|node|consultant_firm|form'] = $field_group;

  return $export;
}
