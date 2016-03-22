<?php
/**
 * @file
 * fs_f_fn_contexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_fn_contexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fs_f_fn_contexts_node_info() {
  $items = array(
    'consultant_firm' => array(
      'name' => t('Consultant Firm'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'manager_firm' => array(
      'name' => t('Manager Firm'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'office' => array(
      'name' => t('Office'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'plan' => array(
      'name' => t('Plan'),
      'base' => 'node_content',
      'description' => t('An investment plan.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'site_page' => array(
      'name' => t('Site Page'),
      'base' => 'node_content',
      'description' => t('Use <em>site pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
