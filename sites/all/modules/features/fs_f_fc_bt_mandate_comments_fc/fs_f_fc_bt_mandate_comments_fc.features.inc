<?php
/**
 * @file
 * fs_f_fc_bt_mandate_comments_fc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_fc_bt_mandate_comments_fc_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}
