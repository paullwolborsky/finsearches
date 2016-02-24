<?php
/**
 * @file
 * fs_f_fc_bt_foia_history.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_fc_bt_foia_history_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
