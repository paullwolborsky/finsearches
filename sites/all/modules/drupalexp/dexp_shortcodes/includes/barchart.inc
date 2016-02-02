<?php

function dexp_shortcodes_barchart_shortcode_info(&$shortcodes) {
  $shortcodes['barchart'] = array(
      'title' => t('Google Barchart'),
      'description' => t('Draw the barchart, use google chart API'),
      'process callback' => 'dexp_shortcodes_barchart',
      'tips callback' => 'dexp_shortcodes_barchart_tips',
  );
}

function dexp_shortcodes_barchart($attrs, $text) {
  $attrs = shortcode_attrs(array(
      'title' => '',
      'data' => 'data',
      'colors' => '',
      'stack' => 'false',
      'width' => '30%',
      ), $attrs
  );
  $attrs['content'] = $text;
	return theme('dexp_shortcodes_barchart', $attrs);
}

function dexp_shortcodes_barchart_theme(&$themes) {
  $path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_barchart'] = array(
      'template' => 'barchart',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_barchart',
      ),
      'variables' => array(),
  );
}

function dexp_shortcodes_preprocess_shortcode_barchart(&$vars) {
	$data = $vars['data'];
	$items = explode(',',$data);
	$data_string = "";
  $vtitle = explode(':',$items[0]);
	foreach($items as $item){
		$info = explode(':',$item);
		$data_string .= "[".implode(',',$info)."],";
	}
  
  $vars['chart_id'] = drupal_html_id('dexp-barchart-'.REQUEST_TIME);
  $vars['data'] = $data_string;
  $vars['vtitle'] = $vtitle[0];
  $vars['classes_array'][] = 'dexp-barchart';
  $vars['theme_hook_suggestions'][] = 'shortcode__barchart';
}

function dexp_shortcodes_barchart_tips($format, $long) {
  return '[barchart title="" data="\'Year\':\'Line 1\',\'2013\':1000,\'2014\':2000" colors="\'#fff\',\'#ddd\'"][/barchart]';  
}