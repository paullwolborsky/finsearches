<?php
/**
 * @file
 * fs_f_fc_inv_mgr_rsch.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fs_f_fc_inv_mgr_rsch_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_invest_mgr_research|form';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_invest_mgr_research';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_consultant_firm_er',
        1 => 'field_consultant_contact_er',
      ),
      'right' => array(
        2 => 'field_client_type_tr',
        3 => 'field_asset_class_tr',
        4 => 'field_databases_used_tr',
      ),
      'footer' => array(
        5 => 'field_questionnaire',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_consultant_firm_er' => 'left',
      'field_consultant_contact_er' => 'left',
      'field_client_type_tr' => 'right',
      'field_asset_class_tr' => 'right',
      'field_databases_used_tr' => 'right',
      'field_questionnaire' => 'footer',
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
  $export['field_collection_item|field_invest_mgr_research|form'] = $ds_layout;

  return $export;
}
