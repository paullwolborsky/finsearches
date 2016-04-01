<?php
/**
 * @file
 * fs_f_n_bt_consultant_firm.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fs_f_n_bt_consultant_firm_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|consultant_firm|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'consultant_firm';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'consultant_branch_offices_bf' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_contacts_bf' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_imr_contacts_bf' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_main_office_bf' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_mandates_bf' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_mandate_managers_bf' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_node_map_bf' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_plans_bf' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'consultant_plan_managers_bf' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_contact_link' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_mandate_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_office_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_plan_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|consultant_firm|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function fs_f_n_bt_consultant_firm_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_branch_offices_bf';
  $ds_field->label = 'Consultant Branch Offices BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|cfe90d84f185d84a5edf29887535fcb7',
    'block_render' => '1',
  );
  $export['consultant_branch_offices_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_contacts_bf';
  $ds_field->label = 'Consultant Contacts BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|3377d28aaf4e8560d3fa61a615cae1f5',
    'block_render' => '1',
  );
  $export['consultant_contacts_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_imr_contacts_bf';
  $ds_field->label = 'Consultant IMR Contacts BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|b8566823287c1681e9f2a9a04ee18e69',
    'block_render' => '1',
  );
  $export['consultant_imr_contacts_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_main_office_bf';
  $ds_field->label = 'Consultant Main Office BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|16d4ab28f4cab22918372fc38a300fe2',
    'block_render' => '1',
  );
  $export['consultant_main_office_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_mandate_managers_bf';
  $ds_field->label = 'Consultant Mandate Managers BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|1d3e4de5a3c6370ea1e0e0674400d004',
    'block_render' => '1',
  );
  $export['consultant_mandate_managers_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_mandates_bf';
  $ds_field->label = 'Consultant Mandates BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|5ee1998437f2eb438da4e34a48ff4bae',
    'block_render' => '1',
  );
  $export['consultant_mandates_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_node_map_bf';
  $ds_field->label = 'Consultant Node Map BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|map_views-map_consultant_node',
    'block_render' => '1',
  );
  $export['consultant_node_map_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_plan_managers_bf';
  $ds_field->label = 'Consultant Plan Managers BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|0fab8197d9ef7d6fa079c252067ecb38',
    'block_render' => '1',
  );
  $export['consultant_plan_managers_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultant_plans_bf';
  $ds_field->label = 'Consultant Plans BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|02a6a486d0b43130d46ad7d8bf9d0d37',
    'block_render' => '1',
  );
  $export['consultant_plans_bf'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fs_f_n_bt_consultant_firm_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|consultant_firm|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'consultant_firm';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'two_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'title_field',
        1 => 'group_consultant_info',
        3 => 'field_status_tr',
        5 => 'field_acronym',
        7 => 'field_email',
        8 => 'field_website',
      ),
      'above_right' => array(
        2 => 'group_aua',
        4 => 'field_aua',
      ),
      'below_left' => array(
        6 => 'group_main_office',
        17 => 'field_main_office_ev',
      ),
      'below_right' => array(
        9 => 'group_branch_offices',
        12 => 'field_branch_offices_ev',
      ),
      'footer' => array(
        10 => 'field_consultant_contacts_embed',
        11 => 'field_content_type_shortcode_tr',
      ),
      'hidden' => array(
        13 => 'body',
        14 => 'path',
        15 => 'field_tasks',
        16 => 'field_wuin',
        18 => 'field_legendid',
        19 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'above_left',
      'group_consultant_info' => 'above_left',
      'group_aua' => 'above_right',
      'field_status_tr' => 'above_left',
      'field_aua' => 'above_right',
      'field_acronym' => 'above_left',
      'group_main_office' => 'below_left',
      'field_email' => 'above_left',
      'field_website' => 'above_left',
      'group_branch_offices' => 'below_right',
      'field_consultant_contacts_embed' => 'footer',
      'field_content_type_shortcode_tr' => 'footer',
      'field_branch_offices_ev' => 'below_right',
      'body' => 'hidden',
      'path' => 'hidden',
      'field_tasks' => 'hidden',
      'field_wuin' => 'hidden',
      'field_main_office_ev' => 'below_left',
      'field_legendid' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'above_left' => 'div',
      'above_right' => 'div',
      'middle' => 'div',
      'below_left' => 'div',
      'below_right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|consultant_firm|form'] = $ds_layout;

  return $export;
}
