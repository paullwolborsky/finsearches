<?php
/**
 * @file
 * fs_f_n_bt_plan.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function fs_f_n_bt_plan_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|plan|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'plan';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'modal_contact_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_mandate_link' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_asset_allocation_bf' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'plan_closed_mandates_bf' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_completed_mandates_bf' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_direct_consultants_bf' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_direct_managers_bf' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_foia_history_bf' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_lead_contact_bf' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_new_leads_mandates_bf' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_notes_bf' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_ongoing_mandates_bf' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_potential_leads_mandates_bf' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_related_news_bf' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|plan|default'] = $ds_fieldsetting;

  return $export;
}
