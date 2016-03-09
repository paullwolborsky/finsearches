<?php
/**
 * @file
 * fs_f_fn_mail.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_fn_mail_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
