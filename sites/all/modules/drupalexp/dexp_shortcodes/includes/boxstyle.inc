<?php

function dexp_shortcodes_boxstyle_shortcode_info(&$shortcodes) {
  $shortcodes['boxstyle'] = array(
      'title' => t('Boxstyle'),
      'description' => t('Create a boxstyle block content'),
      'process callback' => 'dexp_shortcodes_boxstyle',
  );
}

function dexp_shortcodes_boxstyle($attrs, $text) {
  $attrs['content'] = $text;
	if(!isset($attrs['type'])) $attrs['type'] == 'default';
  return theme('dexp_shortcodes_boxstyle', array('attrs'=>$attrs,'type'=>$attrs['type']));
}

function dexp_shortcodes_boxstyle_theme(&$themes) {
  $path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_boxstyle'] = array(
      'template' => 'boxstyle',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_boxstyle',
      ),
      'variables' => array(
          'type' => '',
      )
  );
}

function dexp_shortcodes_preprocess_shortcode_boxstyle(&$vars) {
  $type = trim($vars['type']);
	$vars['theme_hook_suggestions'][] = 'shortcode__boxstyle__' . $type;
}