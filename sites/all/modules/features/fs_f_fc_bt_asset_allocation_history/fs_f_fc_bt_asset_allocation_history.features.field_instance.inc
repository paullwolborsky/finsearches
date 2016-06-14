<?php
/**
 * @file
 * fs_f_fc_bt_asset_allocation_history.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fs_f_fc_bt_asset_allocation_history_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_absolute_return'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_absolute_return'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_absolute_return',
    'label' => 'Absolute Return',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_allocation_date'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_allocation_date'] = array(
    'bundle' => 'field_asset_allocation_history',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'quickedit' => array(
            'editor' => 'form',
          ),
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_allocation_date',
    'label' => 'Allocation Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_alternative_strategies'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_alternative_strategies'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_alternative_strategies',
    'label' => 'Alternative Strategies',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_balanced'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_balanced'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_balanced',
    'label' => 'Balanced',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_canadian_equities'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_canadian_equities'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_canadian_equities',
    'label' => 'Canadian Equities',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_cash_other'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_cash_other'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_cash_other',
    'label' => 'Cash & Other',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 43,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_credit_opportunities'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_credit_opportunities'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_credit_opportunities',
    'label' => 'Credit Opportunities',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_domestic_equities'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_domestic_equities'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_domestic_equities',
    'label' => 'Domestic Equities',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_domestic_fixed_income'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_domestic_fixed_income'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_domestic_fixed_income',
    'label' => 'Domestic Fixed Income',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 45,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_emerging_markets_equity'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_emerging_markets_equity'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 31,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_emerging_markets_equity',
    'label' => 'Emerging Markets Equity',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 47,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_global_equities'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_global_equities'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_global_equities',
    'label' => 'Global Equities',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 48,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_global_fixed_income'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_global_fixed_income'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_global_fixed_income',
    'label' => 'Global Fixed-Income',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 49,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_hedge_fund_strategies'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_hedge_fund_strategies'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 34,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_hedge_fund_strategies',
    'label' => 'Hedge Fund Strategies',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 50,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_international_equities'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_international_equities'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 35,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_international_equities',
    'label' => 'International Equities',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 51,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_intl_fixed_income'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_intl_fixed_income'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 37,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_intl_fixed_income',
    'label' => 'International Fixed Income',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 52,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_multi_asset'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_multi_asset'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 36,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_multi_asset',
    'label' => 'Multi Asset',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 53,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_mutual_fund'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_mutual_fund'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_mutual_fund',
    'label' => 'Mutual Fund',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 54,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_private_equity'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_private_equity'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_private_equity',
    'label' => 'Private Equity',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 55,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_real_assets'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_real_assets'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_real_assets',
    'label' => 'Real Assets',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 56,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_real_estate'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_real_estate'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_real_estate',
    'label' => 'Real Estate',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 57,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_real_return'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_real_return'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 42,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_real_return',
    'label' => 'Real Return',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 58,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_aa_risk_parity'
  $field_instances['field_collection_item-field_asset_allocation_history-field_aa_risk_parity'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'quickedit' => array(
            'editor' => 'form',
          ),
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 43,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_aa_risk_parity',
    'label' => 'Risk Parity',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 59,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_asset_allocation_history-field_allocation_total'
  $field_instances['field_collection_item-field_asset_allocation_history-field_allocation_total'] = array(
    'bundle' => 'field_asset_allocation_history',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 44,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_allocation_total',
    'label' => 'Allocation Total',
    'required' => 0,
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
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 16,
      ),
      'type' => 'text_textfield',
      'weight' => 60,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Absolute Return');
  t('Allocation Date');
  t('Allocation Total');
  t('Alternative Strategies');
  t('Balanced');
  t('Canadian Equities');
  t('Cash & Other');
  t('Credit Opportunities');
  t('Domestic Equities');
  t('Domestic Fixed Income');
  t('Emerging Markets Equity');
  t('Global Equities');
  t('Global Fixed-Income');
  t('Hedge Fund Strategies');
  t('International Equities');
  t('International Fixed Income');
  t('Multi Asset');
  t('Mutual Fund');
  t('Private Equity');
  t('Real Assets');
  t('Real Estate');
  t('Real Return');
  t('Risk Parity');

  return $field_instances;
}
