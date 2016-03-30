<?php
/**
 * @file
 * fs_f_fc_bt_consultants_hired.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fs_f_fc_bt_consultants_hired_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_consultants_hired-field_consultant_contact_er'
  $field_instances['field_collection_item-field_consultants_hired-field_consultant_contact_er'] = array(
    'bundle' => 'field_consultants_hired',
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
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_consultant_contact_er',
    'label' => 'Consultant Contact',
    'options_limit' => 1,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'field_consultant_firm_er' => 'field_consultant_firm_er',
    ),
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'status' => 0,
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
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );
  
    // Exported field_instance:
  // 'field_collection_item-field_consultants_hired-field_consultant_firm_er'
  $field_instances['field_collection_item-field_consultants_hired-field_consultant_firm_er'] = array(
    'bundle' => 'field_consultants_hired',
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
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_consultant_firm_er',
    'label' => 'Consultant Firm',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'autofill' => array(
          'status' => 0,
        ),
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );
  
    // Exported field_instance:
  // 'field_collection_item-field_consultants_hired-field_consultant_type_tr'
  $field_instances['field_collection_item-field_consultants_hired-field_consultant_type_tr'] = array(
    'bundle' => 'field_consultants_hired',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_consultant_type_tr',
    'label' => 'Consultant Type',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );
 
  t('Consultant Firms Hired');
    t('Consultant Firm');
  t('Consultant Firm Finalists');
  t('Consultant Firms On Watch');
  t('Consultant Firms Terminated');
  
  return $field_instances;
}