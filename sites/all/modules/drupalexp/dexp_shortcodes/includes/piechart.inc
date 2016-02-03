<?php

function dexp_shortcodes_piechart_shortcode_info(&$shortcodes) {
  $shortcodes['piechart'] = array(
      'title' => t('Google chart'),
      'description' => t('Draw the piechart, use google chart API'),
      'process callback' => 'dexp_shortcodes_piechart',
      'tips callback' => 'dexp_shortcodes_piechart_tips',
  );
}

function dexp_shortcodes_piechart($attrs, $text) {
  $attrs = shortcode_attrs(array(
      'title' => '',
      'data' => 'data',
      ), $attrs
  );
  $attrs['content'] = $text;
	return theme('dexp_shortcodes_piechart', $attrs);
	//return dexp_shortcode_clean($return);
}

function dexp_shortcodes_piechart_theme(&$themes) {
  $path = drupal_get_path('module', 'dexp_shortcodes');
  $themes['dexp_shortcodes_piechart'] = array(
      'template' => 'piechart',
      'path' => $path . '/theme',
      'pattern' => 'shortcode__',
      'preprocess functions' => array(
          'template_preprocess',
          'dexp_shortcodes_preprocess_shortcode_piechart',
      ),
      'variables' => array(
        'data' => '',
        'title' => '',
        'content' => ''
      ),
  );
}

function dexp_shortcodes_preprocess_shortcode_piechart(&$vars) {
	$data = $vars['data'];
	$items = explode(',',$data);
	$data_string = "['Continent', '{$vars['title']}'],";
	foreach($items as $item){
		$info = explode(':',$item);
		if(isset($info[1])){
			$data_string .= "['{$info[0]}',{$info[1]}],";
		}
	}
  $vars['chart_id'] = drupal_html_id('dexp-piechart-'.REQUEST_TIME);
  $vars['data'] = $data_string;
  $vars['classes_array'][] = 'dexp-piechart';
  $vars['theme_hook_suggestions'][] = 'shortcode__piechart';
}

function dexp_shortcodes_piechart_tips($format, $long) {
  $output = "[piechart title='' data='']Content[/piechart]";
  return $output;
}