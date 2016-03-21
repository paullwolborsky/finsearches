<?php
/**
 * @file
 * fs_f_fn_themekey.features.inc
 */

/**
 * Implements hook_themekey_features_rule_chain().
 */
function fs_f_fn_themekey_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user/%/shortcuts',
      'theme' => 'corposs',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'fs_f_fn_themekey',
    ),
    'string' => '"drupal:path = user/%/shortcuts >>> corposs"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'user/%/subscriptions',
      'theme' => 'corposs',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'fs_f_fn_themekey',
    ),
    'string' => '"drupal:path = user/%/subscriptions >>> corposs"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'themekey_compat:module_system_triggers_theme',
      'operator' => '=',
      'value' => 'static',
      'theme' => 'default',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'fs_f_fn_themekey',
    ),
    'string' => '"themekey_compat:module_system_triggers_theme = static >>> triggered"',
    'childs' => array(),
  ),
);

return $rules;
}
