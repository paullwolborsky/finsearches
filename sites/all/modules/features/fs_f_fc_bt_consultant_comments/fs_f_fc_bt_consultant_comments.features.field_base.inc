<?php
/**
 * @file
 * fs_f_fc_bt_consultant_comments.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fs_f_fc_bt_consultant_comments_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_consultant_comments_fc'
  $field_bases['field_consultant_comments_fc'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_consultant_comments_fc',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
