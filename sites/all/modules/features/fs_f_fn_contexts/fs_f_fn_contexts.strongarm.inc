<?php
/**
 * @file
 * fs_f_fn_contexts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fs_f_fn_contexts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_consultant_firm';
  $strongarm->value = 0;
  $export['comment_anonymous_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_manager_firm';
  $strongarm->value = 0;
  $export['comment_anonymous_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_news';
  $strongarm->value = 0;
  $export['comment_anonymous_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_office';
  $strongarm->value = 0;
  $export['comment_anonymous_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_organization';
  $strongarm->value = 0;
  $export['comment_anonymous_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_plan';
  $strongarm->value = 0;
  $export['comment_anonymous_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_site_page';
  $strongarm->value = 0;
  $export['comment_anonymous_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_consultant_firm';
  $strongarm->value = '0';
  $export['comment_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_consultant_firm';
  $strongarm->value = 1;
  $export['comment_default_mode_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_manager_firm';
  $strongarm->value = 1;
  $export['comment_default_mode_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_news';
  $strongarm->value = 1;
  $export['comment_default_mode_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_office';
  $strongarm->value = 1;
  $export['comment_default_mode_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_organization';
  $strongarm->value = 1;
  $export['comment_default_mode_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_plan';
  $strongarm->value = 1;
  $export['comment_default_mode_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_site_page';
  $strongarm->value = 1;
  $export['comment_default_mode_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_consultant_firm';
  $strongarm->value = '50';
  $export['comment_default_per_page_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_manager_firm';
  $strongarm->value = '50';
  $export['comment_default_per_page_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_office';
  $strongarm->value = '50';
  $export['comment_default_per_page_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_organization';
  $strongarm->value = '50';
  $export['comment_default_per_page_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_plan';
  $strongarm->value = '50';
  $export['comment_default_per_page_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_site_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_consultant_firm';
  $strongarm->value = 1;
  $export['comment_form_location_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_manager_firm';
  $strongarm->value = 1;
  $export['comment_form_location_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_news';
  $strongarm->value = 1;
  $export['comment_form_location_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_office';
  $strongarm->value = 1;
  $export['comment_form_location_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_organization';
  $strongarm->value = 1;
  $export['comment_form_location_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_plan';
  $strongarm->value = 1;
  $export['comment_form_location_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_site_page';
  $strongarm->value = 1;
  $export['comment_form_location_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_manager_firm';
  $strongarm->value = '2';
  $export['comment_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_news';
  $strongarm->value = '0';
  $export['comment_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_office';
  $strongarm->value = '0';
  $export['comment_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_organization';
  $strongarm->value = '2';
  $export['comment_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_plan';
  $strongarm->value = '2';
  $export['comment_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_consultant_firm';
  $strongarm->value = '1';
  $export['comment_preview_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_manager_firm';
  $strongarm->value = '1';
  $export['comment_preview_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news';
  $strongarm->value = '1';
  $export['comment_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_office';
  $strongarm->value = '1';
  $export['comment_preview_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_organization';
  $strongarm->value = '1';
  $export['comment_preview_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_plan';
  $strongarm->value = '1';
  $export['comment_preview_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_site_page';
  $strongarm->value = '1';
  $export['comment_preview_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_site_page';
  $strongarm->value = '0';
  $export['comment_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_consultant_firm';
  $strongarm->value = 1;
  $export['comment_subject_field_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_manager_firm';
  $strongarm->value = 1;
  $export['comment_subject_field_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_news';
  $strongarm->value = 1;
  $export['comment_subject_field_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_office';
  $strongarm->value = 1;
  $export['comment_subject_field_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_organization';
  $strongarm->value = 1;
  $export['comment_subject_field_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_plan';
  $strongarm->value = 1;
  $export['comment_subject_field_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_site_page';
  $strongarm->value = 1;
  $export['comment_subject_field_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__consultant_firm';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'reference_views_eva_consultant_offices' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_consultant_offices_form' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_main_consultant_office' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_consultant_other_offices' => array(
          'default' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_consultant_firm_contacts' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_consultant_contacts' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_consultant_mandates' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_consultant_plans' => array(
          'default' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_consultant_history' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_consultant_history_form' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_consultant_contacts_form' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'reference_views_entity_view_1' => array(
          'default' => array(
            'weight' => '61',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_plan_contact_edit' => array(
          'default' => array(
            'weight' => '60',
            'visible' => FALSE,
          ),
        ),
        'subscriptions_ui' => array(
          'default' => array(
            'weight' => '63',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__manager_firm';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(
        'comment_views_eva_manager_history' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_major_style' => array(
          'default' => array(
            'weight' => '32',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_minor_style' => array(
          'default' => array(
            'weight' => '33',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_manager_plans' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_manager_mandates' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'reference_views_entity_view_2' => array(
          'default' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'subscriptions_ui' => array(
          'default' => array(
            'weight' => '100',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__office';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__organization';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__plan';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '14',
        ),
      ),
      'display' => array(
        'reference_views_entity_view_1' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_asset_allocation' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_contacts' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'reference_views_entity_view_2' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_lead_plan_contact' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_size' => array(
          'default' => array(
            'weight' => '64',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_asset_allocation_chart' => array(
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_related_news' => array(
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_foia_required' => array(
          'default' => array(
            'weight' => '65',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_consultants' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_mandates_ongoing' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_potential_leads_mandates' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_new_leads_mandates' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_ongoing_mandates' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_completed_mandates' => array(
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_closed_mandates' => array(
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_managers' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_consultant_history' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_add_plan_consultants' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_add_plan_managers' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'comment_views_eva_plan_history' => array(
          'default' => array(
            'weight' => '17',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_related_news' => array(
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_foia_history' => array(
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
        ),
        'reference_views_entity_view_3' => array(
          'default' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_plan_direct_consultants' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_mandate_consultants' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'reference_views_eva_plan_direct_managers' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'reference_views_eva_plan_mandate_managers' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'subscriptions_ui' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'comment_views_eva_plan_notes' => array(
          'default' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
        ),
        'foia_history_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'manager_roster_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__site_page';
  $strongarm->value = array();
  $export['field_bundle_settings_node__site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_consultant_firm';
  $strongarm->value = array();
  $export['menu_options_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_manager_firm';
  $strongarm->value = array();
  $export['menu_options_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news';
  $strongarm->value = array();
  $export['menu_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_office';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_organization';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_plan';
  $strongarm->value = array();
  $export['menu_options_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_site_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_consultant_firm';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_manager_firm';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_office';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_organization';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_plan';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_site_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_consultant_firm';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_manager_firm';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_office';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_organization';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_plan';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_site_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_consultant_firm';
  $strongarm->value = '0';
  $export['node_preview_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_manager_firm';
  $strongarm->value = '1';
  $export['node_preview_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news';
  $strongarm->value = '0';
  $export['node_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_office';
  $strongarm->value = '0';
  $export['node_preview_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_organization';
  $strongarm->value = '0';
  $export['node_preview_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_plan';
  $strongarm->value = '0';
  $export['node_preview_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_site_page';
  $strongarm->value = '0';
  $export['node_preview_site_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_consultant_firm';
  $strongarm->value = 0;
  $export['node_submitted_consultant_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_manager_firm';
  $strongarm->value = 0;
  $export['node_submitted_manager_firm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news';
  $strongarm->value = 0;
  $export['node_submitted_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_office';
  $strongarm->value = 0;
  $export['node_submitted_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_organization';
  $strongarm->value = 1;
  $export['node_submitted_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_plan';
  $strongarm->value = 0;
  $export['node_submitted_plan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_site_page';
  $strongarm->value = 0;
  $export['node_submitted_site_page'] = $strongarm;

  return $export;
}
