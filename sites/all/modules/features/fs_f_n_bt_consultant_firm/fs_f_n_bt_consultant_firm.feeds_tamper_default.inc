<?php
/**
 * @file
 * fs_f_n_bt_consultant_firm.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function fs_f_n_bt_consultant_firm_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'consultant_firm_csv_importer-latest_adv_filing_date-strtotime';
  $feeds_tamper->importer = 'consultant_firm_csv_importer';
  $feeds_tamper->source = 'Latest ADV Filing Date';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['consultant_firm_csv_importer-latest_adv_filing_date-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'consultant_firm_sec_importer-latest_adv_filing_date-strtotime';
  $feeds_tamper->importer = 'consultant_firm_sec_importer';
  $feeds_tamper->source = 'Latest ADV Filing Date';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['consultant_firm_sec_importer-latest_adv_filing_date-strtotime'] = $feeds_tamper;

  return $export;
}
