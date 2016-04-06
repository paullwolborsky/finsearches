<?php
/**
 * @file
 * fs_f_n_bt_office.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fs_f_n_bt_office_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|office|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'office';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'office_node_map_bf' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|office|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function fs_f_n_bt_office_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'office_node_map_bf';
  $ds_field->label = 'Office Node Map BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|map_views-map_office_node',
    'block_render' => '1',
  );
  $export['office_node_map_bf'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fs_f_n_bt_office_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|office|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'office';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_right' => array(
        0 => 'office_node_map_bf',
      ),
      'above_left' => array(
        1 => 'group_office_info',
        2 => 'field_consultant_firm_er',
        3 => 'field_office_type_tr',
        4 => 'field_address',
        5 => 'field_email',
      ),
    ),
    'fields' => array(
      'office_node_map_bf' => 'above_right',
      'group_office_info' => 'above_left',
      'field_consultant_firm_er' => 'above_left',
      'field_office_type_tr' => 'above_left',
      'field_address' => 'above_left',
      'field_email' => 'above_left',
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
  $export['node|office|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|office|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'office';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'two_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'title_field',
        1 => 'field_office_type_tr',
        2 => 'field_consultant_firm_er',
      ),
      'above_right' => array(
        3 => 'field_address',
        4 => 'field_email',
      ),
      'hidden' => array(
        5 => 'body',
        6 => 'path',
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'above_left',
      'field_office_type_tr' => 'above_left',
      'field_consultant_firm_er' => 'above_left',
      'field_address' => 'above_right',
      'field_email' => 'above_right',
      'body' => 'hidden',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
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
  $export['node|office|form'] = $ds_layout;

  return $export;
}
