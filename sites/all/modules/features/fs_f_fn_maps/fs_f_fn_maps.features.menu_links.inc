<?php
/**
 * @file
 * fs_f_fn_maps.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fs_f_fn_maps_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_consultant-map:node/6964
  $menu_links['main-menu_consultant-map:node/6964'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6964',
    'router_path' => 'node/%',
    'link_title' => 'Consultant Map',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_consultant-map:node/6964',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_consultants:node/3706',
  );
  // Exported menu link: main-menu_manager-map:node/6965
  $menu_links['main-menu_manager-map:node/6965'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6965',
    'router_path' => 'node/%',
    'link_title' => 'Manager Map',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_manager-map:node/6965',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_managers:node/3707',
  );
  // Exported menu link: main-menu_plan-map:node/6963
  $menu_links['main-menu_plan-map:node/6963'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6963',
    'router_path' => 'node/%',
    'link_title' => 'Plan Map',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_plan-map:node/6963',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_plans:node/3704',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Consultant Map');
  t('Manager Map');
  t('Plan Map');

  return $menu_links;
}
