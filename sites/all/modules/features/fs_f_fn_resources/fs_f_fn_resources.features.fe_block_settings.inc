<?php
/**
 * @file
 * fs_f_fn_resources.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fs_f_fn_resources_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fin_utils-messages'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'messages',
    'module' => 'fin_utils',
    'node_types' => array(),
    'pages' => 'resources',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corposs',
        'weight' => -55,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['fin_utils-saved_filters'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'saved_filters',
    'module' => 'fin_utils',
    'node_types' => array(),
    'pages' => 'resources
user/*/saved-searches',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corposs',
        'weight' => -57,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['fin_utils-saved_searches'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'saved_searches',
    'module' => 'fin_utils',
    'node_types' => array(),
    'pages' => 'resources',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corposs',
        'weight' => -58,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['fin_utils-subscriptions'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'subscriptions',
    'module' => 'fin_utils',
    'node_types' => array(),
    'pages' => 'resources',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corposs',
        'weight' => -56,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
