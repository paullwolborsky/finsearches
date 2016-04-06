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
    'modal_office_link' => array(
      'weight' => '1',
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
  $ds_layout->id = 'node|consultant_firm|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'consultant_firm';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'consultant_main_office_bf',
        1 => 'modal_office_link',
      ),
      'above_right' => array(
        2 => 'consultant_node_map_bf',
      ),
      'middle' => array(
        3 => 'consultant_branch_offices_bf',
      ),
      'footer' => array(
        4 => 'consultant_plan_managers_bf',
        5 => 'consultant_plans_bf',
        6 => 'consultant_mandate_managers_bf',
        7 => 'consultant_contacts_bf',
        8 => 'consultant_imr_contacts_bf',
        9 => 'modal_contact_link',
        10 => 'consultant_mandates_bf',
      ),
    ),
    'fields' => array(
      'consultant_main_office_bf' => 'above_left',
      'modal_office_link' => 'above_left',
      'consultant_node_map_bf' => 'above_right',
      'consultant_branch_offices_bf' => 'middle',
      'consultant_plan_managers_bf' => 'footer',
      'consultant_plans_bf' => 'footer',
      'consultant_mandate_managers_bf' => 'footer',
      'consultant_contacts_bf' => 'footer',
      'consultant_imr_contacts_bf' => 'footer',
      'modal_contact_link' => 'footer',
      'consultant_mandates_bf' => 'footer',
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
  $export['node|consultant_firm|default'] = $ds_layout;

  return $export;
}
