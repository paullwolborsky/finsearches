<?php
/**
 * @file
 * fs_f_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fs_f_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
