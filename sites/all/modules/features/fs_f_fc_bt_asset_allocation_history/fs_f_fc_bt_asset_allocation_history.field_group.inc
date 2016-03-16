<?php
/**
 * @file
 * fs_f_fc_bt_asset_allocation_history.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fs_f_fc_bt_asset_allocation_history_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_allocations|field_collection_item|field_asset_allocation_history|form';
  $field_group->group_name = 'group_allocations';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_asset_allocation_history';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Allocations',
    'weight' => '1',
    'children' => array(
      0 => 'field_aa_absolute_return',
      1 => 'field_aa_alternative_strategies',
      2 => 'field_aa_balanced',
      3 => 'field_aa_canadian_equities',
      4 => 'field_aa_cash_other',
      5 => 'field_aa_credit_opportunities',
      6 => 'field_aa_domestic_fixed_income',
      7 => 'field_aa_domestic_equities',
      8 => 'field_aa_emerging_markets_equity',
      9 => 'field_aa_global_equities',
      10 => 'field_aa_global_fixed_income',
      11 => 'field_aa_hedge_fund_strategies',
      12 => 'field_aa_international_equities',
      13 => 'field_aa_multi_asset',
      14 => 'field_aa_intl_fixed_income',
      15 => 'field_aa_mutual_fund',
      16 => 'field_aa_private_equity',
      17 => 'field_aa_real_assets',
      18 => 'field_aa_real_estate',
      19 => 'field_aa_real_return',
      20 => 'field_aa_risk_parity',
      21 => 'field_allocation_total',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Allocations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'allocations',
        'classes' => 'group-allocations field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_allocations|field_collection_item|field_asset_allocation_history|form'] = $field_group;

  return $export;
}
