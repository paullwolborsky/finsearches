<?php
/**
 * @file
 * fs_f_fn_content_list_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fs_f_fn_content_list_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_lists';
  $view->description = 'Renders list pages for parent content pages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'plans_list';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 'changed',
    ),
    'node' => array(
      'article' => 0,
      'clients' => 0,
      'consultant_firm' => 0,
      'contact' => 0,
      'gallery' => 0,
      'investment_manager_research' => 0,
      'manager_firm' => 0,
      'mandate' => 0,
      'news' => 0,
      'office' => 0,
      'organization' => 0,
      'plan' => 0,
      'dexp_portfolio' => 0,
      'site_page' => 0,
      'subscription_log_entry' => 0,
      'team' => 0,
      'testimonial' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
    'votingapi' => array(
      'tag:vote' => 0,
      'function:count' => 0,
      'function:average' => 0,
      'function:sum' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_plan_size' => 'field_plan_size',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'field_contact_history' => 'field_contact_history',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_plan_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_history' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Save */
  $handler->display->display_options['header']['views_save']['id'] = 'views_save';
  $handler->display->display_options['header']['views_save']['table'] = 'views';
  $handler->display->display_options['header']['views_save']['field'] = 'views_save';
  $handler->display->display_options['header']['views_save']['format'] = 'advanced_input';
  $handler->display->display_options['header']['views_save']['button_text'] = 'Save Search';
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Name (title_field) */
  $handler->display->display_options['arguments']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['arguments']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_field_value']['summary']['format'] = 'default_summary';
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

  /* Display: Plans */
  $handler = $view->new_display('page', 'Plans', 'plans_list');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_type_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_size_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '999999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nothing' => 'nothing',
    'title_field' => 'title_field',
    'field_plan_type_tr' => 'field_plan_type_tr',
    'field_plan_size' => 'field_plan_size',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area_1' => 'field_address_administrative_area_1',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'field_consultant_firm_er' => 'field_consultant_firm_er',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_plan_size';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
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
    'field_plan_type_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_plan_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_address_administrative_area_1' => array(
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
    'field_consultant_firm_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
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
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Tasks';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="magical-modal-link"><a class="ctools-use-modal ctools-modal-fin-modals-contact-style" href=\'/modal-front/[nid]/tasks/nojs\' title=\'Tasks\'><i class="fa fa-list-alt"></i></a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Plan';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Plan Type */
  $handler->display->display_options['fields']['field_plan_type_tr']['id'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['field'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_plan_type_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area_1']['id'] = 'field_address_administrative_area_1';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area_1']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultant_roster_fc_value';
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
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Plan';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Plan Type (field_plan_type_tr) */
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['id'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['field'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator_id'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['label'] = 'Plan Type';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['vocabulary'] = 'plan_types';
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area_1';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Plan Size (field_plan_size) */
  $handler->display->display_options['filters']['field_plan_size_value']['id'] = 'field_plan_size_value';
  $handler->display->display_options['filters']['field_plan_size_value']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['filters']['field_plan_size_value']['field'] = 'field_plan_size_value';
  $handler->display->display_options['filters']['field_plan_size_value']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['filters']['field_plan_size_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_plan_size_value']['value']['min'] = '0';
  $handler->display->display_options['filters']['field_plan_size_value']['value']['max'] = '999999';
  $handler->display->display_options['filters']['field_plan_size_value']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['operator_id'] = 'field_plan_size_value_op';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['label'] = 'Plan Size';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['operator'] = 'field_plan_size_value_op';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['identifier'] = 'field_plan_size_value';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'plans';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Plans';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Plan Alpha Pager */
  $handler = $view->new_display('attachment', 'Plan Alpha Pager', 'attachment_1');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'plans_list';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title_1']['id'] = 'title_1';
  $handler->display->display_options['arguments']['title_1']['table'] = 'node';
  $handler->display->display_options['arguments']['title_1']['field'] = 'title';
  $handler->display->display_options['arguments']['title_1']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title_1']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title_1']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title_1']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title_1']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title_1']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title_1']['limit'] = '1';
  $handler->display->display_options['arguments']['title_1']['case'] = 'upper';
  $handler->display->display_options['arguments']['title_1']['path_case'] = 'lower';
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
  $handler->display->display_options['displays'] = array(
    'plans_list' => 'plans_list',
    'default' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'consultant_firms_list' => 0,
    'consultant_contacts_list' => 0,
    'manager_firms_list' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
    'mandates_fin_daily' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Plans - Export */
  $handler = $view->new_display('views_data_export', 'Plans - Export', 'plans_export');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_type_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_size_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '999999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'plans_export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Consultant Roster (field_consultant_roster_fc) */
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['id'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['table'] = 'field_data_field_consultant_roster_fc';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['field'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['relationships']['field_consultant_roster_fc_value']['delta'] = '1';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Tasks';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="magical-modal-link"><a class="ctools-use-modal ctools-modal-fin-modals-contact-style" href=\'/modal-front/[nid]/tasks/nojs\' title=\'Tasks\'><i class="fa fa-list-alt"></i></a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Plan';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Plan Type */
  $handler->display->display_options['fields']['field_plan_type_tr']['id'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['field'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_plan_type_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area_1']['id'] = 'field_address_administrative_area_1';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area_1']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultant_roster_fc_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Plan';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Plan Type (field_plan_type_tr) */
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['id'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['field'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator_id'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['label'] = 'Plan Type';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['vocabulary'] = 'plan_types';
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area_1';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Plan Size (field_plan_size) */
  $handler->display->display_options['filters']['field_plan_size_value']['id'] = 'field_plan_size_value';
  $handler->display->display_options['filters']['field_plan_size_value']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['filters']['field_plan_size_value']['field'] = 'field_plan_size_value';
  $handler->display->display_options['filters']['field_plan_size_value']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['filters']['field_plan_size_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_plan_size_value']['value']['min'] = '0';
  $handler->display->display_options['filters']['field_plan_size_value']['value']['max'] = '999999';
  $handler->display->display_options['filters']['field_plan_size_value']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['operator_id'] = 'field_plan_size_value_op';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['label'] = 'Plan Size';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['operator'] = 'field_plan_size_value_op';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['identifier'] = 'field_plan_size_value';
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_plan_size_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['path'] = 'export/plans.csv';
  $handler->display->display_options['menu']['title'] = 'Plans';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'plans_list' => 'plans_list',
    'default' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: Plan Contacts */
  $handler = $view->new_display('page', 'Plan Contacts', 'plan_contacts_list');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_type_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_plan_er' => 'field_plan_er',
    'field_plan_type_tr' => 'field_plan_type_tr',
    'field_job_title' => 'field_job_title',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
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
    'field_plan_er' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_plan_type_tr' => array(
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
      'empty_column' => 1,
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
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '0';
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
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Plan Type */
  $handler->display->display_options['fields']['field_plan_type_tr']['id'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['field'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_plan_type_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
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
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Contact';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Plan Type (field_plan_type_tr) */
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['id'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['field'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator_id'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['label'] = 'Plan Type';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['label'] = 'Plan Type (field_plan_type_tr)';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['vocabulary'] = 'plan_types';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['use_chosen'] = 'always';
  $handler->display->display_options['path'] = 'plans/plan-contacts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Plan Contacts';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Plan Contacts Alpha Pager */
  $handler = $view->new_display('attachment', 'Plan Contacts Alpha Pager', 'attachment_2');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'plan_contacts_list';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['relationships']['field_plan_er_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'plan_contacts_list' => 'plan_contacts_list',
    'default' => 0,
    'plans_list' => 0,
    'mandates_list' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
    'mandates_fin_daily' => 0,
    'rfps_list' => 0,
    'consultant_firms_list' => 0,
    'consultant_contacts_list' => 0,
    'manager_firms_list' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Plan Contacts - Export */
  $handler = $view->new_display('views_data_export', 'Plan Contacts - Export', 'plan_contact_export');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'plan_contacts_list';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_type_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'plan_contacts.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '0';
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
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Plan Type */
  $handler->display->display_options['fields']['field_plan_type_tr']['id'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['field'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_plan_type_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Paragraphs item: Lead Plan Contact? (field_lead_plan_contact) */
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['id'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['table'] = 'field_data_field_lead_plan_contact';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['field'] = 'field_lead_plan_contact_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_lead_plan_contact_value']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Contact';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Plan Type (field_plan_type_tr) */
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['id'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['field'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator_id'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['label'] = 'Plan Type';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['label'] = 'Plan Type (field_plan_type_tr)';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['vocabulary'] = 'plan_types';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['use_chosen'] = 'always';
  $handler->display->display_options['path'] = 'export/plan-contacts.csv';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Plan Contacts';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'plan_contacts_list' => 'plan_contacts_list',
    'default' => 0,
    'plans_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: Mandates */
  $handler = $view->new_display('page', 'Mandates', 'mandates_list');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_mandate_status_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_date_value' => array(
      'bef_format' => 'bef_datepicker',
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_type_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_country' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_account_size_value' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_geographic_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_attribute_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_major_minor_style_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_date' => 'field_date',
    'field_mandate_status_tr' => 'field_mandate_status_tr',
    'title_1' => 'title_1',
    'field_plan_type_tr_1' => 'field_plan_type_tr_1',
    'field_address_administrative_area_1' => 'field_address_administrative_area_1',
    'field_address_country' => 'field_address_country',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_major_minor_style_tr' => 'field_major_minor_style_tr',
    'field_major_minor_style_tr_1' => 'field_major_minor_style_tr_1',
    'field_attribute_tr' => 'field_attribute_tr',
    'title_field' => 'title_field',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mandate_status_tr' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_plan_type_tr_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_administrative_area_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_country' => array(
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
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Field: Field: Mandate Status */
  $handler->display->display_options['fields']['field_mandate_status_tr']['id'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['field'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['label'] = 'Status';
  $handler->display->display_options['fields']['field_mandate_status_tr']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Plan';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Plan Type */
  $handler->display->display_options['fields']['field_plan_type_tr_1']['id'] = 'field_plan_type_tr_1';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['field'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_plan_type_tr_1']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area_1']['id'] = 'field_address_administrative_area_1';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area_1']['display_name'] = 0;
  /* Field: Field: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geographic_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr']['id'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['label'] = 'Major Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_offset'] = '0';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['id'] = 'field_major_minor_style_tr_1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_offset'] = '1';
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attribute_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = 'Consultant Firm';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['label'] = 'Mandate Size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
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
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
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
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['operator_id'] = 'field_mandate_status_tr_tid_op';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['operator'] = 'field_mandate_status_tr_tid_op';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['identifier'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Plan Type (field_plan_type_tr) */
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['id'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['field'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator_id'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['label'] = 'Plan Type';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['vocabulary'] = 'plan_types';
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area_1';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Country */
  $handler->display->display_options['filters']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['field_address_country']['group'] = 1;
  $handler->display->display_options['filters']['field_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_country']['expose']['operator_id'] = 'field_address_country_op';
  $handler->display->display_options['filters']['field_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_address_country']['expose']['operator'] = 'field_address_country_op';
  $handler->display->display_options['filters']['field_address_country']['expose']['identifier'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_address_country']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Consultant Firm';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Account Size (field_account_size) */
  $handler->display->display_options['filters']['field_account_size_value']['id'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['filters']['field_account_size_value']['field'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_account_size_value']['value']['min'] = '0';
  $handler->display->display_options['filters']['field_account_size_value']['value']['max'] = '999999';
  $handler->display->display_options['filters']['field_account_size_value']['group'] = 1;
  $handler->display->display_options['filters']['field_account_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator_id'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['label'] = 'Mandate Size';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['identifier'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Geographic (field_geographic_tr) */
  $handler->display->display_options['filters']['field_geographic_tr_tid']['id'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['field'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator_id'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['label'] = 'Geographic';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['identifier'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_geographic_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['vocabulary'] = 'geographic';
  /* Filter criterion: Field: Attribute (field_attribute_tr) */
  $handler->display->display_options['filters']['field_attribute_tr_tid']['id'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['field'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator_id'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['label'] = 'Attribute';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['identifier'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_attribute_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['vocabulary'] = 'attributes';
  /* Filter criterion: Field: Major/Minor Style (field_major_minor_style_tr) */
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['id'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['field'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator_id'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['label'] = 'Major/Minor Style';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['identifier'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['vocabulary'] = 'major_minor_styles';
  $handler->display->display_options['path'] = 'mandates';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mandates';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Mandates - Export */
  $handler = $view->new_display('views_data_export', 'Mandates - Export', 'mandate_export');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'mandates_list';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_mandate_status_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_date_value' => array(
      'bef_format' => 'bef_datepicker',
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_plan_type_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_country' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_account_size_value' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_geographic_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_attribute_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_major_minor_style_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'mandate_export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Field: Field: Mandate Status */
  $handler->display->display_options['fields']['field_mandate_status_tr']['id'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['field'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['label'] = 'Status';
  $handler->display->display_options['fields']['field_mandate_status_tr']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Plan';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Plan Type */
  $handler->display->display_options['fields']['field_plan_type_tr_1']['id'] = 'field_plan_type_tr_1';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['field'] = 'field_plan_type_tr';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_plan_type_tr_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_plan_type_tr_1']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area_1']['id'] = 'field_address_administrative_area_1';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['label'] = 'State';
  $handler->display->display_options['fields']['field_address_administrative_area_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area_1']['display_name'] = 0;
  /* Field: Field: Address - Country */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_country']['display_name'] = 1;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geographic_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr']['id'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['label'] = 'Major Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_offset'] = '0';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['id'] = 'field_major_minor_style_tr_1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_offset'] = '1';
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attribute_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = 'Consultant Firm';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['label'] = 'Mandate Size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
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
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Mandate Status (field_mandate_status_tr) */
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['id'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['field'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['operator_id'] = 'field_mandate_status_tr_tid_op';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['operator'] = 'field_mandate_status_tr_tid_op';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['identifier'] = 'field_mandate_status_tr_tid';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mandate_status_tr_tid']['vocabulary'] = 'mandate_status';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Plan Type (field_plan_type_tr) */
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['id'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['table'] = 'field_data_field_plan_type_tr';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['field'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator_id'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['label'] = 'Plan Type';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['operator'] = 'field_plan_type_tr_tid_op';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['identifier'] = 'field_plan_type_tr_tid';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_plan_type_tr_tid']['vocabulary'] = 'plan_types';
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area_1';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Country */
  $handler->display->display_options['filters']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['field_address_country']['group'] = 1;
  $handler->display->display_options['filters']['field_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_country']['expose']['operator_id'] = 'field_address_country_op';
  $handler->display->display_options['filters']['field_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_address_country']['expose']['operator'] = 'field_address_country_op';
  $handler->display->display_options['filters']['field_address_country']['expose']['identifier'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_address_country']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Consultant Firm';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Account Size (field_account_size) */
  $handler->display->display_options['filters']['field_account_size_value']['id'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['filters']['field_account_size_value']['field'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_account_size_value']['value']['min'] = '0';
  $handler->display->display_options['filters']['field_account_size_value']['value']['max'] = '999999';
  $handler->display->display_options['filters']['field_account_size_value']['group'] = 1;
  $handler->display->display_options['filters']['field_account_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator_id'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['label'] = 'Mandate Size';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['identifier'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Geographic (field_geographic_tr) */
  $handler->display->display_options['filters']['field_geographic_tr_tid']['id'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['field'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator_id'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['label'] = 'Geographic';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['identifier'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_geographic_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['vocabulary'] = 'geographic';
  /* Filter criterion: Field: Attribute (field_attribute_tr) */
  $handler->display->display_options['filters']['field_attribute_tr_tid']['id'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['field'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator_id'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['label'] = 'Attribute';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['identifier'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_attribute_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['vocabulary'] = 'attributes';
  /* Filter criterion: Field: Major/Minor Style (field_major_minor_style_tr) */
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['id'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['field'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator_id'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['label'] = 'Major/Minor Style';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['identifier'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['vocabulary'] = 'major_minor_styles';
  $handler->display->display_options['path'] = 'export/mandates_export.csv';
  $handler->display->display_options['menu']['title'] = 'Mandates';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'mandates_list' => 'mandates_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: RFPs */
  $handler = $view->new_display('page', 'RFPs', 'rfps_list');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_account_size_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '999999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_geographic_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_attribute_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_major_minor_style_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'field_rfp_date' => 'field_rfp_date',
    'field_rfp_link' => 'field_rfp_link',
    'title_field_1' => 'title_field_1',
    'field_geographic_tr' => 'field_geographic_tr',
    'field_major_minor_style_tr' => 'field_major_minor_style_tr',
    'field_major_minor_style_tr_1' => 'field_major_minor_style_tr_1',
    'field_attribute_tr' => 'field_attribute_tr',
    'field_account_size' => 'field_account_size',
    'view_node' => 'view_node',
    'edit_node' => 'view_node',
    'delete_node' => 'view_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_account_size';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfp_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfp_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field_1' => array(
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
    'field_account_size' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: RFP Date */
  $handler->display->display_options['fields']['field_rfp_date']['id'] = 'field_rfp_date';
  $handler->display->display_options['fields']['field_rfp_date']['table'] = 'field_data_field_rfp_date';
  $handler->display->display_options['fields']['field_rfp_date']['field'] = 'field_rfp_date';
  $handler->display->display_options['fields']['field_rfp_date']['label'] = 'Due Date';
  $handler->display->display_options['fields']['field_rfp_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfp_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: RFP Link */
  $handler->display->display_options['fields']['field_rfp_link']['id'] = 'field_rfp_link';
  $handler->display->display_options['fields']['field_rfp_link']['table'] = 'field_data_field_rfp_link';
  $handler->display->display_options['fields']['field_rfp_link']['field'] = 'field_rfp_link';
  $handler->display->display_options['fields']['field_rfp_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfp_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rfp_link']['group_column'] = 'entity_id';
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
  $handler->display->display_options['fields']['field_geographic_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr']['id'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['label'] = 'Major Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_offset'] = '0';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['id'] = 'field_major_minor_style_tr_1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_offset'] = '1';
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attribute_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['label'] = 'Mandate Size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
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
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
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
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Plan';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Account Size (field_account_size) */
  $handler->display->display_options['filters']['field_account_size_value']['id'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['filters']['field_account_size_value']['field'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_account_size_value']['value']['min'] = '0';
  $handler->display->display_options['filters']['field_account_size_value']['value']['max'] = '999999';
  $handler->display->display_options['filters']['field_account_size_value']['group'] = 1;
  $handler->display->display_options['filters']['field_account_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator_id'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['label'] = 'Mandate Size';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['identifier'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Geographic (field_geographic_tr) */
  $handler->display->display_options['filters']['field_geographic_tr_tid']['id'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['field'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator_id'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['label'] = 'Geographic';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['identifier'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_geographic_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['vocabulary'] = 'geographic';
  /* Filter criterion: Field: Attribute (field_attribute_tr) */
  $handler->display->display_options['filters']['field_attribute_tr_tid']['id'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['field'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator_id'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['label'] = 'Attribute';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['identifier'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_attribute_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['vocabulary'] = 'attributes';
  /* Filter criterion: Field: Major/Minor Style (field_major_minor_style_tr) */
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['id'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['field'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator_id'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['label'] = 'Major/Minor Style';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['identifier'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['vocabulary'] = 'major_minor_styles';
  $handler->display->display_options['path'] = 'mandates/rfps';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'RFPs';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: RFP - Export */
  $handler = $view->new_display('views_data_export', 'RFP - Export', 'rfp_export');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'rfps_list';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_account_size_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '999999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_geographic_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_attribute_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_major_minor_style_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'rfp_export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: RFP Date */
  $handler->display->display_options['fields']['field_rfp_date']['id'] = 'field_rfp_date';
  $handler->display->display_options['fields']['field_rfp_date']['table'] = 'field_data_field_rfp_date';
  $handler->display->display_options['fields']['field_rfp_date']['field'] = 'field_rfp_date';
  $handler->display->display_options['fields']['field_rfp_date']['label'] = 'Due Date';
  $handler->display->display_options['fields']['field_rfp_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfp_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: RFP Link */
  $handler->display->display_options['fields']['field_rfp_link']['id'] = 'field_rfp_link';
  $handler->display->display_options['fields']['field_rfp_link']['table'] = 'field_data_field_rfp_link';
  $handler->display->display_options['fields']['field_rfp_link']['field'] = 'field_rfp_link';
  $handler->display->display_options['fields']['field_rfp_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfp_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rfp_link']['group_column'] = 'entity_id';
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
  $handler->display->display_options['fields']['field_geographic_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr']['id'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['label'] = 'Major Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr']['delta_offset'] = '0';
  /* Field: Field: Major/Minor Style */
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['id'] = 'field_major_minor_style_tr_1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['field'] = 'field_major_minor_style_tr';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['label'] = 'Minor Style';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_major_minor_style_tr_1']['delta_offset'] = '1';
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attribute_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Account Size */
  $handler->display->display_options['fields']['field_account_size']['id'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['fields']['field_account_size']['field'] = 'field_account_size';
  $handler->display->display_options['fields']['field_account_size']['label'] = 'Mandate Size';
  $handler->display->display_options['fields']['field_account_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
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
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Plan';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Account Size (field_account_size) */
  $handler->display->display_options['filters']['field_account_size_value']['id'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['table'] = 'field_data_field_account_size';
  $handler->display->display_options['filters']['field_account_size_value']['field'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_account_size_value']['value']['min'] = '0';
  $handler->display->display_options['filters']['field_account_size_value']['value']['max'] = '999999';
  $handler->display->display_options['filters']['field_account_size_value']['group'] = 1;
  $handler->display->display_options['filters']['field_account_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator_id'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['label'] = 'Mandate Size';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['operator'] = 'field_account_size_value_op';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['identifier'] = 'field_account_size_value';
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_account_size_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Field: Geographic (field_geographic_tr) */
  $handler->display->display_options['filters']['field_geographic_tr_tid']['id'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['field'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator_id'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['label'] = 'Geographic';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['operator'] = 'field_geographic_tr_tid_op';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['identifier'] = 'field_geographic_tr_tid';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_geographic_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_geographic_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_geographic_tr_tid']['vocabulary'] = 'geographic';
  /* Filter criterion: Field: Attribute (field_attribute_tr) */
  $handler->display->display_options['filters']['field_attribute_tr_tid']['id'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['field'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator_id'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['label'] = 'Attribute';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['operator'] = 'field_attribute_tr_tid_op';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['identifier'] = 'field_attribute_tr_tid';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_attribute_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_attribute_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_attribute_tr_tid']['vocabulary'] = 'attributes';
  /* Filter criterion: Field: Major/Minor Style (field_major_minor_style_tr) */
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['id'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['table'] = 'field_data_field_major_minor_style_tr';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['field'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator_id'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['label'] = 'Major/Minor Style';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['operator'] = 'field_major_minor_style_tr_tid_op';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['identifier'] = 'field_major_minor_style_tr_tid';
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_major_minor_style_tr_tid']['vocabulary'] = 'major_minor_styles';
  $handler->display->display_options['path'] = 'export/rfp_export.csv';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'RFPs';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'rfps_list' => 'rfps_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: FIN Daily Mandates */
  $handler = $view->new_display('block', 'FIN Daily Mandates', 'mandates_fin_daily');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_mandate_status_tr_tid_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_geographic_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_consultant_firm_er_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_major_minor_style_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_account_size_value' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '9999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => 'normal',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'view_node' => 'view_node',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There are no mandates at this time.';
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
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_plan_er_target_id']['id'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['relationships']['field_plan_er_target_id']['field'] = 'field_plan_er_target_id';
  /* Relationship: Content: Plan Size (field_plan_size_history) */
  $handler->display->display_options['relationships']['field_plan_size_history_value']['id'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['table'] = 'field_data_field_plan_size_history';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['field'] = 'field_plan_size_history_value';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['relationships']['field_plan_size_history_value']['delta'] = '-1';
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
  /* Relationship: Content: Manager Firms Hired (field_managers_hired) */
  $handler->display->display_options['relationships']['field_managers_hired_value']['id'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['table'] = 'field_data_field_managers_hired';
  $handler->display->display_options['relationships']['field_managers_hired_value']['field'] = 'field_managers_hired_value';
  $handler->display->display_options['relationships']['field_managers_hired_value']['delta'] = '-1';
  /* Relationship: Content: Mandate Comments (field_mandate_comments_fc) */
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['id'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['table'] = 'field_data_field_mandate_comments_fc';
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['field'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['relationships']['field_mandate_comments_fc_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Mandate';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '<strong>Mandate Date:</strong> [field_date]';
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
  /* Field: Field: Mandate Status */
  $handler->display->display_options['fields']['field_mandate_status_tr']['id'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['table'] = 'field_data_field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['field'] = 'field_mandate_status_tr';
  $handler->display->display_options['fields']['field_mandate_status_tr']['label'] = '';
  $handler->display->display_options['fields']['field_mandate_status_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mandate_status_tr']['alter']['text'] = '<strong>Status:</strong> [field_mandate_status_tr]';
  $handler->display->display_options['fields']['field_mandate_status_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = ', [field_address_locality]';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  /* Field: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['fields']['field_address_administrative_area']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['field_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_administrative_area']['alter']['text'] = ', [field_address_administrative_area]';
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 1;
  /* Field: Field: Plan */
  $handler->display->display_options['fields']['field_plan_er']['id'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['table'] = 'field_data_field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['field'] = 'field_plan_er';
  $handler->display->display_options['fields']['field_plan_er']['label'] = '';
  $handler->display->display_options['fields']['field_plan_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_er']['alter']['text'] = '<strong>Plan Name:</strong> [field_plan_er][field_address_locality][field_address_administrative_area]';
  $handler->display->display_options['fields']['field_plan_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_plan_er_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Plan Size */
  $handler->display->display_options['fields']['field_plan_size']['id'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['table'] = 'field_data_field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['field'] = 'field_plan_size';
  $handler->display->display_options['fields']['field_plan_size']['relationship'] = 'field_plan_size_history_value';
  $handler->display->display_options['fields']['field_plan_size']['label'] = '';
  $handler->display->display_options['fields']['field_plan_size']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_plan_size']['alter']['text'] = '<strong>Plan Size:</strong> $[field_plan_size] million';
  $handler->display->display_options['fields']['field_plan_size']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plan_size']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_2']['label'] = '';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = ' / [name_2]';
  $handler->display->display_options['fields']['name_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_3']['label'] = '';
  $handler->display->display_options['fields']['name_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_3']['alter']['text'] = ' / [name_3]';
  $handler->display->display_options['fields']['name_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_3']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Attribute */
  $handler->display->display_options['fields']['field_attribute_tr']['id'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['table'] = 'field_data_field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['field'] = 'field_attribute_tr';
  $handler->display->display_options['fields']['field_attribute_tr']['label'] = '';
  $handler->display->display_options['fields']['field_attribute_tr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_attribute_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_attribute_tr']['alter']['text'] = ' / [field_attribute_tr]';
  $handler->display->display_options['fields']['field_attribute_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Geographic */
  $handler->display->display_options['fields']['field_geographic_tr']['id'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['table'] = 'field_data_field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['field'] = 'field_geographic_tr';
  $handler->display->display_options['fields']['field_geographic_tr']['label'] = '';
  $handler->display->display_options['fields']['field_geographic_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_geographic_tr']['alter']['text'] = '<strong>Assignment:</strong> [field_geographic_tr][name_2][name_3][field_attribute_tr]';
  $handler->display->display_options['fields']['field_geographic_tr']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Firm */
  $handler->display->display_options['fields']['field_consultant_firm_er']['id'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['field'] = 'field_consultant_firm_er';
  $handler->display->display_options['fields']['field_consultant_firm_er']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_firm_er']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_firm_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['alter']['text'] = '<strong>Consultant Firm:</strong> [field_consultant_firm_er]';
  $handler->display->display_options['fields']['field_consultant_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_title']['alter']['text'] = ', [field_job_title]';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = '';
  $handler->display->display_options['fields']['field_address_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_data']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data']['alter']['text'] = ', [field_address_data]';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
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
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = ', [field_email]';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Field: Consultant Contact */
  $handler->display->display_options['fields']['field_consultant_contact_er']['id'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['table'] = 'field_data_field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['field'] = 'field_consultant_contact_er';
  $handler->display->display_options['fields']['field_consultant_contact_er']['relationship'] = 'field_consultants_hired_value';
  $handler->display->display_options['fields']['field_consultant_contact_er']['label'] = '';
  $handler->display->display_options['fields']['field_consultant_contact_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_consultant_contact_er']['alter']['text'] = '<strong>Consultant Contact:</strong> [field_consultant_contact_er][field_job_title][field_address_data][field_address_data_1][field_email]';
  $handler->display->display_options['fields']['field_consultant_contact_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_consultant_contact_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_managers_hired_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['label'] = '';
  $handler->display->display_options['fields']['field_manager_firm_er']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_manager_firm_er']['alter']['text'] = '<strong>Manager Firms Hired:</strong> [field_manager_firm_er]';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Field collection item: Comment */
  $handler->display->display_options['fields']['field_comment']['id'] = 'field_comment';
  $handler->display->display_options['fields']['field_comment']['table'] = 'field_data_field_comment';
  $handler->display->display_options['fields']['field_comment']['field'] = 'field_comment';
  $handler->display->display_options['fields']['field_comment']['relationship'] = 'field_mandate_comments_fc_value';
  $handler->display->display_options['fields']['field_comment']['label'] = '';
  $handler->display->display_options['fields']['field_comment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_comment']['alter']['text'] = '<strong>Comments:</strong> [field_comment]';
  $handler->display->display_options['fields']['field_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comment']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'Actions: [view_node]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<i class="fa fa-eye" title=\'View\'></i>';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'mandate' => 'mandate',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-5:+0';
  $handler->display->display_options['block_description'] = 'FIN Daily Mandates';

  /* Display: Consultants */
  $handler = $view->new_display('page', 'Consultants', 'consultants_list');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nothing' => 'nothing',
    'title_field' => 'title_field',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nothing' => array(
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
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
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
  /* Header: Global: Save */
  $handler->display->display_options['header']['views_save']['id'] = 'views_save';
  $handler->display->display_options['header']['views_save']['table'] = 'views';
  $handler->display->display_options['header']['views_save']['field'] = 'views_save';
  $handler->display->display_options['header']['views_save']['format'] = 'advanced_input';
  $handler->display->display_options['header']['views_save']['button_text'] = 'Save Search';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ctools Code';
  $handler->display->display_options['header']['area']['content'] = '<?php
  ctools_include(\'modal\');
  ctools_modal_add_js();
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Tasks';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="magical-modal-link"><a class="ctools-use-modal ctools-modal-fin-modals-contact-style" href=\'/modal-front/[nid]/tasks/nojs\' title=\'Tasks\'><i class="fa fa-list-alt"></i></a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = 'Consultant';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Consultant Firm (field_consultant_firm_er) */
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultant_firm_er_target_id';
  /* Sort criterion: Content: Office Type (field_office_type_tr) */
  $handler->display->display_options['sorts']['field_office_type_tr_tid']['id'] = 'field_office_type_tr_tid';
  $handler->display->display_options['sorts']['field_office_type_tr_tid']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['sorts']['field_office_type_tr_tid']['field'] = 'field_office_type_tr_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Consultant';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Office Type (field_office_type_tr) */
  $handler->display->display_options['filters']['field_office_type_tr_tid']['id'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['field'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['value'] = array(
    337 => '337',
  );
  $handler->display->display_options['filters']['field_office_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_office_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['vocabulary'] = 'office_types';
  $handler->display->display_options['path'] = 'consultants';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Consultants';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Consultants Alpha Pager */
  $handler = $view->new_display('attachment', 'Consultants Alpha Pager', 'attachment_5');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'consultants_list';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Office Type (field_office_type_tr) */
  $handler->display->display_options['filters']['field_office_type_tr_tid']['id'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['field'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['value'] = array(
    337 => '337',
  );
  $handler->display->display_options['filters']['field_office_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['vocabulary'] = 'office_types';
  $handler->display->display_options['displays'] = array(
    'consultants_list' => 'consultants_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
    'plans_list_old' => 0,
    'plan_contacts_list_old' => 0,
    'mandates_list_old' => 0,
    'rfps_list_old' => 0,
    'manager_firms_list_old' => 0,
    'news_list_old' => 0,
    'consultant_firms_list_old' => 0,
    'consultant_contacts_list_old' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Consultants - Export */
  $handler = $view->new_display('views_data_export', 'Consultants - Export', 'consultants_export');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'consultants_list';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'consultants_export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['relationships']['field_consultant_firm_er_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = 'Consultant';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Consultant Firm (field_consultant_firm_er) */
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['id'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['table'] = 'field_data_field_consultant_firm_er';
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['field'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['sorts']['field_consultant_firm_er_target_id']['relationship'] = 'field_consultant_firm_er_target_id';
  /* Sort criterion: Content: Office Type (field_office_type_tr) */
  $handler->display->display_options['sorts']['field_office_type_tr_tid']['id'] = 'field_office_type_tr_tid';
  $handler->display->display_options['sorts']['field_office_type_tr_tid']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['sorts']['field_office_type_tr_tid']['field'] = 'field_office_type_tr_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Consultant';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Office Type (field_office_type_tr) */
  $handler->display->display_options['filters']['field_office_type_tr_tid']['id'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['table'] = 'field_data_field_office_type_tr';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['field'] = 'field_office_type_tr_tid';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['value'] = array(
    337 => '337',
  );
  $handler->display->display_options['filters']['field_office_type_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_office_type_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_office_type_tr_tid']['vocabulary'] = 'office_types';
  $handler->display->display_options['path'] = 'export/consultants_export.csv';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Consultants';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'consultants_list' => 'consultants_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: Consultant Contacts */
  $handler = $view->new_display('page', 'Consultant Contacts', 'consultant_contacts');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_field' => 'title_field',
    'title_1' => 'title_1',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_field' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
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
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
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
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
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
  $handler->display->display_options['fields']['title_field']['label'] = 'Contact';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Consultant Firm';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
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
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Name (title_field) */
  $handler->display->display_options['arguments']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['arguments']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_field_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title_field_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title_field_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['limit'] = '1';
  $handler->display->display_options['arguments']['title_field_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['title_field_value']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Contact';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Consultant Firm';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'consultants/consultant-contacts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Consultant Contacts';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Consultant Contacts Alpha Pager */
  $handler = $view->new_display('attachment', 'Consultant Contacts Alpha Pager', 'attachment_7');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'consultant_contacts';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Name (title_field) */
  $handler->display->display_options['arguments']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['arguments']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title_field_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_field_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title_field_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title_field_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['limit'] = '1';
  $handler->display->display_options['arguments']['title_field_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['title_field_value']['path_case'] = 'lower';
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
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'consultant_contact' => 'consultant_contact',
  );
  $handler->display->display_options['displays'] = array(
    'consultant_contacts' => 'consultant_contacts',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'managers_list' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
    'plans_list_old' => 0,
    'plan_contacts_list_old' => 0,
    'mandates_list_old' => 0,
    'rfps_list_old' => 0,
    'manager_firms_list_old' => 0,
    'news_list_old' => 0,
    'consultant_firms_list_old' => 0,
    'consultant_contacts_list_old' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Consultant Contacts - Export */
  $handler = $view->new_display('views_data_export', 'Consultant Contacts - Export', 'consultant_contacts_export');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'consultant_contacts';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'consultant_contacts.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
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
  $handler->display->display_options['fields']['title_field']['label'] = 'Contact';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Consultant Firm';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Name (title_field) */
  $handler->display->display_options['arguments']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['arguments']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_field_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title_field_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title_field_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['limit'] = '1';
  $handler->display->display_options['arguments']['title_field_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['title_field_value']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Contact';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_consultant_firm_er_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Consultant Firm';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'export/consultant-contacts.csv';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Consultant Contacts';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'consultant_contacts' => 'consultant_contacts',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'managers_list' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: Managers */
  $handler = $view->new_display('page', 'Managers', 'managers_list');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nothing' => 'nothing',
    'title_field' => 'title_field',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
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
    'nothing' => array(
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
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
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
  /* Header: Global: Save */
  $handler->display->display_options['header']['views_save']['id'] = 'views_save';
  $handler->display->display_options['header']['views_save']['table'] = 'views';
  $handler->display->display_options['header']['views_save']['field'] = 'views_save';
  $handler->display->display_options['header']['views_save']['format'] = 'advanced_input';
  $handler->display->display_options['header']['views_save']['button_text'] = 'Save Search';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ctools Code';
  $handler->display->display_options['header']['area']['content'] = '<?php
  ctools_include(\'modal\');
  ctools_modal_add_js();
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
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
    'consultant_contact_types' => 0,
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Tasks';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="magical-modal-link"><a class="ctools-use-modal ctools-modal-fin-modals-contact-style" href=\'/modal-front/[nid]/tasks/nojs\' title=\'Tasks\'><i class="fa fa-list-alt"></i></a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Manager';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
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
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Manager';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'managers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Managers';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Managers Alpha Pager */
  $handler = $view->new_display('attachment', 'Managers Alpha Pager', 'attachment_4');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'managers_list';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  );
  $handler->display->display_options['displays'] = array(
    'managers_list' => 'managers_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
    'plans_list_old' => 0,
    'plan_contacts_list_old' => 0,
    'mandates_list_old' => 0,
    'rfps_list_old' => 0,
    'manager_firms_list_old' => 0,
    'news_list_old' => 0,
    'consultant_firms_list_old' => 0,
    'consultant_contacts_list_old' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Managers - Export */
  $handler = $view->new_display('views_data_export', 'Managers - Export', 'managers_export');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'managers_list';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'managers_export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
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
    'consultant_contact_types' => 0,
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
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Manager';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Manager';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'export/managers_export.csv';
  $handler->display->display_options['menu']['title'] = 'Managers';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'managers_list' => 'managers_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: Mgr of Mgrs */
  $handler = $view->new_display('page', 'Mgr of Mgrs', 'manager_of_managers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manager of Managers';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nothing' => 'nothing',
    'title_field' => 'title_field',
    'field_address_locality' => 'field_address_locality',
    'field_address_administrative_area' => 'field_address_administrative_area',
    'field_address_data' => 'field_address_data',
    'field_address_data_1' => 'field_address_data',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nothing' => array(
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
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Save */
  $handler->display->display_options['header']['views_save']['id'] = 'views_save';
  $handler->display->display_options['header']['views_save']['table'] = 'views';
  $handler->display->display_options['header']['views_save']['field'] = 'views_save';
  $handler->display->display_options['header']['views_save']['format'] = 'advanced_input';
  $handler->display->display_options['header']['views_save']['button_text'] = 'Save Search';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ctools Code';
  $handler->display->display_options['header']['area']['content'] = '<?php
  ctools_include(\'modal\');
  ctools_modal_add_js();
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
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
    'consultant_contact_types' => 0,
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Tasks';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="magical-modal-link"><a class="ctools-use-modal ctools-modal-fin-modals-contact-style" href=\'/modal-front/[nid]/tasks/nojs\' title=\'Tasks\'><i class="fa fa-list-alt"></i></a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Manager';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
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
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Manager of Managers? (field_manager_of_managers) */
  $handler->display->display_options['filters']['field_manager_of_managers_value']['id'] = 'field_manager_of_managers_value';
  $handler->display->display_options['filters']['field_manager_of_managers_value']['table'] = 'field_data_field_manager_of_managers';
  $handler->display->display_options['filters']['field_manager_of_managers_value']['field'] = 'field_manager_of_managers_value';
  $handler->display->display_options['filters']['field_manager_of_managers_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_manager_of_managers_value']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Manager';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'managers/manager-of-managers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MoMs';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Mgr of Mgrs - Export */
  $handler = $view->new_display('views_data_export', 'Mgr of Mgrs - Export', 'mom_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manager of Managers';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'manager_of_managers';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_locality' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_administrative_area' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'Mgr_of_mgrs_export.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
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
    'consultant_contact_types' => 0,
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
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Manager';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
  $handler->display->display_options['fields']['field_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_administrative_area']['display_name'] = 0;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data']['id'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_address_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_data']['element_class'] = 'column-phone';
  $handler->display->display_options['fields']['field_address_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data']['selected_phone_type'] = TRUE;
  /* Field: Field: Address with phone number */
  $handler->display->display_options['fields']['field_address_data_1']['id'] = 'field_address_data_1';
  $handler->display->display_options['fields']['field_address_data_1']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_1']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_1']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_address_data_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_1']['selected_phone_type'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Manager of Managers? (field_manager_of_managers) */
  $handler->display->display_options['filters']['field_manager_of_managers_value']['id'] = 'field_manager_of_managers_value';
  $handler->display->display_options['filters']['field_manager_of_managers_value']['table'] = 'field_data_field_manager_of_managers';
  $handler->display->display_options['filters']['field_manager_of_managers_value']['field'] = 'field_manager_of_managers_value';
  $handler->display->display_options['filters']['field_manager_of_managers_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_manager_of_managers_value']['group'] = 1;
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Manager';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Field: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_address_administrative_area']['id'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_administrative_area']['field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator_id'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['operator'] = 'field_address_administrative_area_op';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['identifier'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_field'] = 'field_address_administrative_area';
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_administrative_area']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'export/mgr_of_mgrs_export.csv';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'MoMs';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'manager_of_managers' => 'manager_of_managers',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_contacts_list' => 0,
    'news_list' => 0,
  );

  /* Display: Manager Contacts */
  $handler = $view->new_display('block', 'Manager Contacts', 'manager_contacts_list');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title_field_value_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_job_title_value_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_email_email_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_manager_firm_er_target_id_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title_field' => 'title_field',
    'field_manager_firm_er' => 'field_manager_firm_er',
    'field_job_title' => 'field_job_title',
    'field_address_data' => 'field_address_data',
    'field_address_data_2' => 'field_address_data',
    'field_email' => 'field_email',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'title_field';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
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
    'field_manager_firm_er' => array(
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
    'field_address_data' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address_data_2' => array(
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Job History (field_job_history) */
  $handler->display->display_options['relationships']['field_job_history_value']['id'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['table'] = 'field_data_field_job_history';
  $handler->display->display_options['relationships']['field_job_history_value']['field'] = 'field_job_history_value';
  $handler->display->display_options['relationships']['field_job_history_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = 'Contact';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Field: Manager Firm */
  $handler->display->display_options['fields']['field_manager_firm_er']['id'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['field'] = 'field_manager_firm_er';
  $handler->display->display_options['fields']['field_manager_firm_er']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_manager_firm_er']['label'] = 'Manager';
  $handler->display->display_options['fields']['field_manager_firm_er']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_manager_firm_er']['settings'] = array(
    'link' => 1,
  );
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
  $handler->display->display_options['fields']['field_address_data_2']['id'] = 'field_address_data_2';
  $handler->display->display_options['fields']['field_address_data_2']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_data_2']['field'] = 'field_address_data';
  $handler->display->display_options['fields']['field_address_data_2']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['fields']['field_address_data_2']['label'] = 'Extension';
  $handler->display->display_options['fields']['field_address_data_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_data_2']['alter']['text'] = ' x[field_address_data_2]';
  $handler->display->display_options['fields']['field_address_data_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_data_2']['selected_phone_type'] = TRUE;
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
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = '<i class="fa fa-pencil" title=\'Edit\'></i>';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
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
    'manager_contact' => 'manager_contact',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  /* Filter criterion: Name (title_field) (selective) */
  $handler->display->display_options['filters']['title_field_value_selective']['id'] = 'title_field_value_selective';
  $handler->display->display_options['filters']['title_field_value_selective']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value_selective']['field'] = 'title_field_value_selective';
  $handler->display->display_options['filters']['title_field_value_selective']['ui_name'] = 'Name (title_field) (selective)';
  $handler->display->display_options['filters']['title_field_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['title_field_value_selective']['expose']['label'] = 'Contact';
  $handler->display->display_options['filters']['title_field_value_selective']['expose']['identifier'] = 'title_field_value_selective';
  $handler->display->display_options['filters']['title_field_value_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title_field_value_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['title_field_value_selective']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value_selective']['selective_display_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Job Title (field_job_title) (selective) */
  $handler->display->display_options['filters']['field_job_title_value_selective']['id'] = 'field_job_title_value_selective';
  $handler->display->display_options['filters']['field_job_title_value_selective']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['filters']['field_job_title_value_selective']['field'] = 'field_job_title_value_selective';
  $handler->display->display_options['filters']['field_job_title_value_selective']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_job_title_value_selective']['ui_name'] = 'Job Title (field_job_title) (selective)';
  $handler->display->display_options['filters']['field_job_title_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_job_title_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_job_title_value_selective']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_job_title_value_selective']['expose']['identifier'] = 'field_job_title_value_selective';
  $handler->display->display_options['filters']['field_job_title_value_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_job_title_value_selective']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_job_title_value_selective']['selective_display_field'] = 'field_job_title';
  $handler->display->display_options['filters']['field_job_title_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Email (field_email) (selective) */
  $handler->display->display_options['filters']['field_email_email_selective']['id'] = 'field_email_email_selective';
  $handler->display->display_options['filters']['field_email_email_selective']['table'] = 'field_data_field_email';
  $handler->display->display_options['filters']['field_email_email_selective']['field'] = 'field_email_email_selective';
  $handler->display->display_options['filters']['field_email_email_selective']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_email_email_selective']['ui_name'] = 'Email (field_email) (selective)';
  $handler->display->display_options['filters']['field_email_email_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_email_email_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_email_email_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_email_email_selective']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_email_email_selective']['expose']['identifier'] = 'field_email_email_selective';
  $handler->display->display_options['filters']['field_email_email_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_email_email_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_email_email_selective']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_email_email_selective']['selective_display_field'] = 'field_email';
  $handler->display->display_options['filters']['field_email_email_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Manager Firm (field_manager_firm_er) (selective) */
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['id'] = 'field_manager_firm_er_target_id_selective';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['table'] = 'field_data_field_manager_firm_er';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['field'] = 'field_manager_firm_er_target_id_selective';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['ui_name'] = 'Manager Firm (field_manager_firm_er) (selective)';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['expose']['label'] = 'Manager';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['expose']['identifier'] = 'field_manager_firm_er_target_id_selective';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['selective_display_field'] = 'field_manager_firm_er';
  $handler->display->display_options['filters']['field_manager_firm_er_target_id_selective']['selective_items_limit'] = '100';

  /* Display: Manager Contacts Alpha Pager */
  $handler = $view->new_display('attachment', 'Manager Contacts Alpha Pager', 'attachment_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Plan';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Name (title_field) */
  $handler->display->display_options['arguments']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['arguments']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['arguments']['title_field_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title_field_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title_field_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title_field_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title_field_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title_field_value']['limit'] = '1';
  $handler->display->display_options['arguments']['title_field_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['title_field_value']['path_case'] = 'lower';
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
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['relationship'] = 'field_job_history_value';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'manager_contact' => 'manager_contact',
  );
  $handler->display->display_options['displays'] = array(
    'manager_contacts_list' => 'manager_contacts_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'news_list' => 0,
    'mandates_fin_daily' => 0,
    'rfps_list' => 0,
    'consultant_firms_list' => 0,
    'consultant_contacts_list' => 0,
    'manager_firms_list' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: News */
  $handler = $view->new_display('page', 'News', 'news_list');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_news_type_human_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_source_site_human_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_date_value' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cover_image' => 'field_cover_image',
    'field_date' => 'field_date',
    'title_field' => 'title_field',
    'field_news_type_human_tr' => 'title_field',
    'field_source_site_human_tr' => 'title_field',
    'body' => 'title_field',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cover_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
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
    'field_news_type_human_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_site_human_tr' => array(
      'sortable' => 0,
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
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
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
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: News Type (field_news_type) */
  $handler->display->display_options['relationships']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['relationships']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['relationships']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['relationships']['field_news_type_value']['delta'] = '-1';
  /* Relationship: Content: Source Site (field_source_site) */
  $handler->display->display_options['relationships']['field_source_site_value']['id'] = 'field_source_site_value';
  $handler->display->display_options['relationships']['field_source_site_value']['table'] = 'field_data_field_source_site';
  $handler->display->display_options['relationships']['field_source_site_value']['field'] = 'field_source_site_value';
  $handler->display->display_options['relationships']['field_source_site_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['relationship'] = 'field_source_site_value';
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
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h5',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Paragraphs item: News Type Human */
  $handler->display->display_options['fields']['field_news_type_human_tr']['id'] = 'field_news_type_human_tr';
  $handler->display->display_options['fields']['field_news_type_human_tr']['table'] = 'field_data_field_news_type_human_tr';
  $handler->display->display_options['fields']['field_news_type_human_tr']['field'] = 'field_news_type_human_tr';
  $handler->display->display_options['fields']['field_news_type_human_tr']['relationship'] = 'field_news_type_value';
  $handler->display->display_options['fields']['field_news_type_human_tr']['label'] = 'News Type';
  $handler->display->display_options['fields']['field_news_type_human_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_type_human_tr']['alter']['text'] = '<strong>Type:</strong> [field_news_type_human_tr]';
  $handler->display->display_options['fields']['field_news_type_human_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_type_human_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Paragraphs item: Source Site Human */
  $handler->display->display_options['fields']['field_source_site_human_tr']['id'] = 'field_source_site_human_tr';
  $handler->display->display_options['fields']['field_source_site_human_tr']['table'] = 'field_data_field_source_site_human_tr';
  $handler->display->display_options['fields']['field_source_site_human_tr']['field'] = 'field_source_site_human_tr';
  $handler->display->display_options['fields']['field_source_site_human_tr']['relationship'] = 'field_source_site_value';
  $handler->display->display_options['fields']['field_source_site_human_tr']['label'] = 'Source Site';
  $handler->display->display_options['fields']['field_source_site_human_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source_site_human_tr']['alter']['text'] = ', <strong>Source:</strong> [field_source_site_human_tr]';
  $handler->display->display_options['fields']['field_source_site_human_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_site_human_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<br />[body]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
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
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '<i class="fa fa-trash" title=\'Delete\'></i>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Paragraphs item: News Type Human (field_news_type_human_tr) */
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['id'] = 'field_news_type_human_tr_tid';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['table'] = 'field_data_field_news_type_human_tr';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['field'] = 'field_news_type_human_tr_tid';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['relationship'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['operator_id'] = 'field_news_type_human_tr_tid_op';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['label'] = 'News Type';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['operator'] = 'field_news_type_human_tr_tid_op';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['identifier'] = 'field_news_type_human_tr_tid';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['vocabulary'] = 'news_types';
  /* Filter criterion: Paragraphs item: Source Site Human (field_source_site_human_tr) */
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['id'] = 'field_source_site_human_tr_tid';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['table'] = 'field_data_field_source_site_human_tr';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['field'] = 'field_source_site_human_tr_tid';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['relationship'] = 'field_source_site_value';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['operator_id'] = 'field_source_site_human_tr_tid_op';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['label'] = 'Source Site';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['operator'] = 'field_source_site_human_tr_tid_op';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['identifier'] = 'field_source_site_human_tr_tid';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['vocabulary'] = 'source_sites';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-5:+1';
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: News Alpha Pager */
  $handler = $view->new_display('attachment', 'News Alpha Pager', 'attachment_6');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'news_list';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  $handler->display->display_options['displays'] = array(
    'news_list' => 'news_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_contacts_list' => 0,
    'plans_list_old' => 0,
    'plan_contacts_list_old' => 0,
    'mandates_list_old' => 0,
    'rfps_list_old' => 0,
    'manager_firms_list_old' => 0,
    'news_list_old' => 0,
    'consultant_firms_list_old' => 0,
    'consultant_contacts_list_old' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: News - Export */
  $handler = $view->new_display('views_data_export', 'News - Export', 'news_export');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'news_list';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'pager' => array(
      'bef_format' => 'default',
      'is_secondary' => 0,
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_news_type_human_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_source_site_human_tr_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_date_value' => array(
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
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'advanced_input';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cover_image' => 'field_cover_image',
    'field_date' => 'field_date',
    'title_field' => 'title_field',
    'field_news_type_human_tr' => 'title_field',
    'field_source_site_human_tr' => 'title_field',
    'body' => 'title_field',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cover_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
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
    'field_news_type_human_tr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_site_human_tr' => array(
      'sortable' => 0,
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
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search filters have returned no results. Please change your search and try again.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: News Type (field_news_type) */
  $handler->display->display_options['relationships']['field_news_type_value']['id'] = 'field_news_type_value';
  $handler->display->display_options['relationships']['field_news_type_value']['table'] = 'field_data_field_news_type';
  $handler->display->display_options['relationships']['field_news_type_value']['field'] = 'field_news_type_value';
  $handler->display->display_options['relationships']['field_news_type_value']['delta'] = '-1';
  /* Relationship: Content: Source Site (field_source_site) */
  $handler->display->display_options['relationships']['field_source_site_value']['id'] = 'field_source_site_value';
  $handler->display->display_options['relationships']['field_source_site_value']['table'] = 'field_data_field_source_site';
  $handler->display->display_options['relationships']['field_source_site_value']['field'] = 'field_source_site_value';
  $handler->display->display_options['relationships']['field_source_site_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Cover Image */
  $handler->display->display_options['fields']['field_cover_image']['id'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['table'] = 'field_data_field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['field'] = 'field_cover_image';
  $handler->display->display_options['fields']['field_cover_image']['relationship'] = 'field_source_site_value';
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
  /* Field: Content: Name */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h5',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Paragraphs item: News Type Human */
  $handler->display->display_options['fields']['field_news_type_human_tr']['id'] = 'field_news_type_human_tr';
  $handler->display->display_options['fields']['field_news_type_human_tr']['table'] = 'field_data_field_news_type_human_tr';
  $handler->display->display_options['fields']['field_news_type_human_tr']['field'] = 'field_news_type_human_tr';
  $handler->display->display_options['fields']['field_news_type_human_tr']['relationship'] = 'field_news_type_value';
  $handler->display->display_options['fields']['field_news_type_human_tr']['label'] = 'News Type';
  $handler->display->display_options['fields']['field_news_type_human_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_type_human_tr']['alter']['text'] = '<strong>Type:</strong> [field_news_type_human_tr]';
  $handler->display->display_options['fields']['field_news_type_human_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_type_human_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Paragraphs item: Source Site Human */
  $handler->display->display_options['fields']['field_source_site_human_tr']['id'] = 'field_source_site_human_tr';
  $handler->display->display_options['fields']['field_source_site_human_tr']['table'] = 'field_data_field_source_site_human_tr';
  $handler->display->display_options['fields']['field_source_site_human_tr']['field'] = 'field_source_site_human_tr';
  $handler->display->display_options['fields']['field_source_site_human_tr']['relationship'] = 'field_source_site_value';
  $handler->display->display_options['fields']['field_source_site_human_tr']['label'] = 'Source Site';
  $handler->display->display_options['fields']['field_source_site_human_tr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source_site_human_tr']['alter']['text'] = ', <strong>Source:</strong> [field_source_site_human_tr]';
  $handler->display->display_options['fields']['field_source_site_human_tr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source_site_human_tr']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<br />[body]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
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
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_field'] = 'title_field';
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_field_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Paragraphs item: News Type Human (field_news_type_human_tr) */
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['id'] = 'field_news_type_human_tr_tid';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['table'] = 'field_data_field_news_type_human_tr';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['field'] = 'field_news_type_human_tr_tid';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['relationship'] = 'field_news_type_value';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['operator_id'] = 'field_news_type_human_tr_tid_op';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['label'] = 'News Type';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['operator'] = 'field_news_type_human_tr_tid_op';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['identifier'] = 'field_news_type_human_tr_tid';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_type_human_tr_tid']['vocabulary'] = 'news_types';
  /* Filter criterion: Paragraphs item: Source Site Human (field_source_site_human_tr) */
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['id'] = 'field_source_site_human_tr_tid';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['table'] = 'field_data_field_source_site_human_tr';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['field'] = 'field_source_site_human_tr_tid';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['relationship'] = 'field_source_site_value';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['operator_id'] = 'field_source_site_human_tr_tid_op';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['label'] = 'Source Site';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['operator'] = 'field_source_site_human_tr_tid_op';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['identifier'] = 'field_source_site_human_tr_tid';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_site_human_tr_tid']['vocabulary'] = 'source_sites';
  /* Filter criterion: Field: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-5:+1';
  $handler->display->display_options['path'] = 'export/news.csv';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['displays'] = array(
    'news_list' => 'news_list',
    'default' => 0,
    'plans_list' => 0,
    'plan_contacts_list' => 0,
    'mandates_list' => 0,
    'rfps_list' => 0,
    'mandates_fin_daily' => 0,
    'consultants_list' => 0,
    'consultant_contacts' => 0,
    'managers_list' => 0,
    'manager_of_managers' => 0,
    'manager_contacts_list' => 0,
  );
  $export['content_lists'] = $view;

  return $export;
}
