<?php
/**
 * @file
 * fs_f_fn_contexts.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fs_f_fn_contexts_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site Name';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'site_name';
  $fe_block_boxes->body = '<h2>FIN Searches</h2>
';

  $export['site_name'] = $fe_block_boxes;

  return $export;
}
