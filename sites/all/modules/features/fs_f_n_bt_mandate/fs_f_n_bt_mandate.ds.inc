<?php
/**
 * @file
 * fs_f_n_bt_mandate.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function fs_f_n_bt_mandate_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mandate|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mandate';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'group_mandate_info',
        1 => 'group_rfp',
        14 => 'field_rfp_date',
        15 => 'field_rfp_link',
        16 => 'field_date',
        17 => 'field_mandate_status_tr',
        18 => 'field_currency_tr',
        19 => 'field_geographic_tr',
        20 => 'reference_views_eva_major_style',
        21 => 'reference_views_eva_minor_style',
        22 => 'field_attribute_tr',
      ),
      'above_right' => array(
        2 => 'mandate_plan_info_bf',
        23 => 'field_traits_tr',
        24 => 'group_traits',
      ),
      'below_left' => array(
        3 => 'mandate_consultants_hired_bf',
        4 => 'mandate_consultant_terminated_bf',
        5 => 'mandate_consultant_finalists_bf',
        6 => 'mandate_consultants_onwatch_bf',
      ),
      'below_right' => array(
        7 => 'mandate_managers_hired_bf',
        8 => 'mandate_managers_terminated_bf',
        9 => 'mandate_manager_finalists_bf',
        10 => 'mandate_managers_onwatch_bf',
      ),
      'footer' => array(
        11 => 'mandate_plan_info_entity_view_1',
        12 => 'mandate_comments_bf',
        13 => 'mandate_notes_bf',
      ),
    ),
    'fields' => array(
      'group_mandate_info' => 'above_left',
      'group_rfp' => 'above_left',
      'mandate_plan_info_bf' => 'above_right',
      'mandate_consultants_hired_bf' => 'below_left',
      'mandate_consultant_terminated_bf' => 'below_left',
      'mandate_consultant_finalists_bf' => 'below_left',
      'mandate_consultants_onwatch_bf' => 'below_left',
      'mandate_managers_hired_bf' => 'below_right',
      'mandate_managers_terminated_bf' => 'below_right',
      'mandate_manager_finalists_bf' => 'below_right',
      'mandate_managers_onwatch_bf' => 'below_right',
      'mandate_plan_info_entity_view_1' => 'footer',
      'mandate_comments_bf' => 'footer',
      'mandate_notes_bf' => 'footer',
      'field_rfp_date' => 'above_left',
      'field_rfp_link' => 'above_left',
      'field_date' => 'above_left',
      'field_mandate_status_tr' => 'above_left',
      'field_currency_tr' => 'above_left',
      'field_geographic_tr' => 'above_left',
      'reference_views_eva_major_style' => 'above_left',
      'reference_views_eva_minor_style' => 'above_left',
      'field_attribute_tr' => 'above_left',
      'field_traits_tr' => 'above_right',
      'group_traits' => 'above_right',
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
  $export['node|mandate|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mandate|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mandate';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'three_column_bricks';
  $ds_layout->settings = array(
    'regions' => array(
      'above_left' => array(
        0 => 'group_plan_info',
        1 => 'group_mandate_info',
        2 => 'group_search_consultant',
        3 => 'group_rfp',
        15 => 'field_rfp_date',
        16 => 'field_rfp_link',
        23 => 'field_plan_er',
        24 => 'field_plan_size',
        25 => 'field_date',
        26 => 'field_mandate_status_tr',
        27 => 'field_account_size',
        28 => 'field_currency_tr',
        29 => 'field_geographic_tr',
        30 => 'field_major_minor_style_tr',
        31 => 'field_attribute_tr',
        36 => 'field_consultant_firm_er',
        37 => 'field_consultant_contact_er',
        40 => 'field_traits_tr',
        41 => 'group_traits',
      ),
      'above_right' => array(
        4 => 'field_managers_finalists_er',
        6 => 'field_managers_onwatch_er',
        7 => 'field_managers_hired',
        9 => 'field_managed_amount',
        12 => 'field_managers_terminated',
        43 => 'group_manager_info',
      ),
      'middle' => array(
        5 => 'group_create_related_links',
      ),
      'footer' => array(
        8 => 'group_mandate_comments',
        10 => 'group_mandate_notes',
        14 => 'field_mandate_number',
        17 => 'field_content_type_shortcode_tr',
        38 => 'field_mandate_notes_ev',
        39 => 'field_mandate_comments_fc',
      ),
      'hidden' => array(
        18 => 'field_serialized_comment',
        19 => 'title_field',
        20 => 'field_old_mandate_id',
        21 => 'body',
        22 => 'path',
        42 => '_add_existing_field',
      ),
      'above_middle' => array(
        32 => 'field_consultants_finalists_er',
        33 => 'field_consultants_onwatch_er',
        34 => 'field_consultants_hired',
        35 => 'field_consultants_terminated',
        44 => 'group_consultant_info',
      ),
    ),
    'fields' => array(
      'group_plan_info' => 'above_left',
      'group_mandate_info' => 'above_left',
      'group_search_consultant' => 'above_left',
      'group_rfp' => 'above_left',
      'field_managers_finalists_er' => 'above_right',
      'group_create_related_links' => 'middle',
      'field_managers_onwatch_er' => 'above_right',
      'field_managers_hired' => 'above_right',
      'group_mandate_comments' => 'footer',
      'field_managed_amount' => 'above_right',
      'group_mandate_notes' => 'footer',
      'field_managers_terminated' => 'above_right',
      'field_mandate_number' => 'footer',
      'field_rfp_date' => 'above_left',
      'field_rfp_link' => 'above_left',
      'field_content_type_shortcode_tr' => 'footer',
      'field_serialized_comment' => 'hidden',
      'title_field' => 'hidden',
      'field_old_mandate_id' => 'hidden',
      'body' => 'hidden',
      'path' => 'hidden',
      'field_plan_er' => 'above_left',
      'field_plan_size' => 'above_left',
      'field_date' => 'above_left',
      'field_mandate_status_tr' => 'above_left',
      'field_account_size' => 'above_left',
      'field_currency_tr' => 'above_left',
      'field_geographic_tr' => 'above_left',
      'field_major_minor_style_tr' => 'above_left',
      'field_attribute_tr' => 'above_left',
      'field_consultants_finalists_er' => 'above_middle',
      'field_consultants_onwatch_er' => 'above_middle',
      'field_consultants_hired' => 'above_middle',
      'field_consultants_terminated' => 'above_middle',
      'field_consultant_firm_er' => 'above_left',
      'field_consultant_contact_er' => 'above_left',
      'field_mandate_notes_ev' => 'footer',
      'field_mandate_comments_fc' => 'footer',
      'field_traits_tr' => 'above_left',
      'group_traits' => 'above_left',
      '_add_existing_field' => 'hidden',
      'group_manager_info' => 'above_right',
      'group_consultant_info' => 'above_middle',
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
  $export['node|mandate|form'] = $ds_layout;

  return $export;
}
