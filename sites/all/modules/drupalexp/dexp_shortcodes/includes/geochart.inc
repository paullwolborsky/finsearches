<?php

function dexp_shortcodes_geochart_shortcode_info(&$shortcodes) {
  $shortcodes['geochart'] = array(
      'title' => t('Google chart'),
      'description' => t('Draw the geochart, use google chart API'),
      'process callback' => 'dexp_shortcodes_geochart',
  );
}

function dexp_shortcodes_geochart($attrs, $text) {
  $attrs = shortcode_attrs(array(
      'title' => '',
      'data' => 'data',
      ), $attrs
  );
  $attrs['content'] = $text;
	return theme('dexp_shortcodes_geochart', $attrs);
	//return dexp_shortcode_clean($return);
}

function dexp_shortcodes_geochart_theme(&$themes) {
  $path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_geochart'] = array(
      'template' => 'geochart',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_geochart',
      ),
      'variables' => array(),
  );
}

function dexp_shortcodes_preprocess_shortcode_geochart(&$vars) {
	$data = $vars['data'];
	$items = explode(',',$data);
	$data_string = "['Country', 'Share'],";
	foreach($items as $item){
		$info = explode(':',$item);
		if(isset($info[1])){
			$data_string .= "['{$info[0]}',{$info[1]}],";
		}
	}
  $vars['chart_id'] = drupal_html_id('dexp-geochart-'.REQUEST_TIME);
  $vars['data'] = $data_string;
  $vars['classes_array'][] = 'dexp-geochart';
  $vars['theme_hook_suggestions'][] = 'shortcode__geochart';
}