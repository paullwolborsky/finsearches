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

  return $export;
}
