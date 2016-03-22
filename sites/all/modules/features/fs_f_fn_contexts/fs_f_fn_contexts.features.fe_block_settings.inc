<?php
/**
 * @file
 * fs_f_fn_contexts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fs_f_fn_contexts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addressfield_staticmap-addressfield_staticmap'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'addressfield_staticmap',
    'module' => 'addressfield_staticmap',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -11,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['addressfield_staticmap-addressfield_staticmap_alt'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'addressfield_staticmap_alt',
    'module' => 'addressfield_staticmap',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -10,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-site_name'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'site_name',
    'module' => 'block',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 3,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-devel'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'context_ui',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -5,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'editor',
    'module' => 'context_ui',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -6,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -3,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 5,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['dexp_countdown-dexp_countdown_block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'dexp_countdown_block',
    'module' => 'dexp_countdown',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['dexp_menu-dexp_menu_block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dexp_menu_block_1',
    'module' => 'dexp_menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['dexp_menu-dexp_menu_block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dexp_menu_block_2',
    'module' => 'dexp_menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['dexp_menu-dexp_menu_block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dexp_menu_block_3',
    'module' => 'dexp_menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['dexp_page_elements-dexp_page_elements_breadcrumb'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dexp_page_elements_breadcrumb',
    'module' => 'dexp_page_elements',
    'node_types' => array(),
    'pages' => 'advanced-search',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['dexp_page_elements-dexp_page_elements_page_title'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dexp_page_elements_page_title',
    'module' => 'dexp_page_elements',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['dexp_quicksettings-dexp_quicksettings'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dexp_quicksettings',
    'module' => 'dexp_quicksettings',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['dexp_widget-widget_flickr'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'widget_flickr',
    'module' => 'dexp_widget',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['diff-inline'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['facetapi-0JIa547iRkG1o8gcUcEvP7OG60h81xDh'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0JIa547iRkG1o8gcUcEvP7OG60h81xDh',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
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
    'title' => 'Mandate Status',
    'visibility' => 1,
  );

  $export['facetapi-0U1vdHJPbRjrBDMAZsPnGjs3Vx4Crgf3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0U1vdHJPbRjrBDMAZsPnGjs3Vx4Crgf3',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -46,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Geographic',
    'visibility' => 1,
  );

  $export['facetapi-6QSOd03dQY4zF0FaE2wqi1lse4QVH27E'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '6QSOd03dQY4zF0FaE2wqi1lse4QVH27E',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -47,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Currency',
    'visibility' => 1,
  );

  $export['facetapi-6T31dcEVB3Uhrmn9zhmu7314qC7v9AtD'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '6T31dcEVB3Uhrmn9zhmu7314qC7v9AtD',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -45,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Office Type',
    'visibility' => 1,
  );

  $export['facetapi-7fM0beGA0Fy3wocPaJBZgVjtILY1RtI9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '7fM0beGA0Fy3wocPaJBZgVjtILY1RtI9',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -50,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Major/Minor Style',
    'visibility' => 1,
  );

  $export['facetapi-8lDyhY0AIm2CjRmcoLQbYuHss3I3Qv03'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '8lDyhY0AIm2CjRmcoLQbYuHss3I3Qv03',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -43,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Plan Size',
    'visibility' => 1,
  );

  $export['facetapi-D7KpQw1g4ijNyOsqYiUwyIVVrfcz6LfZ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'D7KpQw1g4ijNyOsqYiUwyIVVrfcz6LfZ',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -48,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Consultant Firm',
    'visibility' => 1,
  );

  $export['facetapi-Lwvgp6spBxvRZV3Q19NutXKMT3LX16se'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Lwvgp6spBxvRZV3Q19NutXKMT3LX16se',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -51,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Account Size',
    'visibility' => 1,
  );

  $export['facetapi-VbQdzVnvPY8QqwE5FcQT0qecky7UZBgQ'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'VbQdzVnvPY8QqwE5FcQT0qecky7UZBgQ',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -42,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Plan Type',
    'visibility' => 1,
  );

  $export['facetapi-v3wXsXMozBnc8hWjP5HqkGVNYHnJzNMU'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'v3wXsXMozBnc8hWjP5HqkGVNYHnJzNMU',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -53,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Content Type',
    'visibility' => 1,
  );

  $export['facetapi-yGFxP10FLH21PtFupsQzn3grEzCC5KaS'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'yGFxP10FLH21PtFupsQzn3grEzCC5KaS',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -44,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'News Type',
    'visibility' => 1,
  );

  $export['logintoboggan-logintoboggan_logged_in'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'logintoboggan_logged_in',
    'module' => 'logintoboggan',
    'node_types' => array(),
    'pages' => 'user/*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -14,
      ),
      'mix_and_match' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'mix_and_match',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -4,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -2,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => 'advanced-search
advanced-search/*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -40,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 6,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['print-print-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print-top',
    'module' => 'print',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['print_pdf-print_pdf-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print_pdf-top',
    'module' => 'print_pdf',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['print_ui-print-links'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'print-links',
    'module' => 'print_ui',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['privatemsg-privatemsg-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'privatemsg-menu',
    'module' => 'privatemsg',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['privatemsg-privatemsg-new'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'privatemsg-new',
    'module' => 'privatemsg',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['profile-author-information'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'author-information',
    'module' => 'profile',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -7,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search_api_page-solr_search_page'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'solr_search_page',
    'module' => 'search_api_page',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search_api_saved_searches-solr_index'] = array(
    'cache' => 5,
    'custom' => 0,
    'delta' => 'solr_index',
    'module' => 'search_api_saved_searches',
    'node_types' => array(),
    'pages' => 'advanced-search*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -52,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => 'Saved Searches',
    'visibility' => 1,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 4,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['subscriptions_ui-0'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 0,
    'module' => 'subscriptions_ui',
    'node_types' => array(
      0 => 'clients',
      1 => 'consultant_firm',
      2 => 'contact',
      3 => 'manager_firm',
      4 => 'mandate',
      5 => 'news',
      6 => 'office',
      7 => 'plan',
    ),
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -54,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -53,
      ),
      'mix_and_match' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -52,
      ),
      'mix_and_match' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mix_and_match',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -1,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 1,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 10,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 2,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 7,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 7,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -13,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => 'advanced-search
advanced-search/*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -42,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => 'advanced-search
advanced-search/*',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -52,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-03b217148f7d9983c8c8b56659be0104'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '03b217148f7d9983c8c8b56659be0104',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-0fab8197d9ef7d6fa079c252067ecb38'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0fab8197d9ef7d6fa079c252067ecb38',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-16d4ab28f4cab22918372fc38a300fe2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '16d4ab28f4cab22918372fc38a300fe2',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-1d3e4de5a3c6370ea1e0e0674400d004'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '1d3e4de5a3c6370ea1e0e0674400d004',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-2c0a989e7686a640893dfde964d709c8'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '2c0a989e7686a640893dfde964d709c8',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'consultants',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -45,
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

  $export['views-2eaf5bc44a340433173f5ed0fdb180f1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '2eaf5bc44a340433173f5ed0fdb180f1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'manager-contacts',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -42,
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

  $export['views-3377d28aaf4e8560d3fa61a615cae1f5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '3377d28aaf4e8560d3fa61a615cae1f5',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-4291ff42784eeeec23b906a470da1f2d'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '4291ff42784eeeec23b906a470da1f2d',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-42a80c75f5d750e3990a8dcfbb7c3319'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '42a80c75f5d750e3990a8dcfbb7c3319',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'managers',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -43,
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

  $export['views-4a42fa41960927911eb298089298779b'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '4a42fa41960927911eb298089298779b',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-5ee1998437f2eb438da4e34a48ff4bae'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '5ee1998437f2eb438da4e34a48ff4bae',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-8e6377fde6fbf7c1350004fdb7785134'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '8e6377fde6fbf7c1350004fdb7785134',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-93036f26f111b21fd8fa940f2e0475b8'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '93036f26f111b21fd8fa940f2e0475b8',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-942a7a0c932d70c1b54cc4a9f3268afa'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '942a7a0c932d70c1b54cc4a9f3268afa',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-95efdaa2f24c762b76a3874f53ca09dc'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '95efdaa2f24c762b76a3874f53ca09dc',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'fin-daily-mandates',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -46,
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

  $export['views-9a04f4ee970f1705dea060012769f02f'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '9a04f4ee970f1705dea060012769f02f',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-a64c8bd700384b6f16546e220ba84bd1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'a64c8bd700384b6f16546e220ba84bd1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'plan-contacts',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
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
    'visibility' => 1,
  );

  $export['views-a66de16df439f6027c2fef3c8b726233'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'a66de16df439f6027c2fef3c8b726233',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-a6f16bcc92a7f0b49fc4e3cb2df719d6'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'a6f16bcc92a7f0b49fc4e3cb2df719d6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'consultant-contacts',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -44,
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

  $export['views-af36729b47054d890b13c7ec7cd184d1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'af36729b47054d890b13c7ec7cd184d1',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-b2128bbe8dbc346f40bcc1392b1b4f76'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'b2128bbe8dbc346f40bcc1392b1b4f76',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-b663877f6fbf9860089640d12bcc0473'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'b663877f6fbf9860089640d12bcc0473',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-c5af89d110514d04d5998e1a7a0c7bf5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'c5af89d110514d04d5998e1a7a0c7bf5',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-cdb9a3807eef93e1e5c5af3aed3b69fa'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cdb9a3807eef93e1e5c5af3aed3b69fa',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-cfe90d84f185d84a5edf29887535fcb7'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'cfe90d84f185d84a5edf29887535fcb7',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-comment_views-manager_notes'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comment_views-manager_notes',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-comment_views-mandate_notes'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comment_views-mandate_notes',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-comment_views-plan_notes'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comment_views-plan_notes',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-content_lists-mandates_list'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'content_lists-mandates_list',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'mandates',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -48,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 8,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-content_lists-news_list'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'content_lists-news_list',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -41,
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

  $export['views-content_lists-plans_list'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'content_lists-plans_list',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'plans',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -50,
      ),
      'mix_and_match' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mix_and_match',
        'weight' => 9,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-content_lists-rfps_list'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'content_lists-rfps_list',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'rfps',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -47,
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

  $export['views-d55ccbfd3c721f55b0a71a2a0c40d69c'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'd55ccbfd3c721f55b0a71a2a0c40d69c',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-d7843be87a1f7f518b3ed59b4a53ef78'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'd7843be87a1f7f518b3ed59b4a53ef78',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-db526bf0c55fcfc67b44b4444e12c392'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'db526bf0c55fcfc67b44b4444e12c392',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-dc46a045a501e5a43293770ea805de92'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dc46a045a501e5a43293770ea805de92',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-dd1dcf66630915cf9ba9e907488c9298'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'dd1dcf66630915cf9ba9e907488c9298',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-eb767bd5382348a512b0ac4eee218bbb'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'eb767bd5382348a512b0ac4eee218bbb',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-ed0712b556672f3843eb9bbf4e2aae25'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ed0712b556672f3843eb9bbf4e2aae25',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-eea3ae9383c010a99d5c2979eab1c1e1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'eea3ae9383c010a99d5c2979eab1c1e1',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-extra_views-recent_content'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'extra_views-recent_content',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'recent-content',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'corposs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => -51,
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

  $export['views-fdecc7f145fe211631b1b2b9245cfb8d'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'fdecc7f145fe211631b1b2b9245cfb8d',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-reference_views-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'reference_views-block_1',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-reference_views-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'reference_views-block_3',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-reference_views-manager_plans'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'reference_views-manager_plans',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-reference_views-plan_contacts'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'reference_views-plan_contacts',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-user_views-organization_members'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_views-organization_members',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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

  $export['views-user_views-users'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_views-users',
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
        'region' => '',
        'status' => 0,
        'theme' => 'corposs',
        'weight' => 0,
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
