<?php
/**
 * @file
 * fs_f_fn_entityforms.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fs_f_fn_entityforms_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entityform|contact_us|form';
  $ds_layout->entity_type = 'entityform';
  $ds_layout->bundle = 'contact_us';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_contact_fin_info',
        1 => 'field_contact_intro',
      ),
      'left' => array(
        2 => 'field_contact_name',
        3 => 'field_contact_email',
      ),
      'right' => array(
        4 => 'field_contact_job_title',
        5 => 'field_contact_organization',
      ),
      'footer' => array(
        6 => 'field_contact_message',
      ),
      'hidden' => array(
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_contact_fin_info' => 'header',
      'field_contact_intro' => 'header',
      'field_contact_name' => 'left',
      'field_contact_email' => 'left',
      'field_contact_job_title' => 'right',
      'field_contact_organization' => 'right',
      'field_contact_message' => 'footer',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['entityform|contact_us|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'contact_current_job_bf',
      ),
      'middle' => array(
        1 => 'body',
      ),
      'right' => array(
        2 => 'field_photo',
      ),
      'footer' => array(
        3 => 'contact_job_history_bf',
      ),
    ),
    'fields' => array(
      'contact_current_job_bf' => 'left',
      'body' => 'middle',
      'field_photo' => 'right',
      'contact_job_history_bf' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|contact|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'three_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'title_field',
      ),
      'above_middle' => array(
        1 => 'body',
      ),
      'above_right' => array(
        2 => 'field_photo',
      ),
      'middle' => array(
        3 => 'group_job_history',
        4 => 'field_job_history',
      ),
      'footer' => array(
        5 => 'field_content_type_shortcode_tr',
        6 => 'group_internal_use_only',
        7 => 'field_consultant_firm_er',
        9 => 'field_consultant_office_er',
        10 => 'field_manager_firm_er',
        12 => 'field_plan_er',
        13 => 'field_mandate_er',
        14 => 'field_geographic_tr',
        15 => 'field_major_minor_style_tr',
        16 => 'field_plan_type_tr',
        17 => 'field_plan_size',
        18 => 'field_job_title',
        19 => 'field_address',
        20 => 'field_email',
        21 => 'field_website',
        22 => 'field_migration_notes',
      ),
      'hidden' => array(
        8 => 'path',
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'above_left',
      'body' => 'above_middle',
      'field_photo' => 'above_right',
      'group_job_history' => 'middle',
      'field_job_history' => 'middle',
      'field_content_type_shortcode_tr' => 'footer',
      'group_internal_use_only' => 'footer',
      'field_consultant_firm_er' => 'footer',
      'path' => 'hidden',
      'field_consultant_office_er' => 'footer',
      'field_manager_firm_er' => 'footer',
      '_add_existing_field' => 'hidden',
      'field_plan_er' => 'footer',
      'field_mandate_er' => 'footer',
      'field_geographic_tr' => 'footer',
      'field_major_minor_style_tr' => 'footer',
      'field_plan_type_tr' => 'footer',
      'field_plan_size' => 'footer',
      'field_job_title' => 'footer',
      'field_address' => 'footer',
      'field_email' => 'footer',
      'field_website' => 'footer',
      'field_migration_notes' => 'footer',
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
  $export['node|contact|form'] = $ds_layout;

  return $export;
}
