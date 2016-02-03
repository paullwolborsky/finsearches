<?php
/**
 * @file
 * dexp_corposs.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dexp_corposs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dexp_corposs_image_default_styles() {
  $styles = array();

  // Exported image style: portfolio_large.
  $styles['portfolio_large'] = array(
    'label' => 'Portfolio Large',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 860,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_medium.
  $styles['portfolio_medium'] = array(
    'label' => 'Portfolio Medium',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 245,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: portfolio_small.
  $styles['portfolio_small'] = array(
    'label' => 'Portfolio Small (255x60)',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: team_medium.
  $styles['team_medium'] = array(
    'label' => 'Team medium (270x270)',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dexp_corposs_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'clients' => array(
      'name' => t('Clients'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dexp_portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
