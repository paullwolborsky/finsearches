<?php
/**
 * @file
 * fs_f_fc_bt_inv_mgr_rsch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_fc_bt_inv_mgr_rsch_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
