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
    'plan_asset_allocation_bf' => array(
      'weight' => '9',
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
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_direct_managers_bf' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_foia_history_bf' => array(
      'weight' => '12',
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
    'plan_node_map_bf' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'plan_notes_bf' => array(
      'weight' => '13',
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
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_contact_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'modal_mandate_link' => array(
      'weight' => '14',
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

/**
 * Implements hook_ds_custom_fields_info().
 */
function fs_f_n_bt_plan_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_asset_allocation_bf';
  $ds_field->label = 'Plan Asset Allocation BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|93036f26f111b21fd8fa940f2e0475b8',
    'block_render' => '1',
  );
  $export['plan_asset_allocation_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_closed_mandates_bf';
  $ds_field->label = 'Plan Closed Mandates BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|9a04f4ee970f1705dea060012769f02f',
    'block_render' => '1',
  );
  $export['plan_closed_mandates_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_completed_mandates_bf';
  $ds_field->label = 'Plan Completed Mandates BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|db526bf0c55fcfc67b44b4444e12c392',
    'block_render' => '1',
  );
  $export['plan_completed_mandates_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_direct_consultants_bf';
  $ds_field->label = 'Plan Direct Consultants BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|cdb9a3807eef93e1e5c5af3aed3b69fa',
    'block_render' => '1',
  );
  $export['plan_direct_consultants_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_direct_managers_bf';
  $ds_field->label = 'Plan Direct Managers BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|reference_views-block_1',
    'block_render' => '1',
  );
  $export['plan_direct_managers_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_foia_history_bf';
  $ds_field->label = 'Plan FOIA History BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|7cd5e56bdc27f8d54f79592285887e5a',
    'block_render' => '1',
  );
  $export['plan_foia_history_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_lead_contact_bf';
  $ds_field->label = 'Plan Lead Contact BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|8e6377fde6fbf7c1350004fdb7785134',
    'block_render' => '1',
  );
  $export['plan_lead_contact_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_new_leads_mandates_bf';
  $ds_field->label = 'Plan New Leads Mandates BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|c5af89d110514d04d5998e1a7a0c7bf5',
    'block_render' => '1',
  );
  $export['plan_new_leads_mandates_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_node_map_bf';
  $ds_field->label = 'Plan Node Map BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|map_views-map_plan_node',
    'block_render' => '1',
  );
  $export['plan_node_map_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_notes_bf';
  $ds_field->label = 'Plan Notes BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|comment_views-plan_notes',
    'block_render' => '1',
  );
  $export['plan_notes_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_ongoing_mandates_bf';
  $ds_field->label = 'Plan Ongoing Mandates BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|4a42fa41960927911eb298089298779b',
    'block_render' => '1',
  );
  $export['plan_ongoing_mandates_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_potential_leads_mandates_bf';
  $ds_field->label = 'Plan Potential Leads Mandates BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|ed0712b556672f3843eb9bbf4e2aae25',
    'block_render' => '1',
  );
  $export['plan_potential_leads_mandates_bf'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'plan_related_news_bf';
  $ds_field->label = 'Plan Related News BF';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|eea3ae9383c010a99d5c2979eab1c1e1',
    'block_render' => '1',
  );
  $export['plan_related_news_bf'] = $ds_field;

  return $export;
}
