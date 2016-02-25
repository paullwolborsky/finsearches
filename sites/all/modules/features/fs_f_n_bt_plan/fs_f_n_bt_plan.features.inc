<?php
/**
 * @file
 * fs_f_n_bt_plan.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_n_bt_plan_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
