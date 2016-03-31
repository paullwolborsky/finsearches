<?php
/**
 * @file
 * fs_f_n_bt_office.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fs_f_n_bt_office_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-office-body'
  $field_instances['node-office-body'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-office-field_address'
  $field_instances['node-office-field_address'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield_autocomplete',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'US',
        'draggable' => 1,
        'format_handlers' => array(
          'address3' => 'address3',
          'address' => 'address',
          'phone' => 'phone',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
        'geolocation' => TRUE,
        'html5_geocode' => 1,
        'manual_text' => 'Enter address manually',
        'map' => 1,
        'restrict_country' => array(),
        'reveal' => 1,
        'reverse_geocode' => 0,
        'types' => 'geocode',
        'visible_markers' => 1,
      ),
      'type' => 'addressfield_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-office-field_consultant_firm_er'
  $field_instances['node-office-field_consultant_firm_er'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_consultant_firm_er',
    'label' => 'Consultant Firm',
    'options_limit' => 0,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'body' => 0,
      'field_email' => 0,
      'title_field' => 0,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-office-field_content_type_human_tr'
  $field_instances['node-office-field_content_type_human_tr'] = array(
    'bundle' => 'office',
    'default_value' => array(
      0 => array(
        'tid' => 1050,
      ),
    ),
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
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_content_type_human_tr',
    'label' => 'Content Type Human',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-office-field_email'
  $field_instances['node-office-field_email'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'email_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-office-field_office_type_tr'
  $field_instances['node-office-field_office_type_tr'] = array(
    'bundle' => 'office',
    'default_value' => array(
      0 => array(
        'tid' => 338,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_office_type_tr',
    'label' => 'Office Type',
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
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-office-title_field'
  $field_instances['node-office-title_field'] = array(
    'bundle' => 'office',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Office Name',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'advanced_input' => 'advanced_input',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'advanced_input' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => -8,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Body');
  t('Consultant Firm');
  t('Content Type Human');
  t('Email');
  t('Office Name');
  t('Office Type');

  return $field_instances;
}
