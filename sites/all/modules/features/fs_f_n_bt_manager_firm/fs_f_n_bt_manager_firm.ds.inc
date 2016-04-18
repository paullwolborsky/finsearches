<?php
/**
 * @file
 * fs_f_n_bt_manager_firm.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function fs_f_n_bt_manager_firm_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'manager_node_map_bf';
  $ds_field->label = 'Manager Node Map BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|map_views-map_manager_node',
    'block_render' => '1',
  );
  $export['manager_node_map_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'manager_notes_bf';
  $ds_field->label = 'Manager Notes BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|comment_views-manager_notes',
    'block_render' => '1',
  );
  $export['manager_notes_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'manager_plans_bf';
  $ds_field->label = 'Manager Plans BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|reference_views-manager_plans',
    'block_render' => '1',
  );
  $export['manager_plans_bf'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function fs_f_n_bt_manager_firm_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|manager_firm|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'manager_firm';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'group_firm_info',
        2 => 'group_contact_info',
        3 => 'field_status_tr',
        5 => 'field_acronym',
        6 => 'field_address',
        9 => 'field_email',
        10 => 'field_website',
      ),
      'footer' => array(
        1 => 'manager_notes_bf',
        9 => 'consultants_by_plan_entity_view_1',
      ),
      'above_right' => array(
        3 => 'group_contact_info',
        6 => 'field_address',
        7 => 'field_email',
        8 => 'field_website',
      ),
      'middle' => array(
        4 => 'manager_mandates_bf',
        7 => 'manager_plans_bf',
      ),
      'footer' => array(
        8 => 'manager_notes_bf',
      ),
    ),
    'fields' => array(
      'group_firm_info' => 'above_left',
      'manager_notes_bf' => 'footer',
      'field_status_tr' => 'above_left',
      'group_contact_info' => 'above_right',
      'manager_mandates_bf' => 'middle',
      'field_acronym' => 'above_left',
      'field_address' => 'above_left',
      'manager_plans_bf' => 'middle',
      'manager_notes_bf' => 'footer',
      'field_email' => 'above_left',
      'field_website' => 'above_left',
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
  $export['node|manager_firm|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|manager_firm|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'manager_firm';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'three_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'group_info',
        1 => 'title_field',
        4 => 'field_acronym',
        5 => 'field_status_tr',
      ),
      'above_middle' => array(
        2 => 'group_contact_info',
        8 => 'field_address',
        10 => 'field_email',
        11 => 'field_website',
      ),
      'above_right' => array(
        3 => 'group_manager_of_managers',
        12 => 'field_manager_of_managers',
        13 => 'field_sub_manager_firms_er',
      ),
      'hidden' => array(
        6 => 'path',
        7 => 'body',
        9 => 'field_serialized_comment',
        14 => 'field_tasks',
        18 => '_add_existing_field',
      ),
      'footer' => array(
        15 => 'field_manager_notes_ev',
        16 => 'group_manager_notes',
        17 => 'field_content_type_shortcode_tr',
      ),
    ),
    'fields' => array(
      'group_info' => 'above_left',
      'title_field' => 'above_left',
      'group_contact_info' => 'above_middle',
      'group_manager_of_managers' => 'above_right',
      'field_acronym' => 'above_left',
      'field_status_tr' => 'above_left',
      'path' => 'hidden',
      'body' => 'hidden',
      'field_address' => 'above_middle',
      'field_serialized_comment' => 'hidden',
      'field_email' => 'above_middle',
      'field_website' => 'above_middle',
      'field_manager_of_managers' => 'above_right',
      'field_sub_manager_firms_er' => 'above_right',
      'field_tasks' => 'hidden',
      'field_manager_notes_ev' => 'footer',
      'group_manager_notes' => 'footer',
      'field_content_type_shortcode_tr' => 'footer',
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
      'above_middle' => 'div',
      'above_right' => 'div',
      'middle' => 'div',
      'below_left' => 'div',
      'below_middle' => 'div',
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
  $export['node|manager_firm|form'] = $ds_layout;

  return $export;
}
