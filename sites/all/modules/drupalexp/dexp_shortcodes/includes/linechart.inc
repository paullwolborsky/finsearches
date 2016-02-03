<?php

function dexp_shortcodes_linechart_shortcode_info(&$shortcodes) {
  $shortcodes['linechart'] = array(
      'title' => t('Google Line chart'),
      'description' => t('Draw the linechart, use google chart API'),
      'process callback' => 'dexp_shortcodes_linechart',
  );
}

function dexp_shortcodes_linechart($attrs, $text) {
  $attrs = shortcode_attrs(array(
      'title' => '',
      'data' => 'data',
      'type' => 'circle',
      'bgcolor' => 'transparent',
      'colors' => 'white',
      ), $attrs
  );
  $attrs['content'] = $text;
	return theme('dexp_shortcodes_linechart', $attrs);
}

function dexp_shortcodes_linechart_theme(&$themes) {
  $path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_linechart'] = array(
      'template' => 'linechart',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_linechart',
      ),
      'variables' => array(),
  );
}

function dexp_shortcodes_preprocess_shortcode_linechart(&$vars) {
	$data = $vars['data'];
	$items = explode(',',$data);
	$data_string = "";
	foreach($items as $item){
		$info = explode(':',$item);
		$data_string .= "[".implode(',',$info)."],";
	}
  $vars['chart_id'] = drupal_html_id('dexp-linechart-'.REQUEST_TIME);
  $vars['data'] = $data_string;
  $vars['classes_array'][] = 'dexp-linechart';
  $vars['theme_hook_suggestions'][] = 'shortcode__linechart';
}

function dexp_shortcodes_linechart_tips($format, $long) {
  return '[linechart title="" data="\'Year\':\'Line 1\',\'2013\':1000,\'2014\':2000" type="circle|triangle|square|diamond|star|polygon" bgcolor="transparent|red|white..." colors="white|red|blue|#fff"][/linechart]';  
}