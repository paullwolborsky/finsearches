<?php
/**
 * @file
 * fs_f_n_bt_subscription_log_entry.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_n_bt_subscription_log_entry_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fs_f_n_bt_subscription_log_entry_node_info() {
  $items = array(
    'subscription_log_entry' => array(
      'name' => t('Subscription Log Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
