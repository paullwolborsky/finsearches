<?php
/**
 * @file
 * fs_f_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fs_f_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'reference_views';
  $view->description = 'Displays data related to the current node via node relationships.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reference Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Consultant History';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'title_field_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_contact_info_data' => 'field_contact_info_data',
    'field_contact_info_data_1' => 'field_contact_info_data_1',
  );
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['id'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['field'] = 'field_consultant_contact_er_target_id';
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_firm_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['alter']['text'] = '<strong>Consultant Firm:</strong> [field_consultant_firm_er]';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Contact */
  $handler->display->display_options['fields']['field_consultant_contact_er']['id'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['field'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_contact_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_consultant_contact_er']['alter']['text'] = '<strong>Consultant Contact:</strong> [field_consultant_contact_er]';
  $handler->display->display_options['fields']['field_consultant_contact_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_contact_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consultant Roster */
  $handler->display->display_options['fields']['field_consultant_roster_fc']['id'] = 'field_consultant_roster_fc';
  $handler->display->display_options['fields']['field_consultant_roster_fc']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['fields']['field_consultant_roster_fc']['field'] = 'field_consultant_roster_fc';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';

  /* Display: Plan -  Lead Contact */
  $handler = $view->new_display('block', 'Plan -  Lead Contact', 'plan_lead_contact');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan Contacts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_job_title' => 'field_job_title',
    'field_lead_plan_contact' => 'field_lead_plan_contact',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lead_plan_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This plan has no lead contacts.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Lead Plan Contact? */
  $handler->display->display_options['fields']['field_lead_plan_contact']['id'] = 'field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['field'] = 'field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_lead_plan_contact']['label'] = 'Lead?';
  $handler->display->display_options['fields']['field_lead_plan_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lead_plan_contact']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lead_plan_contact']['alter']['text'] = ' (Lead)';
  $handler->display->display_options['fields']['field_lead_plan_contact']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]</a>[field_lead_plan_contact]';
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'plan_contact' => 'plan_contact',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;

  /* Display: Plan - Contacts ATT */
  $handler = $view->new_display('attachment', 'Plan - Contacts ATT', 'attachment_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_job_title' => 'field_job_title',
    'field_lead_plan_contact' => 'field_lead_plan_contact',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lead_plan_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Lead Plan Contact? */
  $handler->display->display_options['fields']['field_lead_plan_contact']['id'] = 'field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['field'] = 'field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_lead_plan_contact']['label'] = '';
  $handler->display->display_options['fields']['field_lead_plan_contact']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = '';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'plan_contact' => 'plan_contact',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'plan_lead_contact' => 'plan_lead_contact',
    'default' => 0,
    'plan_contacts' => 0,
    'plan_direct_consultants' => 0,
    'block_1' => 0,
    'mandate_plan_info' => 0,
    'mandate_consultants_hired' => 0,
    'mandate_managers' => 0,
    'mandate_comments' => 0,
    'consultant_main_office' => 0,
    'consultant_branch_offices' => 0,
    'consultant_contacts' => 0,
    'consultant_mandates' => 0,
    'consultant_plans' => 0,
    'manager_mandates' => 0,
    'manager_plans' => 0,
    'eva_foia_required' => 0,
    'plan_potential_leads_mandates' => 0,
    'plan_new_leads_mandates' => 0,
    'plan_ongoing_mandates' => 0,
    'plan_completed_mandates' => 0,
    'plan_closed_mandates' => 0,
    'contact_current_job' => 0,
    'contact_job_history' => 0,
    'plan_asset_allocation' => 0,
    'plan_related_news' => 0,
    'plan_foia_history' => 0,
    'eva_plan_size' => 0,
    'eva_major_style' => 0,
    'eva_minor_style' => 0,
    'eva_asset_allocation_chart' => 0,
    'entity_view_2' => 0,
    'eva_plan_contact_edit' => 0,
    'entity_view_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Plan -  Contacts */
  $handler = $view->new_display('block', 'Plan -  Contacts', 'plan_contacts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan Contact';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_job_title' => 'field_job_title',
    'field_consultant_office_er' => 'field_consultant_office_er',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_office_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This plan has no lead contacts.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'plan_contact' => 'plan_contact',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );

  /* Display: Plan - Direct Consultants */
  $handler = $view->new_display('block', 'Plan - Direct Consultants', 'plan_direct_consultants');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultant Roster';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_consultant_type_tr' => 'field_consultant_type_tr',
    'title' => 'title',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_consultant_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Type */
  $handler->display->display_options['fields']['field_consultant_type_tr']['id'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['table'] = 'field_data_field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['field'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_type_tr']['label'] = 'Type';
  $handler->display->display_options['fields']['field_consultant_type_tr']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Contact';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'consultant_contact' => 'consultant_contact',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';

  /* Display: Plan Mandate Consultants ATT */
  $handler = $view->new_display('attachment', 'Plan Mandate Consultants ATT', 'att_plan_mandate_consultants');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_consultant_type_tr' => 'field_consultant_type_tr',
    'title_field' => 'title_field',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_consultant_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'field_consultant_firm_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_type_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/node/[nid]/edit">Edit contact roster</a>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Consultant Firms Hired (field_consultants_hired) */
  $handler->display->display_options['relationships']['field_consultants_hired_value']['id'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['table'] = 'field_data_field_consultants_hired';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['field'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['id'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['field'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['relationship'] = 'field_consultants_hired_value';
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['relationship'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Type */
  $handler->display->display_options['fields']['field_consultant_type_tr']['id'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['table'] = 'field_data_field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['field'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_type_tr']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_type_tr']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = '';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['value'] = array(
    808 => '808',
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';
  $handler->display->display_options['displays'] = array(
    'plan_direct_consultants' => 'plan_direct_consultants',
    'default' => 0,
    'plan_lead_contact' => 0,
    'plan_contacts' => 0,
    'eva_plan_direct_consultants' => 0,
    'block_1' => 0,
    'mandate_plan_info' => 0,
    'mandate_consultants_hired' => 0,
    'mandate_managers' => 0,
    'mandate_notes' => 0,
    'consultant_main_office' => 0,
    'consultant_other_offices' => 0,
    'consultant_contacts' => 0,
    'consultant_mandates' => 0,
    'consultant_plans' => 0,
    'manager_mandates' => 0,
    'manager_plans' => 0,
    'eva_foia_required' => 0,
    'eva_foia_history' => 0,
    'eva_new_leads_mandates' => 0,
    'eva_ongoing_mandates' => 0,
    'eva_closed_mandates' => 0,
    'eva_contact_job_history' => 0,
    'eva_asset_allocation' => 0,
    'eva_plan_related_news' => 0,
    'eva_plan_size' => 0,
    'eva_completed_mandates' => 0,
    'eva_potential_leads_mandates' => 0,
    'eva_major_style' => 0,
    'eva_minor_style' => 0,
    'entity_view_3' => 0,
    'eva_asset_allocation_chart' => 0,
    'entity_view_2' => 0,
    'eva_plan_contact_edit' => 0,
    'entity_view_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Plan - Direct Managers */
  $handler = $view->new_display('block', 'Plan - Direct Managers', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manager Roster';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_manager_firm_er' => 'field_manager_firm_er',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_major_minor_style_tr' => 'field_major_minor_style_tr',
    'field_major_minor_style_tr_1' => 'field_major_minor_style_tr_1',
    'field_attribute_tr' => 'field_attribute_tr',
    'field_amount' => 'field_amount',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_manager_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'field_manager_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_minor_style_tr' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_major_minor_style_tr_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attribute_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Manager Roster (field_manager_roster_fc) */
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['id'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['table'] = 'field_data_field_manager_roster_fc';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['field'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr']['id'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['label'] = 'Major Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_offset'] = '0';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['id'] = 'field_major_minor_style_tr_1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_offset'] = '1';
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Plan Mandate Managers ATT */
  $handler = $view->new_display('attachment', 'Plan Mandate Managers ATT', 'att_plan_mandate_managers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_manager_firm_er' => 'field_manager_firm_er',
    'field_geographic_tr' => 'field_geographic_tr',
    'name' => 'name',
    'name_1' => 'name_1',
    'field_amount' => 'field_amount',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_manager_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'field_manager_firm_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/node/[nid]/edit">Edit manager roster</a>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'geographic' => 'geographic',
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['label'] = '';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['label'] = '';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['label'] = '';
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '$[field_amount] (m)';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['value'] = array(
    808 => '808',
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'plan_lead_contact' => 0,
    'plan_contacts' => 0,
    'eva_plan_direct_consultants' => 0,
    'mandate_plan_info' => 0,
    'mandate_consultants_hired' => 0,
    'mandate_managers' => 0,
    'mandate_notes' => 0,
    'consultant_main_office' => 0,
    'consultant_other_offices' => 0,
    'consultant_contacts' => 0,
    'consultant_mandates' => 0,
    'consultant_plans' => 0,
    'manager_mandates' => 0,
    'manager_plans' => 0,
    'eva_foia_required' => 0,
    'eva_foia_history' => 0,
    'eva_new_leads_mandates' => 0,
    'eva_ongoing_mandates' => 0,
    'eva_closed_mandates' => 0,
    'eva_contact_job_history' => 0,
    'eva_asset_allocation' => 0,
    'eva_plan_related_news' => 0,
    'eva_plan_size' => 0,
    'eva_completed_mandates' => 0,
    'eva_potential_leads_mandates' => 0,
    'eva_major_style' => 0,
    'eva_minor_style' => 0,
    'entity_view_3' => 0,
    'eva_asset_allocation_chart' => 0,
    'entity_view_2' => 0,
    'eva_plan_contact_edit' => 0,
    'entity_view_1' => 0,
    'plan_direct_consultants' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Plan -  Potential Leads Mandates */
  $handler = $view->new_display('block', 'Plan -  Potential Leads Mandates', 'plan_potential_leads_mandates');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h4>Potential Leads</h4>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['value'] = array(
    805 => '805',
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';

  /* Display: Plan -  New Leads Mandates */
  $handler = $view->new_display('block', 'Plan -  New Leads Mandates', 'plan_new_leads_mandates');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h4>New Leads</h4>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['value'] = array(
    806 => '806',
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';

  /* Display: Plan -  Ongoing Mandates */
  $handler = $view->new_display('block', 'Plan -  Ongoing Mandates', 'plan_ongoing_mandates');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h4>Ongoing</h4>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['value'] = array(
    807 => '807',
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';

  /* Display: Plan -  Completed Mandates */
  $handler = $view->new_display('block', 'Plan -  Completed Mandates', 'plan_completed_mandates');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h4>Completed</h4>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['value'] = array(
    808 => '808',
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';

  /* Display: Plan -  Closed Mandates */
  $handler = $view->new_display('block', 'Plan -  Closed Mandates', 'plan_closed_mandates');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h4>Closed</h4>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['value'] = array(
    809 => '809',
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';

  /* Display: Plan -  Asset Allocation */
  $handler = $view->new_display('block', 'Plan -  Asset Allocation', 'plan_asset_allocation');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Asset Allocation';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_contact_info_data' => 'field_contact_info_data',
    'field_contact_info_data_1' => 'field_contact_info_data_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Asset Allocation (field_asset_allocation_history) */
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['id'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['table'] = 'field_data_field_asset_allocation_history';
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['field'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Absolute Return */
  $handler->display->display_options['fields']['field_aa_absolute_return']['id'] = 'field_aa_absolute_return';
  $handler->display->display_options['fields']['field_aa_absolute_return']['table'] = 'field_data_field_aa_absolute_return';
  $handler->display->display_options['fields']['field_aa_absolute_return']['field'] = 'field_aa_absolute_return';
  $handler->display->display_options['fields']['field_aa_absolute_return']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_absolute_return']['label'] = '';
  $handler->display->display_options['fields']['field_aa_absolute_return']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_absolute_return']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Alternative Strategies */
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['id'] = 'field_aa_alternative_strategies';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['table'] = 'field_data_field_aa_alternative_strategies';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['field'] = 'field_aa_alternative_strategies';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['label'] = '';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['alter']['text'] = '<strong>Alternative Strategies:</strong> [field_aa_alternative_strategies]';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Balanced */
  $handler->display->display_options['fields']['field_aa_balanced']['id'] = 'field_aa_balanced';
  $handler->display->display_options['fields']['field_aa_balanced']['table'] = 'field_data_field_aa_balanced';
  $handler->display->display_options['fields']['field_aa_balanced']['field'] = 'field_aa_balanced';
  $handler->display->display_options['fields']['field_aa_balanced']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_balanced']['label'] = '';
  $handler->display->display_options['fields']['field_aa_balanced']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_balanced']['alter']['text'] = '<strong>Balanced:</strong> [field_aa_balanced]';
  $handler->display->display_options['fields']['field_aa_balanced']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_balanced']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Canadian Equities */
  $handler->display->display_options['fields']['field_aa_canadian_equities']['id'] = 'field_aa_canadian_equities';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['table'] = 'field_data_field_aa_canadian_equities';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['field'] = 'field_aa_canadian_equities';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['label'] = '';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_canadian_equities']['alter']['text'] = '<strong>Canadian Equities:</strong> [field_aa_canadian_equities]';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_canadian_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Cash & Other */
  $handler->display->display_options['fields']['field_aa_cash_other']['id'] = 'field_aa_cash_other';
  $handler->display->display_options['fields']['field_aa_cash_other']['table'] = 'field_data_field_aa_cash_other';
  $handler->display->display_options['fields']['field_aa_cash_other']['field'] = 'field_aa_cash_other';
  $handler->display->display_options['fields']['field_aa_cash_other']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_cash_other']['label'] = '';
  $handler->display->display_options['fields']['field_aa_cash_other']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_cash_other']['alter']['text'] = '<strong>Cash & Other:</strong> [field_aa_cash_other]';
  $handler->display->display_options['fields']['field_aa_cash_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_cash_other']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Credit Opportunities */
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['id'] = 'field_aa_credit_opportunities';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['table'] = 'field_data_field_aa_credit_opportunities';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['field'] = 'field_aa_credit_opportunities';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['label'] = '';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['alter']['text'] = '<strong>Credit Opportunities:</strong> [field_aa_credit_opportunities]';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Domestic Equities */
  $handler->display->display_options['fields']['field_aa_domestic_equities']['id'] = 'field_aa_domestic_equities';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['table'] = 'field_data_field_aa_domestic_equities';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['field'] = 'field_aa_domestic_equities';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['label'] = '';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_domestic_equities']['alter']['text'] = '<strong>Domestic Equities:</strong> [field_aa_domestic_equities]';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_domestic_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Domestic Fixed Income */
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['id'] = 'field_aa_domestic_fixed_income';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['table'] = 'field_data_field_aa_domestic_fixed_income';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['field'] = 'field_aa_domestic_fixed_income';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['label'] = '';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['alter']['text'] = '<strong>Domestic Fixed Income:</strong> [field_aa_domestic_fixed_income]';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Emerging Markets Equity */
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['id'] = 'field_aa_emerging_markets_equity';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['table'] = 'field_data_field_aa_emerging_markets_equity';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['field'] = 'field_aa_emerging_markets_equity';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['label'] = '';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['alter']['text'] = '<strong>Emerging Markets Equity:</strong> [field_aa_emerging_markets_equity]';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Global Equities */
  $handler->display->display_options['fields']['field_aa_global_equities']['id'] = 'field_aa_global_equities';
  $handler->display->display_options['fields']['field_aa_global_equities']['table'] = 'field_data_field_aa_global_equities';
  $handler->display->display_options['fields']['field_aa_global_equities']['field'] = 'field_aa_global_equities';
  $handler->display->display_options['fields']['field_aa_global_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_global_equities']['label'] = '';
  $handler->display->display_options['fields']['field_aa_global_equities']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_global_equities']['alter']['text'] = '<strong>Global Equities:</strong> [field_aa_global_equities]';
  $handler->display->display_options['fields']['field_aa_global_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_global_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Global Fixed-Income */
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['id'] = 'field_aa_global_fixed_income';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['table'] = 'field_data_field_aa_global_fixed_income';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['field'] = 'field_aa_global_fixed_income';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['label'] = '';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['alter']['text'] = '<strong>Global Fixed-Income:</strong> [field_aa_global_fixed_income]';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Hedge Fund Strategies */
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['id'] = 'field_aa_hedge_fund_strategies';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['table'] = 'field_data_field_aa_hedge_fund_strategies';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['field'] = 'field_aa_hedge_fund_strategies';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['label'] = '';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['alter']['text'] = '<strong>Hedge Fund Strategies:</strong> [field_aa_hedge_fund_strategies]';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: International Equities */
  $handler->display->display_options['fields']['field_aa_international_equities']['id'] = 'field_aa_international_equities';
  $handler->display->display_options['fields']['field_aa_international_equities']['table'] = 'field_data_field_aa_international_equities';
  $handler->display->display_options['fields']['field_aa_international_equities']['field'] = 'field_aa_international_equities';
  $handler->display->display_options['fields']['field_aa_international_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_international_equities']['label'] = '';
  $handler->display->display_options['fields']['field_aa_international_equities']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_international_equities']['alter']['text'] = '<strong>International Equities:</strong> [field_aa_international_equities]';
  $handler->display->display_options['fields']['field_aa_international_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_international_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: International Fixed Income */
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['id'] = 'field_aa_intl_fixed_income';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['table'] = 'field_data_field_aa_intl_fixed_income';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['field'] = 'field_aa_intl_fixed_income';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['label'] = '';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['alter']['text'] = '<strong>International Fixed Income:</strong> [field_aa_international_fixed_income]';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Multi Asset */
  $handler->display->display_options['fields']['field_aa_multi_asset']['id'] = 'field_aa_multi_asset';
  $handler->display->display_options['fields']['field_aa_multi_asset']['table'] = 'field_data_field_aa_multi_asset';
  $handler->display->display_options['fields']['field_aa_multi_asset']['field'] = 'field_aa_multi_asset';
  $handler->display->display_options['fields']['field_aa_multi_asset']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_multi_asset']['label'] = '';
  $handler->display->display_options['fields']['field_aa_multi_asset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_multi_asset']['alter']['text'] = '<strong>Multi Asset:</strong> [field_aa_multi_asset]';
  $handler->display->display_options['fields']['field_aa_multi_asset']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_multi_asset']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Mutual Fund */
  $handler->display->display_options['fields']['field_aa_mutual_fund']['id'] = 'field_aa_mutual_fund';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['table'] = 'field_data_field_aa_mutual_fund';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['field'] = 'field_aa_mutual_fund';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['label'] = '';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_mutual_fund']['alter']['text'] = '<strong>Mutual Fund:</strong> [field_aa_mutual_fund]';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_mutual_fund']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Private Equity */
  $handler->display->display_options['fields']['field_aa_private_equity']['id'] = 'field_aa_private_equity';
  $handler->display->display_options['fields']['field_aa_private_equity']['table'] = 'field_data_field_aa_private_equity';
  $handler->display->display_options['fields']['field_aa_private_equity']['field'] = 'field_aa_private_equity';
  $handler->display->display_options['fields']['field_aa_private_equity']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_private_equity']['label'] = '';
  $handler->display->display_options['fields']['field_aa_private_equity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_private_equity']['alter']['text'] = '<strong>Private Equity:</strong> [field_aa_private_equity]';
  $handler->display->display_options['fields']['field_aa_private_equity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_private_equity']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Real Assets */
  $handler->display->display_options['fields']['field_aa_real_assets']['id'] = 'field_aa_real_assets';
  $handler->display->display_options['fields']['field_aa_real_assets']['table'] = 'field_data_field_aa_real_assets';
  $handler->display->display_options['fields']['field_aa_real_assets']['field'] = 'field_aa_real_assets';
  $handler->display->display_options['fields']['field_aa_real_assets']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_real_assets']['label'] = '';
  $handler->display->display_options['fields']['field_aa_real_assets']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_real_assets']['alter']['text'] = '<strong>Real Assets:</strong> [field_aa_real_assets]';
  $handler->display->display_options['fields']['field_aa_real_assets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_real_assets']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Real Estate */
  $handler->display->display_options['fields']['field_aa_real_estate']['id'] = 'field_aa_real_estate';
  $handler->display->display_options['fields']['field_aa_real_estate']['table'] = 'field_data_field_aa_real_estate';
  $handler->display->display_options['fields']['field_aa_real_estate']['field'] = 'field_aa_real_estate';
  $handler->display->display_options['fields']['field_aa_real_estate']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_real_estate']['label'] = '';
  $handler->display->display_options['fields']['field_aa_real_estate']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_real_estate']['alter']['text'] = '<strong>Real Estate:</strong> [field_aa_real_estate]';
  $handler->display->display_options['fields']['field_aa_real_estate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_real_estate']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Real Return */
  $handler->display->display_options['fields']['field_aa_real_return']['id'] = 'field_aa_real_return';
  $handler->display->display_options['fields']['field_aa_real_return']['table'] = 'field_data_field_aa_real_return';
  $handler->display->display_options['fields']['field_aa_real_return']['field'] = 'field_aa_real_return';
  $handler->display->display_options['fields']['field_aa_real_return']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_real_return']['label'] = '';
  $handler->display->display_options['fields']['field_aa_real_return']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_real_return']['alter']['text'] = '<strong>Real Return:</strong> [field_aa_real_return]';
  $handler->display->display_options['fields']['field_aa_real_return']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_real_return']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Risk Parity */
  $handler->display->display_options['fields']['field_aa_risk_parity']['id'] = 'field_aa_risk_parity';
  $handler->display->display_options['fields']['field_aa_risk_parity']['table'] = 'field_data_field_aa_risk_parity';
  $handler->display->display_options['fields']['field_aa_risk_parity']['field'] = 'field_aa_risk_parity';
  $handler->display->display_options['fields']['field_aa_risk_parity']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_risk_parity']['label'] = '';
  $handler->display->display_options['fields']['field_aa_risk_parity']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aa_risk_parity']['alter']['text'] = '<strong>Risk Parity:</strong> [field_aa_risk_parity]';
  $handler->display->display_options['fields']['field_aa_risk_parity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_risk_parity']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Plan - Related News */
  $handler = $view->new_display('block', 'Plan - Related News', 'plan_related_news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related News';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cover_image' => 'field_cover_image',
    'field_date' => 'field_date',
    'title' => 'title',
    'body' => 'title',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cover_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: News Type (field_news_type) */
  $handler->display->display_options['relationships']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['relationships']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['relationships']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['relationships']['field_news_type_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_news_type_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['relationship'] = 'field_news_type_value';
  $handler->display->display_options['fields']['field_cover_image']['label'] = 'Source';
  $handler->display->display_options['fields']['field_cover_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_image']['settings'] = array(
    'image_style' => 'thumbnail_small',
    'image_link' => 'content',
  );
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong><br />';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Plan - FOIA History */
  $handler = $view->new_display('block', 'Plan - FOIA History', 'plan_foia_history');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FOIA History';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_foia_date' => 'field_foia_date',
    'field_foia_required' => 'field_foia_required',
    'field_email' => 'field_email',
    'field_foia_form' => 'field_foia_form',
    'field_foia_notes' => 'field_foia_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_foia_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_foia_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_foia_required' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_foia_form' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_foia_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There is no FOIA Info at this time.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: FOIA History (field_foia_history) */
  $handler->display->display_options['relationships']['field_foia_history_value']['id'] = 'field_foia_history_value';
  $handler->display->display_options['relationships']['field_foia_history_value']['table'] = 'field_data_field_foia_history';
  $handler->display->display_options['relationships']['field_foia_history_value']['field'] = 'field_foia_history_value';
  $handler->display->display_options['relationships']['field_foia_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: FOIA Date */
  $handler->display->display_options['fields']['field_foia_date']['id'] = 'field_foia_date';
  $handler->display->display_options['fields']['field_foia_date']['table'] = 'field_data_field_foia_date';
  $handler->display->display_options['fields']['field_foia_date']['field'] = 'field_foia_date';
  $handler->display->display_options['fields']['field_foia_date']['relationship'] = 'field_foia_history_value';
  $handler->display->display_options['fields']['field_foia_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field collection item: FOIA Required? */
  $handler->display->display_options['fields']['field_foia_required']['id'] = 'field_foia_required';
  $handler->display->display_options['fields']['field_foia_required']['table'] = 'field_data_field_foia_required';
  $handler->display->display_options['fields']['field_foia_required']['field'] = 'field_foia_required';
  $handler->display->display_options['fields']['field_foia_required']['relationship'] = 'field_foia_history_value';
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_foia_history_value';
  $handler->display->display_options['fields']['field_email']['label'] = 'FOIA Contact';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Field collection item: FOIA Form */
  $handler->display->display_options['fields']['field_foia_form']['id'] = 'field_foia_form';
  $handler->display->display_options['fields']['field_foia_form']['table'] = 'field_data_field_foia_form';
  $handler->display->display_options['fields']['field_foia_form']['field'] = 'field_foia_form';
  $handler->display->display_options['fields']['field_foia_form']['relationship'] = 'field_foia_history_value';
  $handler->display->display_options['fields']['field_foia_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foia_form']['click_sort_column'] = 'url';
  /* Field: Field collection item: FOIA Notes */
  $handler->display->display_options['fields']['field_foia_notes']['id'] = 'field_foia_notes';
  $handler->display->display_options['fields']['field_foia_notes']['table'] = 'field_data_field_foia_notes';
  $handler->display->display_options['fields']['field_foia_notes']['field'] = 'field_foia_notes';
  $handler->display->display_options['fields']['field_foia_notes']['relationship'] = 'field_foia_history_value';
  $handler->display->display_options['fields']['field_foia_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Plan Info */
  $handler = $view->new_display('block', 'Mandate - Plan Info', 'mandate_plan_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan Info';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_contact_info_data' => 'field_contact_info_data',
    'field_contact_info_data_1' => 'field_contact_info_data_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This mandate is not associated with any plans.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['id'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['field'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['relationship'] = 'field_plan_er_target_id';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_plan_er']['label'] = '';
  $handler->display->display_options['fields']['field_plan_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_er']['alter']['text'] = '<strong>Plan: </strong>[field_plan_er]';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['label'] = '';
  $handler->display->display_options['fields']['field_plan_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_size']['alter']['text'] = '<strong>Plan Size: </strong>$[field_plan_size] (m)';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<strong>Lead Contact: </strong>[title_field]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['alter']['text'] = '<strong>Lead Contact: </strong>[title_field]<br />
<strong>Job Title:</strong> [field_job_title]';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_data_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = '';
  $handler->display->display_options['fields']['field_address_data']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data']['alter']['text'] = ' <strong>Phone: </strong>[field_address_data][field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<strong>Email: </strong>[field_email]';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'plan_contact' => 'plan_contact',
  );
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );

  /* Display: Mandate - Consultants Hired */
  $handler = $view->new_display('block', 'Mandate - Consultants Hired', 'mandate_consultants_hired');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultants Hired';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_consultant_type_tr' => 'field_consultant_type_tr',
    'field_consultant_contact_er' => 'field_consultant_contact_er',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
  );
  $handler->display->display_options['style_options']['default'] = 'field_consultant_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_contact_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Consultant Firms Hired (field_consultants_hired) */
  $handler->display->display_options['relationships']['field_consultants_hired_value']['id'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['table'] = 'field_data_field_consultants_hired';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['field'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_consultants_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['id'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['field'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['relationship'] = 'field_consultants_hired_value';
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['relationship'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Contact */
  $handler->display->display_options['fields']['field_consultant_contact_er']['id'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['field'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_contact_er']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_consultant_contact_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_contact_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Consultants Terminated */
  $handler = $view->new_display('block', 'Mandate - Consultants Terminated', 'mandate_consultants_terminated');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultants Terminated';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_consultant_type_tr' => 'field_consultant_type_tr',
    'field_consultant_contact_er' => 'field_consultant_contact_er',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
  );
  $handler->display->display_options['style_options']['default'] = 'field_consultant_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_contact_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no mandate assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Consultant Firms Terminated (field_consultants_terminated) */
  $handler->display->display_options['relationships']['field_consultants_terminated_value']['id'] = 'field_consultants_terminated_value';
  $handler->display->display_options['relationships']['field_consultants_terminated_value']['table'] = 'field_data_field_consultants_terminated';
  $handler->display->display_options['relationships']['field_consultants_terminated_value']['field'] = 'field_consultants_terminated_value';
  $handler->display->display_options['relationships']['field_consultants_terminated_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_consultants_terminated_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['id'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['field'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_contact_er_target_id']['relationship'] = 'field_consultants_terminated_value';
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['relationship'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultants_terminated_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Contact */
  $handler->display->display_options['fields']['field_consultant_contact_er']['id'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['field'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['relationship'] = 'field_consultants_terminated_value';
  $handler->display->display_options['fields']['field_consultant_contact_er']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_consultant_contact_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_contact_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );

  /* Display: Mandate - Consultant Finalists */
  $handler = $view->new_display('block', 'Mandate - Consultant Finalists', 'mandate_consultant_finalists');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultant Finalists';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_consultants_finalists_er' => 'field_consultants_finalists_er',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_consultants_finalists_er' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultants_finalists_er_target_id']['id'] = 'field_consultants_finalists_er_target_id';
  $handler->display->display_options['relationships']['field_consultants_finalists_er_target_id']['table'] = 'field_data_field_consultants_finalists_er';
  $handler->display->display_options['relationships']['field_consultants_finalists_er_target_id']['field'] = 'field_consultants_finalists_er_target_id';
  $handler->display->display_options['relationships']['field_consultants_finalists_er_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_consultants_finalists_er_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_consultants_finalists_er_target_id';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Consultant Firm Finalists (field_consultants_finalists_er) */
  $handler->display->display_options['sorts']['field_consultants_finalists_er_target_id']['id'] = 'field_consultants_finalists_er_target_id';
  $handler->display->display_options['sorts']['field_consultants_finalists_er_target_id']['table'] = 'field_data_field_consultants_finalists_er';
  $handler->display->display_options['sorts']['field_consultants_finalists_er_target_id']['field'] = 'field_consultants_finalists_er_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Consultants On Watch */
  $handler = $view->new_display('block', 'Mandate - Consultants On Watch', 'mandate_consultants_onwatch');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultants On Watch';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no plan assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultants_onwatch_er_target_id']['id'] = 'field_consultants_onwatch_er_target_id';
  $handler->display->display_options['relationships']['field_consultants_onwatch_er_target_id']['table'] = 'field_data_field_consultants_onwatch_er';
  $handler->display->display_options['relationships']['field_consultants_onwatch_er_target_id']['field'] = 'field_consultants_onwatch_er_target_id';
  $handler->display->display_options['relationships']['field_consultants_onwatch_er_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_consultants_onwatch_er_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nid']['empty_zero'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_consultants_onwatch_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Consultant Firm';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Consultant Firms On Watch (field_consultants_onwatch_er) */
  $handler->display->display_options['sorts']['field_consultants_onwatch_er_target_id']['id'] = 'field_consultants_onwatch_er_target_id';
  $handler->display->display_options['sorts']['field_consultants_onwatch_er_target_id']['table'] = 'field_data_field_consultants_onwatch_er';
  $handler->display->display_options['sorts']['field_consultants_onwatch_er_target_id']['field'] = 'field_consultants_onwatch_er_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Managers Hired */
  $handler = $view->new_display('block', 'Mandate - Managers Hired', 'mandate_managers_hired');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Managers Hired';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_manager_firm_er' => 'field_manager_firm_er',
    'field_amount' => 'field_amount',
  );
  $handler->display->display_options['style_options']['default'] = 'field_amount';
  $handler->display->display_options['style_options']['info'] = array(
    'field_manager_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['id'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['field'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['relationship'] = 'field_managers_hired_value';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['id'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['field'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['relationship'] = 'field_manager_firm_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Consultant Firms Hired (field_consultants_hired) */
  $handler->display->display_options['relationships']['field_consultants_hired_value']['id'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['table'] = 'field_data_field_consultants_hired';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['field'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '$[field_amount] (m)';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Managers Terminated */
  $handler = $view->new_display('block', 'Mandate - Managers Terminated', 'mandate_managers_terminated');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Managers Terminated';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_manager_firm_er' => 'field_manager_firm_er',
    'field_geographic_tr' => 'field_geographic_tr',
    'name' => 'name',
    'name_1' => 'name_1',
    'field_amount' => 'field_amount',
    'title' => 'title',
    'field_plan_size' => 'field_plan_size',
    'title_field' => 'title_field',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_amount';
  $handler->display->display_options['style_options']['info'] = array(
    'field_manager_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_plan_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultant_roster_fc_value';
  /* Relationship: Content: Manager Roster (field_manager_roster_fc) */
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['id'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['table'] = 'field_data_field_manager_roster_fc';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['field'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'content_type_shortcodes' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
    'traits' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['id'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['field'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['relationship'] = 'field_managers_hired_value';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['id'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['field'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['relationship'] = 'field_manager_firm_er_target_id';
  /* Relationship: Content: Consultant Firms Hired (field_consultants_hired) */
  $handler->display->display_options['relationships']['field_consultants_hired_value']['id'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['table'] = 'field_data_field_consultants_hired';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['field'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['delta'] = '-1';
  /* Relationship: Content: Manager Firms Terminated (field_managers_terminated) */
  $handler->display->display_options['relationships']['field_managers_terminated_value']['id'] = 'field_managers_terminated_value';
  $handler->display->display_options['relationships']['field_managers_terminated_value']['table'] = 'field_data_field_managers_terminated';
  $handler->display->display_options['relationships']['field_managers_terminated_value']['field'] = 'field_managers_terminated_value';
  $handler->display->display_options['relationships']['field_managers_terminated_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_managers_terminated_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_managers_terminated_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_terminated_value';
  $handler->display->display_options['fields']['field_amount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '$[field_amount] (m)';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Manager Finalists */
  $handler = $view->new_display('block', 'Mandate - Manager Finalists', 'mandate_manager_finalists');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manager Finalists';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'field_amount' => 'field_amount',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_managers_finalists_er_target_id']['id'] = 'field_managers_finalists_er_target_id';
  $handler->display->display_options['relationships']['field_managers_finalists_er_target_id']['table'] = 'field_data_field_managers_finalists_er';
  $handler->display->display_options['relationships']['field_managers_finalists_er_target_id']['field'] = 'field_managers_finalists_er_target_id';
  $handler->display->display_options['relationships']['field_managers_finalists_er_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_managers_finalists_er_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_managers_finalists_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Manager Firm';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Manager Firm Finalists (field_managers_finalists_er) */
  $handler->display->display_options['sorts']['field_managers_finalists_er_target_id']['id'] = 'field_managers_finalists_er_target_id';
  $handler->display->display_options['sorts']['field_managers_finalists_er_target_id']['table'] = 'field_data_field_managers_finalists_er';
  $handler->display->display_options['sorts']['field_managers_finalists_er_target_id']['field'] = 'field_managers_finalists_er_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Managers On Watch */
  $handler = $view->new_display('block', 'Mandate - Managers On Watch', 'mandate_managers_onwatch');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Managers On Watch';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_managers_onwatch_er_target_id']['id'] = 'field_managers_onwatch_er_target_id';
  $handler->display->display_options['relationships']['field_managers_onwatch_er_target_id']['table'] = 'field_data_field_managers_onwatch_er';
  $handler->display->display_options['relationships']['field_managers_onwatch_er_target_id']['field'] = 'field_managers_onwatch_er_target_id';
  $handler->display->display_options['relationships']['field_managers_onwatch_er_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_managers_onwatch_er_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_managers_onwatch_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Manager Firm';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Manager Firms On Watch (field_managers_onwatch_er) */
  $handler->display->display_options['sorts']['field_managers_onwatch_er_target_id']['id'] = 'field_managers_onwatch_er_target_id';
  $handler->display->display_options['sorts']['field_managers_onwatch_er_target_id']['table'] = 'field_data_field_managers_onwatch_er';
  $handler->display->display_options['sorts']['field_managers_onwatch_er_target_id']['field'] = 'field_managers_onwatch_er_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Mandate - Comments */
  $handler = $view->new_display('block', 'Mandate - Comments', 'mandate_comments');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mandate Comments';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_author_ur' => 'field_author_ur',
    'field_subject' => 'field_comment',
    'field_comment' => 'field_comment',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_ur' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This mandate has no managers at this time.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Mandate Comments (field_mandate_comments_fc) */
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['id'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['table'] = 'field_data_field_mandate_comments_fc';
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['field'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field collection item: Author */
  $handler->display->display_options['fields']['field_author_ur']['id'] = 'field_author_ur';
  $handler->display->display_options['fields']['field_author_ur']['table'] = 'field_data_field_author_ur';
  $handler->display->display_options['fields']['field_author_ur']['field'] = 'field_author_ur';
  $handler->display->display_options['fields']['field_author_ur']['relationship'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['fields']['field_author_ur']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Subject */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['relationship'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['fields']['field_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject']['alter']['text'] = '<strong>[field_subject]</strong>';
  $handler->display->display_options['fields']['field_subject']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Comment */
  $handler->display->display_options['fields']['field_comment']['id'] = 'field_comment';
  $handler->display->display_options['fields']['field_comment']['table'] = 'field_data_field_comment';
  $handler->display->display_options['fields']['field_comment']['field'] = 'field_comment';
  $handler->display->display_options['fields']['field_comment']['relationship'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['fields']['field_comment']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Consultant - Main Office */
  $handler = $view->new_display('block', 'Consultant - Main Office', 'consultant_main_office');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Main Office';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_office_type_tr' => 'field_office_type_tr',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no other offices.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Office Type */
  $handler->display->display_options['fields']['field_office_type_tr']['id'] = 'field_office_type_tr';
  $handler->display->display_options['fields']['field_office_type_tr']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['fields']['field_office_type_tr']['field'] = 'field_office_type_tr';
  $handler->display->display_options['fields']['field_office_type_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_type_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'office' => 'office',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Office Type (field_office_type_tr) */
  $handler->display->display_options['filters']['field_office_type_tr_tid']['id'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['field'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['value'] = array(
    337 => '337',
  );
  $handler->display->display_options['filters']['field_office_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['vocabulary'] = 'office_types';

  /* Display: Consultant - Branch Offices */
  $handler = $view->new_display('block', 'Consultant - Branch Offices', 'consultant_branch_offices');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Branch Offices';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_office_type_tr' => 'field_office_type_tr',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no other offices.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Office Type */
  $handler->display->display_options['fields']['field_office_type_tr']['id'] = 'field_office_type_tr';
  $handler->display->display_options['fields']['field_office_type_tr']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['fields']['field_office_type_tr']['field'] = 'field_office_type_tr';
  $handler->display->display_options['fields']['field_office_type_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_type_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'office' => 'office',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Office Type (field_office_type_tr) */
  $handler->display->display_options['filters']['field_office_type_tr_tid']['id'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['field'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['value'] = array(
    338 => '338',
  );
  $handler->display->display_options['filters']['field_office_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['vocabulary'] = 'office_types';

  /* Display: Consultant -  Contacts */
  $handler = $view->new_display('block', 'Consultant -  Contacts', 'consultant_contacts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_job_title' => 'field_job_title',
    'field_consultant_office_er' => 'field_consultant_office_er',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_office_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Office */
  $handler->display->display_options['fields']['field_consultant_office_er']['id'] = 'field_consultant_office_er';
  $handler->display->display_options['fields']['field_consultant_office_er']['table'] = 'field_data_field_consultant_office_er';
  $handler->display->display_options['fields']['field_consultant_office_er']['field'] = 'field_consultant_office_er';
  $handler->display->display_options['fields']['field_consultant_office_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_consultant_office_er']['label'] = 'Office';
  $handler->display->display_options['fields']['field_consultant_office_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_office_er']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Consultant Office (field_consultant_office_er) (selective) */
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['id'] = 'field_consultant_office_er_target_id_selective';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['table'] = 'field_data_field_consultant_office_er';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['field'] = 'field_consultant_office_er_target_id_selective';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['ui_name'] = 'Consultant Office (field_consultant_office_er) (selective)';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['expose']['label'] = 'Office';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['expose']['identifier'] = 'field_consultant_office_er_target_id_selective';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['selective_display_field'] = 'field_consultant_office_er';
  $handler->display->display_options['filters']['field_consultant_office_er_target_id_selective']['selective_items_limit'] = '100';

  /* Display: Consultant -  Mandates */
  $handler = $view->new_display('block', 'Consultant -  Mandates', 'consultant_mandates');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mandate Assignments';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_mandate_status_tr' => 'field_mandate_status_tr',
    'field_plan_er' => 'field_plan_er',
    'field_geographic_tr' => 'field_geographic_tr',
    'name_1' => 'name_1',
    'name' => 'name',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_plan_er';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_mandate_status_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_plan_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'view_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no mandate assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Mandate Status */
  $handler->display->display_options['fields']['field_mandate_status_tr']['id'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['field'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Major Syle';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['alter']['text'] = '$[field_account_size] (m)';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Consultant -  Plans */
  $handler = $view->new_display('block', 'Consultant -  Plans', 'consultant_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan Assignments';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_plan_size' => 'field_plan_size',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'title_field' => 'title_field',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_plan_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no plan assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_size']['alter']['text'] = '$[field_plan_size] (m)';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Contact';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );

  /* Display: Consultant -  Mandate Managers */
  $handler = $view->new_display('block', 'Consultant -  Mandate Managers', 'consultant_mandate_managers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manager Associations by Mandate';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_manager_firm_er' => 'field_manager_firm_er',
    'title_field' => 'title_field',
    'field_geographic_tr' => 'field_geographic_tr',
    'name_1' => 'name_1',
    'name' => 'name',
    'field_amount' => 'field_amount',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_manager_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'field_manager_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no mandate assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['label'] = 'Firm';
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Major Syle';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Consultant Firm (field_consultant_firm_er) */
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_consultant_firm_er_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Consultant -  Plan Managers */
  $handler = $view->new_display('block', 'Consultant -  Plan Managers', 'consultant_plan_managers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manager Associations by Plan';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_manager_firm_er' => 'field_manager_firm_er',
    'field_geographic_tr' => 'field_geographic_tr',
    'name' => 'name',
    'name_1' => 'name_1',
    'field_amount' => 'field_amount',
    'title' => 'title',
    'field_plan_size' => 'field_plan_size',
    'title_field' => 'title_field',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_manager_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'field_manager_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_plan_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no plan assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultant_roster_fc_value';
  /* Relationship: Content: Manager Roster (field_manager_roster_fc) */
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['id'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['table'] = 'field_data_field_manager_roster_fc';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['field'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'content_type_shortcodes' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
    'traits' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Major Style';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_size']['alter']['text'] = '$[field_plan_size] (m)';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Contact';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );

  /* Display: Manager -  Mandates */
  $handler = $view->new_display('block', 'Manager -  Mandates', 'manager_mandates');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mandate Assignments';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_mandate_status_tr' => 'field_mandate_status_tr',
    'title_field_1' => 'title_field_1',
    'field_geographic_tr' => 'field_geographic_tr',
    'name' => 'name',
    'name_1' => 'name_1',
    'field_attribute_tr' => 'field_attribute_tr',
    'field_amount' => 'field_amount',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field_1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_mandate_status_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_field_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_attribute_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'view_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no mandate assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['id'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['field'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['relationship'] = 'field_managers_hired_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Consultant Firms Hired (field_consultants_hired) */
  $handler->display->display_options['relationships']['field_consultants_hired_value']['id'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['table'] = 'field_data_field_consultants_hired';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['field'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Mandate Status */
  $handler->display->display_options['fields']['field_mandate_status_tr']['id'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['field'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['label'] = 'Status';
  $handler->display->display_options['fields']['field_mandate_status_tr']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title_field_1']['label'] = 'Plan';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Major Style';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '[field_amount]';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Mandate Status (field_mandate_status_tr) (selective) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['id'] = 'field_mandate_status_tr_tid_selective';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['field'] = 'field_mandate_status_tr_tid_selective';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['ui_name'] = 'Mandate Status (field_mandate_status_tr) (selective)';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['expose']['label'] = 'Mandate Status';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['expose']['identifier'] = 'field_mandate_status_tr_tid_selective';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['selective_display_field'] = 'field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Geographic (field_geographic_tr) (selective) */
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['id'] = 'field_geographic_tr_tid_selective';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['field'] = 'field_geographic_tr_tid_selective';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['ui_name'] = 'Geographic (field_geographic_tr) (selective)';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['label'] = 'Geographic';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['identifier'] = 'field_geographic_tr_tid_selective';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['selective_display_field'] = 'field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Name (selective) */
  $handler->display->display_options['filters']['name_selective']['id'] = 'name_selective';
  $handler->display->display_options['filters']['name_selective']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_selective']['field'] = 'name_selective';
  $handler->display->display_options['filters']['name_selective']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name_selective']['ui_name'] = 'Name (selective)';
  $handler->display->display_options['filters']['name_selective']['group'] = 1;
  $handler->display->display_options['filters']['name_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['name_selective']['expose']['label'] = 'Minor Style';
  $handler->display->display_options['filters']['name_selective']['expose']['identifier'] = 'name_selective';
  $handler->display->display_options['filters']['name_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['name_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['name_selective']['selective_display_field'] = 'name_1';
  $handler->display->display_options['filters']['name_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Attribute (field_attribute_tr) (selective) */
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['id'] = 'field_attribute_tr_tid_selective';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['field'] = 'field_attribute_tr_tid_selective';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['ui_name'] = 'Attribute (field_attribute_tr) (selective)';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['label'] = 'Attribute';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['identifier'] = 'field_attribute_tr_tid_selective';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['selective_display_field'] = 'field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Amount (field_amount) (selective) */
  $handler->display->display_options['filters']['field_amount_value_selective']['id'] = 'field_amount_value_selective';
  $handler->display->display_options['filters']['field_amount_value_selective']['table'] = 'field_data_field_amount';
  $handler->display->display_options['filters']['field_amount_value_selective']['field'] = 'field_amount_value_selective';
  $handler->display->display_options['filters']['field_amount_value_selective']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['filters']['field_amount_value_selective']['ui_name'] = 'Amount (field_amount) (selective)';
  $handler->display->display_options['filters']['field_amount_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_amount_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_amount_value_selective']['expose']['label'] = 'Amount';
  $handler->display->display_options['filters']['field_amount_value_selective']['expose']['identifier'] = 'field_amount_value_selective';
  $handler->display->display_options['filters']['field_amount_value_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_amount_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_amount_value_selective']['selective_display_field'] = 'field_amount';
  $handler->display->display_options['filters']['field_amount_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Consultant Firm (field_consultant_firm_er) (selective) */
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['id'] = 'field_consultant_firm_er_target_id_selective';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['field'] = 'field_consultant_firm_er_target_id_selective';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['ui_name'] = 'Consultant Firm (field_consultant_firm_er) (selective)';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['expose']['label'] = 'Consultant Firm';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['expose']['identifier'] = 'field_consultant_firm_er_target_id_selective';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['selective_display_field'] = 'field_consultant_firm_er';
  $handler->display->display_options['filters']['field_consultant_firm_er_target_id_selective']['selective_items_limit'] = '100';

  /* Display: Manager-  Plans */
  $handler = $view->new_display('block', 'Manager-  Plans', 'manager_plans');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Clients';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_geographic_tr' => 'field_geographic_tr',
    'name_1' => 'name_1',
    'name' => 'name',
    'field_attribute_tr' => 'field_attribute_tr',
    'field_amount' => 'field_amount',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_attribute_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no plan assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Roster (field_manager_roster_fc) */
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['id'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['table'] = 'field_data_field_manager_roster_fc';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['field'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['relationships']['field_manager_roster_fc_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['id'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['field'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Major Style';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Geographic (field_geographic_tr) (selective) */
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['id'] = 'field_geographic_tr_tid_selective';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['field'] = 'field_geographic_tr_tid_selective';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['ui_name'] = 'Geographic (field_geographic_tr) (selective)';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['label'] = 'Geographic';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['identifier'] = 'field_geographic_tr_tid_selective';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['selective_display_field'] = 'field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Name (selective) */
  $handler->display->display_options['filters']['name_selective']['id'] = 'name_selective';
  $handler->display->display_options['filters']['name_selective']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_selective']['field'] = 'name_selective';
  $handler->display->display_options['filters']['name_selective']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name_selective']['ui_name'] = 'Name (selective)';
  $handler->display->display_options['filters']['name_selective']['group'] = 1;
  $handler->display->display_options['filters']['name_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['name_selective']['expose']['label'] = 'Minor Style';
  $handler->display->display_options['filters']['name_selective']['expose']['identifier'] = 'name_selective';
  $handler->display->display_options['filters']['name_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['name_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['name_selective']['selective_display_field'] = 'name';
  $handler->display->display_options['filters']['name_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Attribute (field_attribute_tr) (selective) */
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['id'] = 'field_attribute_tr_tid_selective';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['field'] = 'field_attribute_tr_tid_selective';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['relationship'] = 'field_manager_roster_fc_value';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['ui_name'] = 'Attribute (field_attribute_tr) (selective)';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['label'] = 'Attribute';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['identifier'] = 'field_attribute_tr_tid_selective';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['selective_display_field'] = 'field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Title (selective) */
  $handler->display->display_options['filters']['title_selective']['id'] = 'title_selective';
  $handler->display->display_options['filters']['title_selective']['table'] = 'node';
  $handler->display->display_options['filters']['title_selective']['field'] = 'title_selective';
  $handler->display->display_options['filters']['title_selective']['ui_name'] = 'Title (selective)';
  $handler->display->display_options['filters']['title_selective']['group'] = 1;
  $handler->display->display_options['filters']['title_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['title_selective']['expose']['label'] = 'Plan';
  $handler->display->display_options['filters']['title_selective']['expose']['identifier'] = 'title_selective';
  $handler->display->display_options['filters']['title_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['title_selective']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    4 => 0,
    5 => 0,
    1 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['title_selective']['selective_display_field'] = 'title';
  $handler->display->display_options['filters']['title_selective']['selective_items_limit'] = '100';

  /* Display: Manager - Mandate Consultants */
  $handler = $view->new_display('block', 'Manager - Mandate Consultants', 'manager_mandate_consultants');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultant Associations by Mandate';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_mandate_status_tr' => 'field_mandate_status_tr',
    'title_field_1' => 'title_field_1',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_amount' => 'field_amount',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field_1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_mandate_status_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_field_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This firm has no mandate assignments.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['id'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['field'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['relationship'] = 'field_managers_hired_value';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['id'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['field'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['relationship'] = 'field_manager_firm_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Consultant Firms Hired (field_consultants_hired) */
  $handler->display->display_options['relationships']['field_consultants_hired_value']['id'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['table'] = 'field_data_field_consultants_hired';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['field'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Mandate Status */
  $handler->display->display_options['fields']['field_mandate_status_tr']['id'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['field'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['label'] = 'Status';
  $handler->display->display_options['fields']['field_mandate_status_tr']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title_field_1']['label'] = 'Plan';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '[field_amount]';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: FOIA Required EVA */
  $handler = $view->new_display('entity_view', 'FOIA Required EVA', 'eva_foia_required');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FOIA Info';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: FOIA History (field_foia_history) */
  $handler->display->display_options['relationships']['field_foia_history_value']['id'] = 'field_foia_history_value';
  $handler->display->display_options['relationships']['field_foia_history_value']['table'] = 'field_data_field_foia_history';
  $handler->display->display_options['relationships']['field_foia_history_value']['field'] = 'field_foia_history_value';
  $handler->display->display_options['relationships']['field_foia_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: FOIA Required? */
  $handler->display->display_options['fields']['field_foia_required']['id'] = 'field_foia_required';
  $handler->display->display_options['fields']['field_foia_required']['table'] = 'field_data_field_foia_required';
  $handler->display->display_options['fields']['field_foia_required']['field'] = 'field_foia_required';
  $handler->display->display_options['fields']['field_foia_required']['relationship'] = 'field_foia_history_value';
  $handler->display->display_options['fields']['field_foia_required']['label'] = '';
  $handler->display->display_options['fields']['field_foia_required']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_foia_required']['alter']['text'] = '<strong>FOIA Required?:</strong> [field_foia_required]';
  $handler->display->display_options['fields']['field_foia_required']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: FOIA Date (field_foia_date) */
  $handler->display->display_options['sorts']['field_foia_date_value']['id'] = 'field_foia_date_value';
  $handler->display->display_options['sorts']['field_foia_date_value']['table'] = 'field_data_field_foia_date';
  $handler->display->display_options['sorts']['field_foia_date_value']['field'] = 'field_foia_date_value';
  $handler->display->display_options['sorts']['field_foia_date_value']['relationship'] = 'field_foia_history_value';
  $handler->display->display_options['sorts']['field_foia_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'plan',
  );

  /* Display: Contact - Current Job */
  $handler = $view->new_display('block', 'Contact - Current Job', 'contact_current_job');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Job';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_contact_info_data' => 'field_contact_info_data',
    'field_contact_info_data_1' => 'field_contact_info_data_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Paragraphs item: Entity with the Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_node']['id'] = 'field_job_history_node';
  $handler->display->display_options['relationships']['field_job_history_node']['table'] = 'paragraphs_item';
  $handler->display->display_options['relationships']['field_job_history_node']['field'] = 'field_job_history_node';
  $handler->display->display_options['relationships']['field_job_history_node']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Job Type */
  $handler->display->display_options['fields']['field_job_type_tr']['id'] = 'field_job_type_tr';
  $handler->display->display_options['fields']['field_job_type_tr']['table'] = 'field_data_field_job_type_tr';
  $handler->display->display_options['fields']['field_job_type_tr']['field'] = 'field_job_type_tr';
  $handler->display->display_options['fields']['field_job_type_tr']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_type_tr']['label'] = '';
  $handler->display->display_options['fields']['field_job_type_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_type_tr']['alter']['text'] = '<strong>Job Type:</strong> [field_job_type_tr]';
  $handler->display->display_options['fields']['field_job_type_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_type_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['alter']['text'] = '<strong>Job Title:</strong> [field_job_title]';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Employment Date */
  $handler->display->display_options['fields']['field_employment_date']['id'] = 'field_employment_date';
  $handler->display->display_options['fields']['field_employment_date']['table'] = 'field_data_field_employment_date';
  $handler->display->display_options['fields']['field_employment_date']['field'] = 'field_employment_date';
  $handler->display->display_options['fields']['field_employment_date']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_employment_date']['label'] = '';
  $handler->display->display_options['fields']['field_employment_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_employment_date']['alter']['text'] = '<strong>Start Date:</strong> [field_employment_date]';
  $handler->display->display_options['fields']['field_employment_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_employment_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_plan_er']['label'] = '';
  $handler->display->display_options['fields']['field_plan_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_er']['alter']['text'] = '<strong>Plan:</strong> [field_plan_er]';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['label'] = '';
  $handler->display->display_options['fields']['field_manager_firm_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_manager_firm_er']['alter']['text'] = '<strong>Manager Firm:</strong> [field_manager_firm_er]';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_firm_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['alter']['text'] = '<strong>Consultant Firm:</strong> [field_consultant_firm_er]';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Office */
  $handler->display->display_options['fields']['field_consultant_office_er']['id'] = 'field_consultant_office_er';
  $handler->display->display_options['fields']['field_consultant_office_er']['table'] = 'field_data_field_consultant_office_er';
  $handler->display->display_options['fields']['field_consultant_office_er']['field'] = 'field_consultant_office_er';
  $handler->display->display_options['fields']['field_consultant_office_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_consultant_office_er']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_office_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_consultant_office_er']['alter']['text'] = '<strong>Office:</strong> [field_consultant_office_er]';
  $handler->display->display_options['fields']['field_consultant_office_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_office_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_address_thoroughfare']['id'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_thoroughfare']['field'] = 'field_address_thoroughfare';
  $handler->display->display_options['fields']['field_address_thoroughfare']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_thoroughfare']['label'] = '';
  $handler->display->display_options['fields']['field_address_thoroughfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_thoroughfare']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address - Postal code */
  $handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
  $handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_postal_code']['label'] = '';
  $handler->display->display_options['fields']['field_address_postal_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_postal_code']['alter']['text'] = '<strong>Address:</strong><br />
[field_address_thoroughfare]<br />
[field_address_locality], [field_address_administrative_area] [field_address_postal_code]';
  $handler->display->display_options['fields']['field_address_postal_code']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_data_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = '';
  $handler->display->display_options['fields']['field_address_data']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data']['alter']['text'] = '<strong>Phone:</strong> [field_address_data][field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<strong>Email:</strong> [field_email-email]';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  $handler->display->display_options['block_description'] = 'Contact Current Job';

  /* Display: Contact - Job History */
  $handler = $view->new_display('block', 'Contact - Job History', 'contact_job_history');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Previous Jobs';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_job_type_tr' => 'field_job_type_tr',
    'field_job_title' => 'field_job_title',
    'field_employment_date' => 'field_employment_date',
    'field_employment_date_1' => 'field_employment_date_1',
    'field_plan_er' => 'field_plan_er',
    'field_manager_firm_er' => 'field_manager_firm_er',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
  );
  $handler->display->display_options['style_options']['default'] = 'field_employment_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_job_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_employment_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_employment_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_plan_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_manager_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/node/[nid]/edit">Edit Job History</a>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Paragraphs item: Entity with the Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_node']['id'] = 'field_job_history_node';
  $handler->display->display_options['relationships']['field_job_history_node']['table'] = 'paragraphs_item';
  $handler->display->display_options['relationships']['field_job_history_node']['field'] = 'field_job_history_node';
  $handler->display->display_options['relationships']['field_job_history_node']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Job Type */
  $handler->display->display_options['fields']['field_job_type_tr']['id'] = 'field_job_type_tr';
  $handler->display->display_options['fields']['field_job_type_tr']['table'] = 'field_data_field_job_type_tr';
  $handler->display->display_options['fields']['field_job_type_tr']['field'] = 'field_job_type_tr';
  $handler->display->display_options['fields']['field_job_type_tr']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_type_tr']['alter']['text'] = '<strong>Job Type:</strong> [field_job_type_tr]';
  $handler->display->display_options['fields']['field_job_type_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_type_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['alter']['text'] = '<strong>Job Title:</strong> [field_job_title]';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Paragraphs item: Employment Date */
  $handler->display->display_options['fields']['field_employment_date']['id'] = 'field_employment_date';
  $handler->display->display_options['fields']['field_employment_date']['table'] = 'field_data_field_employment_date';
  $handler->display->display_options['fields']['field_employment_date']['field'] = 'field_employment_date';
  $handler->display->display_options['fields']['field_employment_date']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_employment_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_employment_date']['alter']['text'] = '<strong>Start Date:</strong> [field_employment_date]';
  $handler->display->display_options['fields']['field_employment_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_employment_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Paragraphs item: Employment Date */
  $handler->display->display_options['fields']['field_employment_date_1']['id'] = 'field_employment_date_1';
  $handler->display->display_options['fields']['field_employment_date_1']['table'] = 'field_data_field_employment_date';
  $handler->display->display_options['fields']['field_employment_date_1']['field'] = 'field_employment_date';
  $handler->display->display_options['fields']['field_employment_date_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_employment_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_employment_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_employment_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_plan_er']['alter']['text'] = '<strong>Plan:</strong> [field_plan_er]';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['empty'] = 'n/a';
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['alter']['text'] = '<strong>Manager Firm:</strong> [field_manager_firm_er]';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['empty'] = 'n/a';
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['alter']['text'] = '<strong>Consultant Firm:</strong> [field_consultant_firm_er]';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['empty'] = 'n/a';
  $handler->display->display_options['fields']['field_consultant_firm_er']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    341 => '341',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  $handler->display->display_options['block_description'] = 'Contact Job History';

  /* Display: Plan Size EVA */
  $handler = $view->new_display('entity_view', 'Plan Size EVA', 'eva_plan_size');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan Size';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_plan_size' => 'field_plan_size',
    'field_date' => 'field_date',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['label'] = '';
  $handler->display->display_options['fields']['field_plan_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_size']['alter']['text'] = '<strong>Plan Size:</strong> $[field_plan_size] (m)';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<em>as of</em> [field_date]';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'plan',
  );

  /* Display: Major Style EVA */
  $handler = $view->new_display('entity_view', 'Major Style EVA', 'eva_major_style');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Major Style';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr']['id'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['label'] = '';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['alter']['text'] = '<strong>Major Style:</strong> [field_major_minor_style_tr]';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'manager_firm' => 'manager_firm',
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'manager_firm',
    1 => 'mandate',
  );

  /* Display: Minor Style EVA */
  $handler = $view->new_display('entity_view', 'Minor Style EVA', 'eva_minor_style');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Minor Style';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr']['id'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['label'] = '';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['alter']['text'] = '<strong>Minor Style:</strong> [field_major_minor_style_tr]';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'manager_firm' => 'manager_firm',
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'manager_firm',
    1 => 'mandate',
  );

  /* Display: Asset Allocation Chart EVA */
  $handler = $view->new_display('entity_view', 'Asset Allocation Chart EVA', 'eva_asset_allocation_chart');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pie-chart';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Asset Allocation (field_asset_allocation_history) */
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['id'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['table'] = 'field_data_field_asset_allocation_history';
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['field'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['relationships']['field_asset_allocation_history_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Field collection item: Absolute Return */
  $handler->display->display_options['fields']['field_aa_absolute_return_1']['id'] = 'field_aa_absolute_return_1';
  $handler->display->display_options['fields']['field_aa_absolute_return_1']['table'] = 'field_data_field_aa_absolute_return';
  $handler->display->display_options['fields']['field_aa_absolute_return_1']['field'] = 'field_aa_absolute_return';
  $handler->display->display_options['fields']['field_aa_absolute_return_1']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_absolute_return_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_absolute_return_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_absolute_return_1']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Alternative Strategies */
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['id'] = 'field_aa_alternative_strategies';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['table'] = 'field_data_field_aa_alternative_strategies';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['field'] = 'field_aa_alternative_strategies';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['alter']['text'] = '<strong>Alternative Strategies:</strong> [field_aa_alternative_strategies]';
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_alternative_strategies']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Balanced */
  $handler->display->display_options['fields']['field_aa_balanced']['id'] = 'field_aa_balanced';
  $handler->display->display_options['fields']['field_aa_balanced']['table'] = 'field_data_field_aa_balanced';
  $handler->display->display_options['fields']['field_aa_balanced']['field'] = 'field_aa_balanced';
  $handler->display->display_options['fields']['field_aa_balanced']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_balanced']['alter']['text'] = '<strong>Balanced:</strong> [field_aa_balanced]';
  $handler->display->display_options['fields']['field_aa_balanced']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_balanced']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_balanced']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Canadian Equities */
  $handler->display->display_options['fields']['field_aa_canadian_equities']['id'] = 'field_aa_canadian_equities';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['table'] = 'field_data_field_aa_canadian_equities';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['field'] = 'field_aa_canadian_equities';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['alter']['text'] = '<strong>Canadian Equities:</strong> [field_aa_canadian_equities]';
  $handler->display->display_options['fields']['field_aa_canadian_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_canadian_equities']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_canadian_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Cash & Other */
  $handler->display->display_options['fields']['field_aa_cash_other']['id'] = 'field_aa_cash_other';
  $handler->display->display_options['fields']['field_aa_cash_other']['table'] = 'field_data_field_aa_cash_other';
  $handler->display->display_options['fields']['field_aa_cash_other']['field'] = 'field_aa_cash_other';
  $handler->display->display_options['fields']['field_aa_cash_other']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_cash_other']['label'] = 'Cash - Other';
  $handler->display->display_options['fields']['field_aa_cash_other']['alter']['text'] = '<strong>Cash & Other:</strong> [field_aa_cash_other]';
  $handler->display->display_options['fields']['field_aa_cash_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_cash_other']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_cash_other']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Credit Opportunities */
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['id'] = 'field_aa_credit_opportunities';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['table'] = 'field_data_field_aa_credit_opportunities';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['field'] = 'field_aa_credit_opportunities';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['alter']['text'] = '<strong>Credit Opportunities:</strong> [field_aa_credit_opportunities]';
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_credit_opportunities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Domestic Equities */
  $handler->display->display_options['fields']['field_aa_domestic_equities']['id'] = 'field_aa_domestic_equities';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['table'] = 'field_data_field_aa_domestic_equities';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['field'] = 'field_aa_domestic_equities';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['alter']['text'] = '<strong>Domestic Equities:</strong> [field_aa_domestic_equities]';
  $handler->display->display_options['fields']['field_aa_domestic_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_domestic_equities']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_domestic_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => 2,
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: Domestic Fixed Income */
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['id'] = 'field_aa_domestic_fixed_income';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['table'] = 'field_data_field_aa_domestic_fixed_income';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['field'] = 'field_aa_domestic_fixed_income';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['alter']['text'] = '<strong>Domestic Fixed Income:</strong> [field_aa_domestic_fixed_income]';
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_domestic_fixed_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Emerging Markets Equity */
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['id'] = 'field_aa_emerging_markets_equity';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['table'] = 'field_data_field_aa_emerging_markets_equity';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['field'] = 'field_aa_emerging_markets_equity';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['alter']['text'] = '<strong>Emerging Markets Equity:</strong> [field_aa_emerging_markets_equity]';
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_emerging_markets_equity']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Global Equities */
  $handler->display->display_options['fields']['field_aa_global_equities']['id'] = 'field_aa_global_equities';
  $handler->display->display_options['fields']['field_aa_global_equities']['table'] = 'field_data_field_aa_global_equities';
  $handler->display->display_options['fields']['field_aa_global_equities']['field'] = 'field_aa_global_equities';
  $handler->display->display_options['fields']['field_aa_global_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_global_equities']['alter']['text'] = '<strong>Global Equities:</strong> [field_aa_global_equities]';
  $handler->display->display_options['fields']['field_aa_global_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_global_equities']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_global_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Global Fixed-Income */
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['id'] = 'field_aa_global_fixed_income';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['table'] = 'field_data_field_aa_global_fixed_income';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['field'] = 'field_aa_global_fixed_income';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['alter']['text'] = '<strong>Global Fixed Income:</strong> [field_aa_global_fixed_income]';
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_global_fixed_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Hedge Fund Strategies */
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['id'] = 'field_aa_hedge_fund_strategies';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['table'] = 'field_data_field_aa_hedge_fund_strategies';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['field'] = 'field_aa_hedge_fund_strategies';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['alter']['text'] = '<strong>Hedge Fund Strategies:</strong> [field_aa_hedge_fund_strategies]';
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_hedge_fund_strategies']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: International Equities */
  $handler->display->display_options['fields']['field_aa_international_equities']['id'] = 'field_aa_international_equities';
  $handler->display->display_options['fields']['field_aa_international_equities']['table'] = 'field_data_field_aa_international_equities';
  $handler->display->display_options['fields']['field_aa_international_equities']['field'] = 'field_aa_international_equities';
  $handler->display->display_options['fields']['field_aa_international_equities']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_international_equities']['alter']['text'] = '<strong>International Equities:</strong> [field_aa_international_equities]';
  $handler->display->display_options['fields']['field_aa_international_equities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_international_equities']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_international_equities']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: International Fixed Income */
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['id'] = 'field_aa_intl_fixed_income';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['table'] = 'field_data_field_aa_intl_fixed_income';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['field'] = 'field_aa_intl_fixed_income';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['alter']['text'] = '<strong>International Fixed Income:</strong> [field_aa_intl_fixed_income]';
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_intl_fixed_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Multi Asset */
  $handler->display->display_options['fields']['field_aa_multi_asset']['id'] = 'field_aa_multi_asset';
  $handler->display->display_options['fields']['field_aa_multi_asset']['table'] = 'field_data_field_aa_multi_asset';
  $handler->display->display_options['fields']['field_aa_multi_asset']['field'] = 'field_aa_multi_asset';
  $handler->display->display_options['fields']['field_aa_multi_asset']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_multi_asset']['alter']['text'] = '<strong>Multi Asset:</strong> [field_aa_multi_asset]';
  $handler->display->display_options['fields']['field_aa_multi_asset']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_multi_asset']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_multi_asset']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Mutual Fund */
  $handler->display->display_options['fields']['field_aa_mutual_fund']['id'] = 'field_aa_mutual_fund';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['table'] = 'field_data_field_aa_mutual_fund';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['field'] = 'field_aa_mutual_fund';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['alter']['text'] = '<strong>Mutual Fund:</strong> [field_aa_mutual_fund]';
  $handler->display->display_options['fields']['field_aa_mutual_fund']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_mutual_fund']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_mutual_fund']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Private Equity */
  $handler->display->display_options['fields']['field_aa_private_equity']['id'] = 'field_aa_private_equity';
  $handler->display->display_options['fields']['field_aa_private_equity']['table'] = 'field_data_field_aa_private_equity';
  $handler->display->display_options['fields']['field_aa_private_equity']['field'] = 'field_aa_private_equity';
  $handler->display->display_options['fields']['field_aa_private_equity']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_private_equity']['alter']['text'] = '<strong>Private Equity:</strong> [field_aa_private_equity]';
  $handler->display->display_options['fields']['field_aa_private_equity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_private_equity']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_private_equity']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Real Assets */
  $handler->display->display_options['fields']['field_aa_real_assets']['id'] = 'field_aa_real_assets';
  $handler->display->display_options['fields']['field_aa_real_assets']['table'] = 'field_data_field_aa_real_assets';
  $handler->display->display_options['fields']['field_aa_real_assets']['field'] = 'field_aa_real_assets';
  $handler->display->display_options['fields']['field_aa_real_assets']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_real_assets']['alter']['text'] = '<strong>Real Assets:</strong> [field_aa_real_assets]';
  $handler->display->display_options['fields']['field_aa_real_assets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_real_assets']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_real_assets']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Real Estate */
  $handler->display->display_options['fields']['field_aa_real_estate']['id'] = 'field_aa_real_estate';
  $handler->display->display_options['fields']['field_aa_real_estate']['table'] = 'field_data_field_aa_real_estate';
  $handler->display->display_options['fields']['field_aa_real_estate']['field'] = 'field_aa_real_estate';
  $handler->display->display_options['fields']['field_aa_real_estate']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_real_estate']['alter']['text'] = '<strong>Real Estate:</strong> [field_aa_real_estate]';
  $handler->display->display_options['fields']['field_aa_real_estate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_real_estate']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_real_estate']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Real Return */
  $handler->display->display_options['fields']['field_aa_real_return']['id'] = 'field_aa_real_return';
  $handler->display->display_options['fields']['field_aa_real_return']['table'] = 'field_data_field_aa_real_return';
  $handler->display->display_options['fields']['field_aa_real_return']['field'] = 'field_aa_real_return';
  $handler->display->display_options['fields']['field_aa_real_return']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_real_return']['alter']['text'] = '<strong>Real Return:</strong> [field_aa_real_return] ';
  $handler->display->display_options['fields']['field_aa_real_return']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_real_return']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_real_return']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_aa_real_return']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Risk Parity */
  $handler->display->display_options['fields']['field_aa_risk_parity']['id'] = 'field_aa_risk_parity';
  $handler->display->display_options['fields']['field_aa_risk_parity']['table'] = 'field_data_field_aa_risk_parity';
  $handler->display->display_options['fields']['field_aa_risk_parity']['field'] = 'field_aa_risk_parity';
  $handler->display->display_options['fields']['field_aa_risk_parity']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['fields']['field_aa_risk_parity']['alter']['text'] = '<strong>Risk Parity:</strong> [field_aa_risk_parity]';
  $handler->display->display_options['fields']['field_aa_risk_parity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aa_risk_parity']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_aa_risk_parity']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_asset_allocation_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'plan',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Manager Plans EVA */
  $handler = $view->new_display('entity_view', 'Manager Plans EVA', 'entity_view_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan History';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_geographic_tr' => 'field_geographic_tr',
    'name_1' => 'name_1',
    'name' => 'name',
    'field_amount' => 'field_amount',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geographic_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This firm has no plan history.';
  $handler->display->display_options['empty']['area']['format'] = 'advanced_input';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'geographic' => 'geographic',
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Taxonomy term: Field collection item using Geographic */
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['id'] = 'reverse_field_geographic_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['field'] = 'reverse_field_geographic_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['relationship'] = 'term_node_tid';
  /* Relationship: Taxonomy term: Field collection item using Major/Minor Style */
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['id'] = 'reverse_field_major_minor_style_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['field'] = 'reverse_field_major_minor_style_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['relationship'] = 'term_node_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['id'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['field'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Major Style';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '$[field_amount](m)';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'plan' => 'plan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'manager_firm',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Plan Contact Edit EVA */
  $handler = $view->new_display('entity_view', 'Plan Contact Edit EVA', 'eva_plan_contact_edit');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_photo' => 'field_photo',
    'title_field' => 'title_field',
    'field_lead_plan_contact' => 'field_lead_plan_contact',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'field_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lead_plan_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results Text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This plan currently has no contacts.';
  $handler->display->display_options['empty']['area']['format'] = 'advanced_input';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => 'thumbnail_micro',
    'image_link' => 'content',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Paragraphs item: Lead Plan Contact? */
  $handler->display->display_options['fields']['field_lead_plan_contact']['id'] = 'field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['field'] = 'field_lead_plan_contact';
  $handler->display->display_options['fields']['field_lead_plan_contact']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_lead_plan_contact']['label'] = 'Lead?';
  $handler->display->display_options['fields']['field_lead_plan_contact']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['text'] = ' | [delete_node]';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'consultant_firm',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Consultant Plans EVA */
  $handler = $view->new_display('entity_view', 'Consultant Plans EVA', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan History';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_plan_size' => 'field_plan_size',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'title_field_1' => 'title_field_1',
    'field_consultant_type_tr' => 'field_consultant_type_tr',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_plan_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_row_filter' => 'views_aggregator_row_filter',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_count',
      'aggr_par_column' => '0',
    ),
    'field_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_field_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'view_node' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This firm has no plan history.';
  $handler->display->display_options['empty']['area']['format'] = 'advanced_input';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'geographic' => 'geographic',
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Taxonomy term: Field collection item using Geographic */
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['id'] = 'reverse_field_geographic_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['field'] = 'reverse_field_geographic_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_geographic_tr_field_collection_item']['relationship'] = 'term_node_tid';
  /* Relationship: Taxonomy term: Field collection item using Major/Minor Style */
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['id'] = 'reverse_field_major_minor_style_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['field'] = 'reverse_field_major_minor_style_tr_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_major_minor_style_tr_field_collection_item']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultant_roster_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Major Style';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '$[field_amount](m)';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['type'] = 'number_integer';
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_size']['alter']['text'] = '$[field_plan_size](m)';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 1;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = 'Lead Contact';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: Consultant Type */
  $handler->display->display_options['fields']['field_consultant_type_tr']['id'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['table'] = 'field_data_field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['field'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_consultant_type_tr']['label'] = 'Relationship';
  $handler->display->display_options['fields']['field_consultant_type_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1] ';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = ' | [edit_node]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['text'] = ' | [delete_node]';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'consultant_firm',
  );
  $handler->display->display_options['show_title'] = 1;

  /* Display: Mandate - Plan Info */
  $handler = $view->new_display('block', 'Mandate - Plan Info', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Plan Info';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_contact_info_data' => 'field_contact_info_data',
    'field_contact_info_data_1' => 'field_contact_info_data_1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'This mandate is not associated with any plans.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['relationship'] = 'field_job_history_value';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['id'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['field'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['relationships']['reverse_field_plan_er_node']['relationship'] = 'field_plan_er_target_id';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_plan_er']['label'] = '';
  $handler->display->display_options['fields']['field_plan_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_er']['alter']['text'] = '<strong>Plan: </strong>[field_plan_er]';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['label'] = '';
  $handler->display->display_options['fields']['field_plan_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_size']['alter']['text'] = '<strong>Plan Size: </strong>$[field_plan_size] (m)';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '<strong>Lead Contact: </strong>[title_field]';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['alter']['text'] = '<strong>Lead Contact: </strong>[title_field]<br />
<strong>Job Title:</strong> [field_job_title]';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = '';
  $handler->display->display_options['fields']['field_address_data_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = '';
  $handler->display->display_options['fields']['field_address_data']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data']['alter']['text'] = ' <strong>Phone: </strong>[field_address_data][field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<strong>Email: </strong>[field_email]';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_plan_er_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'plan_contact' => 'plan_contact',
  );
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );

  /* Display: Plan - Direct Consultants */
  $handler = $view->new_display('block', 'Plan - Direct Consultants', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Consultant Roster';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_consultant_type_tr' => 'field_consultant_type_tr',
    'title' => 'title',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_consultant_firm_er';
  $handler->display->display_options['style_options']['info'] = array(
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_consultant_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_address_data_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'edit_node' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '1';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'major_minor_styles' => 'major_minor_styles',
    'activity_status' => 0,
    'asset_allocation' => 0,
    'asset_classes' => 0,
    'assignment_types' => 0,
    'attributes' => 0,
    'blog_categories' => 0,
    'client_types' => 0,
    'consultant_types' => 0,
    'currencies' => 0,
    'databases_used' => 0,
    'gallery_categories' => 0,
    'geographic' => 0,
    'job_types' => 0,
    'manager_research_contacts' => 0,
    'mandate_status' => 0,
    'news_types' => 0,
    'office_types' => 0,
    'organization_type' => 0,
    'placement_policies' => 0,
    'plan_types' => 0,
    'portfolio_category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['id'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['field'] = 'field_manager_firm_er_target_id';
  $handler->display->display_options['relationships']['field_manager_firm_er_target_id']['relationship'] = 'field_managers_hired_value';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['id'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['field'] = 'reverse_field_manager_firm_er_node';
  $handler->display->display_options['relationships']['reverse_field_manager_firm_er_node']['relationship'] = 'field_manager_firm_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Consultant Firms Hired (field_consultants_hired) */
  $handler->display->display_options['relationships']['field_consultants_hired_value']['id'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['table'] = 'field_data_field_consultants_hired';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['field'] = 'field_consultants_hired_value';
  $handler->display->display_options['relationships']['field_consultants_hired_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Mandate Status */
  $handler->display->display_options['fields']['field_mandate_status_tr']['id'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['field'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['label'] = 'Status';
  $handler->display->display_options['fields']['field_mandate_status_tr']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title_field_1']['label'] = 'Plan';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: Consultant Type */
  $handler->display->display_options['fields']['field_consultant_type_tr']['id'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['table'] = 'field_data_field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['field'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_type_tr']['label'] = 'Type';
  $handler->display->display_options['fields']['field_consultant_type_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_1']['alter']['text'] = ' x[field_address_data_1]';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Amount */
  $handler->display->display_options['fields']['field_amount']['id'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['table'] = 'field_data_field_amount';
  $handler->display->display_options['fields']['field_amount']['field'] = 'field_amount';
  $handler->display->display_options['fields']['field_amount']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_amount']['alter']['text'] = '[field_amount]';
  $handler->display->display_options['fields']['field_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amount']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_consultant_contact_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Contact';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'consultant_contact' => 'consultant_contact',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Field: Status (field_status_tr) */
  $handler->display->display_options['filters']['field_status_tr_tid']['id'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['table'] = 'field_data_field_status_tr';
  $handler->display->display_options['filters']['field_status_tr_tid']['field'] = 'field_status_tr_tid';
  $handler->display->display_options['filters']['field_status_tr_tid']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_status_tr_tid']['value'] = array(
    340 => '340',
  );
  $handler->display->display_options['filters']['field_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tr_tid']['vocabulary'] = 'activity_status';
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );

  /* Display: Plan Roster EVA */
  $handler = $view->new_display('entity_view', 'Plan Roster EVA', 'entity_view_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'field_consultant_type_tr' => 'field_consultant_type_tr',
    'field_consultant_contact_er' => 'field_consultant_contact_er',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_consultant_firm_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_type_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_consultant_contact_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Consultant Type */
  $handler->display->display_options['fields']['field_consultant_type_tr']['id'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['table'] = 'field_data_field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['field'] = 'field_consultant_type_tr';
  $handler->display->display_options['fields']['field_consultant_type_tr']['relationship'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['fields']['field_consultant_type_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Consultant Contact */
  $handler->display->display_options['fields']['field_consultant_contact_er']['id'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['field'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['relationship'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['fields']['field_consultant_contact_er']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'plan',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $handler->display->display_options['show_title'] = 1;
  $export['reference_views'] = $view;

  return $export;
}
