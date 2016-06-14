<?php
/**
 * @file
 * fs_f_fc_bt_mandate_comments_fc.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fs_f_fc_bt_mandate_comments_fc_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_mandate_comments_fc|form';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_mandate_comments_fc';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_3col_stacked_equal_width';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_subject',
      ),
      'middle' => array(
        1 => 'field_author_ur',
      ),
      'right' => array(
        2 => 'field_date',
      ),
      'footer' => array(
        3 => 'field_comment',
      ),
      'hidden' => array(
        4 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_subject' => 'left',
      'field_author_ur' => 'middle',
      'field_date' => 'right',
      'field_comment' => 'footer',
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
  $export['field_collection_item|field_mandate_comments_fc|form'] = $ds_layout;

  return $export;
}
