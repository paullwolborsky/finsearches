<?php
/**
 * @file
 * fs_f_n_bt_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_n_bt_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
