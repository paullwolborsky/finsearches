<?php

function dexp_shortcodes_areachart_shortcode_info(&$shortcodes) {
  $shortcodes['areachart'] = array(
      'title' => t('Google Area chart'),
      'description' => t('Draw the Area Chart, use google chart API'),
      'process callback' => 'dexp_shortcodes_areachart',
      'tips callback' => 'dexp_shortcodes_areachart_tips',
  );
}

function dexp_shortcodes_areachart($attrs, $text) {
  $attrs = shortcode_attrs(array(
      'title' => '',
      'data' => 'data',
      'colors' => '#FFF',
      'bgcolor' => 'transparent',
      'hAxis' => ":#FFF",
      'vAxis' => ":#FFF",
      'type' => 'polygon',
      ), $attrs
  );
  $attrs['content'] = $text;
	return theme('dexp_shortcodes_areachart', $attrs);
}

function dexp_shortcodes_areachart_theme(&$themes) {
  $path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_areachart'] = array(
      'template' => 'areachart',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_areachart',
      ),
      'variables' => array(),
  );
}

function dexp_shortcodes_preprocess_shortcode_areachart(&$vars) {
	$data = $vars['data'];
	$items = explode(',',$data); 
	$data_string = "";
	foreach($items as $item){
		$info = explode(':',$item);
		$data_string .= "[".implode(',',$info)."],";
	}
  $haxis = explode(':',$vars['hAxis']);
  $vars['htitle'] = $haxis[0];
  $vars['hcolor'] = $haxis[1];
  $vaxis = explode(':',$vars['vAxis']);
  $vars['vtitle'] = $vaxis[0];
  $vars['vcolor'] = $vaxis[1]; 
  
  $vars['chart_id'] = drupal_html_id('dexp-areachart-'.REQUEST_TIME);
  $vars['data'] = $data_string;
  $vars['classes_array'][] = 'dexp-areachart';
  $vars['theme_hook_suggestions'][] = 'shortcode__areachart';
}

function dexp_shortcodes_areachart_tips($format, $long) {
  return '[areachart title="" data="\'Year\':\'Happy Clients\',\'2013\':1000,\'2014\':2000" colors="\'#fff\',\'#ddd\'" type="diamond|polygon|circle" hAxis="title:#FFF" vAxis="title:#FFF"][/areachart]';  
}