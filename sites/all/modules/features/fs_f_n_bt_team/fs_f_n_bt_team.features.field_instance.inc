<?php
/**
 * @file
 * fs_f_n_bt_team.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fs_f_n_bt_team_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-team-field_consultant_contact_er'
  $field_instances['node-team-field_consultant_contact_er'] = array(
    'bundle' => 'team',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_consultant_contact_er',
    'label' => 'Consultant Contact',
    'options_limit' => 1,
    'options_limit_empty_behaviour' => 1,
    'options_limit_fields' => array(
      'body' => 0,
      'field_address' => 0,
      'field_consultant_firm_er' => 'field_consultant_firm_er',
    ),
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'fields' => array(
            'body' => 0,
            'field_address' => 'field_address',
            'field_consultant_firm_er' => 0,
          ),
          'overwrite' => 1,
          'status' => 1,
        ),
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Consultant Contact');

  return $field_instances;
}
