<?php
/**
 * @file
 * fs_f_n_bt_consultant_firm.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fs_f_n_bt_consultant_firm_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'comment_body'
  $field_bases['comment_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'comment',
    ),
    'field_name' => 'comment_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_aua'
  $field_bases['field_aua'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_aua',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'profile2_private' => FALSE,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_branch_offices_ev'
  $field_bases['field_branch_offices_ev'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_branch_offices_ev',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'embeddedviewfield',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'embeddedviewfield',
  );

  // Exported field_base: 'field_consultant_contacts_embed'
  $field_bases['field_consultant_contacts_embed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_consultant_contacts_embed',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'embeddedviewfield',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'embeddedviewfield',
  );

  // Exported field_base: 'field_main_office_ev'
  $field_bases['field_main_office_ev'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_office_ev',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'embeddedviewfield',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'embeddedviewfield',
  );

  return $field_bases;
}
