<?php
/**
 * @file
 * fs_f_fn_extra_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fs_f_fn_extra_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-a9706a0c2bd6ed2ad2a9fb0317b34834'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'a9706a0c2bd6ed2ad2a9fb0317b34834',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => 'right_sidebar',
        'status' => 1,
        'theme' => 'corposs',
        'weight' => -49,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
