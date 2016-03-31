<?php
/**
 * @file
 * fs_f_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fs_f_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'chosen_jquery_selector';
  $strongarm->value = 'select:visible:not([id*=\'edit-field-major-minor-style-tr-und-hierarchical-select-selects\'])';
  $export['chosen_jquery_selector'] = $strongarm;

  return $export;
}
