<?php

function dexp_shortcodes_feature_shortcode_info(&$shortcodes) {
  $shortcodes['feature'] = array(
      'title' => t('Feature'),
      'description' => t('Create a feature block content'),
      'process callback' => 'dexp_shortcodes_feature',
  );
}

function dexp_shortcodes_feature($attrs, $text) {
  $attrs['content'] = $text;
	if(!isset($attrs['type'])) $attrs['type'] == 'default';
  return theme('dexp_shortcodes_feature', array('attrs'=>$attrs,'type'=>$attrs['type']));
}

function dexp_shortcodes_feature_theme(&$themes) {
  $path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_feature'] = array(
      'template' => 'feature',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_feature',
      ),
      'variables' => array(
          'type' => '',
      )
  );
}

function dexp_shortcodes_preprocess_shortcode_feature(&$vars) {
  $type = trim($vars['type']);
	$vars['theme_hook_suggestions'][] = 'shortcode__feature__' . $type;
}