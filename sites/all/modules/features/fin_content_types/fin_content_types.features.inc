<?php
/**
 * @file
 * fin_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fin_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fin_content_types_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => t('The point of contact for plans, consultant firms, and manager firms. This contact\'s type can change with each new assignment.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function fin_content_types_paragraphs_info() {
  $items = array(
    'consultant_contact' => array(
      'name' => 'Consultant Contact',
      'bundle' => 'consultant_contact',
      'locked' => '1',
    ),
    'manager_contact' => array(
      'name' => 'Manager Contact',
      'bundle' => 'manager_contact',
      'locked' => '1',
    ),
    'plan_contact' => array(
      'name' => 'Plan Contact',
      'bundle' => 'plan_contact',
      'locked' => '1',
    ),
  );
  return $items;
}
