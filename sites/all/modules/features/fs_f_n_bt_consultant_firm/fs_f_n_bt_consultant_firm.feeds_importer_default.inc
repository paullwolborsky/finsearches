<?php
/**
 * @file
 * fs_f_n_bt_consultant_firm.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function fs_f_n_bt_consultant_firm_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'consultant_firm_csv_importer';
  $feeds_importer->config = array(
    'name' => 'Consultant Firm CSV importer',
    'description' => 'Imports csv field data from the SEC into Consultant Firm fields.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => 0,
        'allowed_extensions' => 'txt csv tsv xml opml xlsx',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'consultant_firm',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'SEC#',
            'target' => 'field_sec_number',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Latest ADV Filing Date',
            'target' => 'field_sec_adv_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => '5A',
            'target' => 'field_sec_5a',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => '5B(1)',
            'target' => 'field_sec_5b_1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => '5C(1)',
            'target' => 'field_sec_5c_1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => '5D(1)(a)',
            'target' => 'field_sec_5d_1_a',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => '5D(1)(b)',
            'target' => 'field_sec_5d_1_b',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => '5D(1)(c)',
            'target' => 'field_sec_5d_1_c',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => '5D(1)(d)',
            'target' => 'field_sec_5d_1_d',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => '5D(1)(e)',
            'target' => 'field_sec_5d_1_e',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => '5D(1)(f)',
            'target' => 'field_sec_5d_1_f',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => '5D(1)(g)',
            'target' => 'field_sec_5d_1_g',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => '5D(1)(h)',
            'target' => 'field_sec_5d_1_h',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => '5D(1)(i)',
            'target' => 'field_sec_5d_1_i',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => '5D(1)(j)',
            'target' => 'field_sec_5d_1_j',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => '5D(1)(k)',
            'target' => 'field_sec_5d_1_k',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => '5D(1)(l)',
            'target' => 'field_sec_5d_1_l',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => '5D(1)(m)',
            'target' => 'field_sec_5d_1_m',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => '5F(2)(a)',
            'target' => 'field_sec_5f_2_a',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => '5F(2)(b)',
            'target' => 'field_sec_5f_2_b',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => '5F(2)(c)',
            'target' => 'field_sec_5f_2_c',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => '1',
        'authorize' => 1,
        'update_non_existent' => 'skip',
        'skip_hash_check' => 1,
        'insert_new' => '0',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['consultant_firm_csv_importer'] = $feeds_importer;

  return $export;
}
