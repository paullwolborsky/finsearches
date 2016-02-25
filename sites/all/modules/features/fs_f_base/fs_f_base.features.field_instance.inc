<?php
/**
 * @file
 * fs_f_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fs_f_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_mandate_comments_fc-field_author_ur'
  $field_instances['field_collection_item-field_mandate_comments_fc-field_author_ur'] = array(
    'bundle' => 'field_mandate_comments_fc',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'user_reference',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'user_reference_default',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_author_ur',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'user_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'user_reference/autocomplete',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'user_reference_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Author');

  return $field_instances;
}
