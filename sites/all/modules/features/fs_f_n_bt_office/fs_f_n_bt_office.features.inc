<?php
/**
 * @file
 * fs_f_n_bt_office.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_n_bt_office_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
