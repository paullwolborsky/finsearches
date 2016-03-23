<?php
/**
 * @file
 * fs_f_fn_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fs_f_fn_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'consultant-contacts';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'consultant-contacts' => 'consultant-contacts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-a6f16bcc92a7f0b49fc4e3cb2df719d6' => array(
          'module' => 'views',
          'delta' => 'a6f16bcc92a7f0b49fc4e3cb2df719d6',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['consultant-contacts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'consultants';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'consultants' => 'consultants',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2c0a989e7686a640893dfde964d709c8' => array(
          'module' => 'views',
          'delta' => '2c0a989e7686a640893dfde964d709c8',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['consultants'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fin-daily-mandates';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'fin-daily-mandates' => 'fin-daily-mandates',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-95efdaa2f24c762b76a3874f53ca09dc' => array(
          'module' => 'views',
          'delta' => '95efdaa2f24c762b76a3874f53ca09dc',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['fin-daily-mandates'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'manager-contacts';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'manager-contacts' => 'manager-contacts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2eaf5bc44a340433173f5ed0fdb180f1' => array(
          'module' => 'views',
          'delta' => '2eaf5bc44a340433173f5ed0fdb180f1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['manager-contacts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'managers';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'managers' => 'managers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-42a80c75f5d750e3990a8dcfbb7c3319' => array(
          'module' => 'views',
          'delta' => '42a80c75f5d750e3990a8dcfbb7c3319',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['managers'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mandates';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mandates' => 'mandates',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-content_lists-mandates_list' => array(
          'module' => 'views',
          'delta' => 'content_lists-mandates_list',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['mandates'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'map-consultant';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'consultant-map' => 'consultant-map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-map_views-map_consultant' => array(
          'module' => 'views',
          'delta' => 'map_views-map_consultant',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['map-consultant'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'map-manager';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'manager-map' => 'manager-map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-map_views-map_manager' => array(
          'module' => 'views',
          'delta' => 'map_views-map_manager',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['map-manager'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'map-plan';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'plan-map' => 'plan-map',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-map_views-map_plan' => array(
          'module' => 'views',
          'delta' => 'map_views-map_plan',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['map-plan'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-content_lists-news_list' => array(
          'module' => 'views',
          'delta' => 'content_lists-news_list',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'plan-contacts';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'plan-contacts' => 'plan-contacts',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-a64c8bd700384b6f16546e220ba84bd1' => array(
          'module' => 'views',
          'delta' => 'a64c8bd700384b6f16546e220ba84bd1',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['plan-contacts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'plans';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'plans' => 'plans',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-content_lists-plans_list' => array(
          'module' => 'views',
          'delta' => 'content_lists-plans_list',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['plans'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recent-content';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recent-content' => 'recent-content',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-extra_views-recent_content' => array(
          'module' => 'views',
          'delta' => 'extra_views-recent_content',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['recent-content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rfps';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'rfps' => 'rfps',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-content_lists-rfps_list' => array(
          'module' => 'views',
          'delta' => 'content_lists-rfps_list',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['rfps'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'advanced-search' => 'advanced-search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search_api_saved_searches-solr_index' => array(
          'module' => 'search_api_saved_searches',
          'delta' => 'solr_index',
          'region' => 'left_sidebar',
          'weight' => '-10',
        ),
        'facetapi-v3wXsXMozBnc8hWjP5HqkGVNYHnJzNMU' => array(
          'module' => 'facetapi',
          'delta' => 'v3wXsXMozBnc8hWjP5HqkGVNYHnJzNMU',
          'region' => 'left_sidebar',
          'weight' => '-9',
        ),
        'facetapi-LlXmtelmeJoU4kr1esoWjHgEE1010a20' => array(
          'module' => 'facetapi',
          'delta' => 'LlXmtelmeJoU4kr1esoWjHgEE1010a20',
          'region' => 'left_sidebar',
          'weight' => '-8',
        ),
        'facetapi-VbQdzVnvPY8QqwE5FcQT0qecky7UZBgQ' => array(
          'module' => 'facetapi',
          'delta' => 'VbQdzVnvPY8QqwE5FcQT0qecky7UZBgQ',
          'region' => 'left_sidebar',
          'weight' => '-7',
        ),
        'facetapi-8lDyhY0AIm2CjRmcoLQbYuHss3I3Qv03' => array(
          'module' => 'facetapi',
          'delta' => '8lDyhY0AIm2CjRmcoLQbYuHss3I3Qv03',
          'region' => 'left_sidebar',
          'weight' => '-6',
        ),
        'facetapi-0JIa547iRkG1o8gcUcEvP7OG60h81xDh' => array(
          'module' => 'facetapi',
          'delta' => '0JIa547iRkG1o8gcUcEvP7OG60h81xDh',
          'region' => 'left_sidebar',
          'weight' => '-5',
        ),
        'facetapi-0U1vdHJPbRjrBDMAZsPnGjs3Vx4Crgf3' => array(
          'module' => 'facetapi',
          'delta' => '0U1vdHJPbRjrBDMAZsPnGjs3Vx4Crgf3',
          'region' => 'left_sidebar',
          'weight' => '-4',
        ),
        'facetapi-7fM0beGA0Fy3wocPaJBZgVjtILY1RtI9' => array(
          'module' => 'facetapi',
          'delta' => '7fM0beGA0Fy3wocPaJBZgVjtILY1RtI9',
          'region' => 'left_sidebar',
          'weight' => '-3',
        ),
        'facetapi-Lwvgp6spBxvRZV3Q19NutXKMT3LX16se' => array(
          'module' => 'facetapi',
          'delta' => 'Lwvgp6spBxvRZV3Q19NutXKMT3LX16se',
          'region' => 'left_sidebar',
          'weight' => '-2',
        ),
        'facetapi-D7KpQw1g4ijNyOsqYiUwyIVVrfcz6LfZ' => array(
          'module' => 'facetapi',
          'delta' => 'D7KpQw1g4ijNyOsqYiUwyIVVrfcz6LfZ',
          'region' => 'left_sidebar',
          'weight' => '-1',
        ),
        'facetapi-6QSOd03dQY4zF0FaE2wqi1lse4QVH27E' => array(
          'module' => 'facetapi',
          'delta' => '6QSOd03dQY4zF0FaE2wqi1lse4QVH27E',
          'region' => 'left_sidebar',
          'weight' => '0',
        ),
        'facetapi-6T31dcEVB3Uhrmn9zhmu7314qC7v9AtD' => array(
          'module' => 'facetapi',
          'delta' => '6T31dcEVB3Uhrmn9zhmu7314qC7v9AtD',
          'region' => 'left_sidebar',
          'weight' => '1',
        ),
        'facetapi-yGFxP10FLH21PtFupsQzn3grEzCC5KaS' => array(
          'module' => 'facetapi',
          'delta' => 'yGFxP10FLH21PtFupsQzn3grEzCC5KaS',
          'region' => 'left_sidebar',
          'weight' => '2',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'left_sidebar',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar-right-lists';
  $context->description = 'Renders the sidebar for list-level pages.';
  $context->tag = 'global';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'site_page' => 'site_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'user/*/shortcuts' => 'user/*/shortcuts',
        'messages' => 'messages',
        'user/*/subscriptions' => 'user/*/subscriptions',
        'user/*/saved-searches' => 'user/*/saved-searches',
        'user/*/imce' => 'user/*/imce',
        'resources/tasks' => 'resources/tasks',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-online' => array(
          'module' => 'user',
          'delta' => 'online',
          'region' => 'right_sidebar',
          'weight' => '-8',
        ),
        'views-a9706a0c2bd6ed2ad2a9fb0317b34834' => array(
          'module' => 'views',
          'delta' => 'a9706a0c2bd6ed2ad2a9fb0317b34834',
          'region' => 'right_sidebar',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Renders the sidebar for list-level pages.');
  t('global');
  $export['sidebar-right-lists'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar-right-nodes';
  $context->description = 'Renders the sidebar for node-level pages.';
  $context->tag = 'global';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'consultant_firm' => 'consultant_firm',
        'contact' => 'contact',
        'manager_firm' => 'manager_firm',
        'mandate' => 'mandate',
        'news' => 'news',
        'office' => 'office',
        'organization' => 'organization',
        'plan' => 'plan',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'subscriptions_ui-0' => array(
          'module' => 'subscriptions_ui',
          'delta' => '0',
          'region' => 'right_sidebar',
          'weight' => '-10',
        ),
        'user-online' => array(
          'module' => 'user',
          'delta' => 'online',
          'region' => 'right_sidebar',
          'weight' => '-8',
        ),
        'views-a9706a0c2bd6ed2ad2a9fb0317b34834' => array(
          'module' => 'views',
          'delta' => 'a9706a0c2bd6ed2ad2a9fb0317b34834',
          'region' => 'right_sidebar',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Renders the sidebar for node-level pages.');
  t('global');
  $export['sidebar-right-nodes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Renders the basic framework for all fixed blocks.';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'top_left',
          'weight' => '-10',
        ),
        'logintoboggan-logintoboggan_logged_in' => array(
          'module' => 'logintoboggan',
          'delta' => 'logintoboggan_logged_in',
          'region' => 'top_right',
          'weight' => '-10',
        ),
        'search_api_page-solr_search_page' => array(
          'module' => 'search_api_page',
          'delta' => 'solr_search_page',
          'region' => 'top_right',
          'weight' => '-9',
        ),
        'dexp_menu-dexp_menu_block_1' => array(
          'module' => 'dexp_menu',
          'delta' => 'dexp_menu_block_1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'action',
          'weight' => '-10',
        ),
        'dexp_page_elements-dexp_page_elements_breadcrumb' => array(
          'module' => 'dexp_page_elements',
          'delta' => 'dexp_page_elements_breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Renders the basic framework for all fixed blocks.');
  t('global');
  $export['sitewide'] = $context;

  return $export;
}
