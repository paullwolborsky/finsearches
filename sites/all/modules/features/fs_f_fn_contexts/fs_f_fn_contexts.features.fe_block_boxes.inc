<?php
/**
 * @file
 * fs_f_fn_contexts.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fs_f_fn_contexts_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Resources saved searches';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'resources_saved_searches';
  $fe_block_boxes->body = '<?php
global $user;
module_load_include(\'inc\', \'search_api_saved_searches\', \'search_api_saved_searches.pages\');
print drupal_render(search_api_saved_searches_user_listing($user));
print "<div class=\'resources-link\'>" . l(\'Go to saved searches\',\'user/\' . $user->uid . \'/saved-searches\',array()) . "</div>";
?>
';

  $export['resources_saved_searches'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Resources subscriptions block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'resources_subscriptions';
  $fe_block_boxes->body = '<?php
global $user;
module_load_include(\'inc\', \'subscriptions\', \'subscriptions.admin\');
print drupal_render(subscriptions_content_page_node(array(), $user->uid));
print "<div class=\'resources-link\'>" . l(\'Go to Subscriptions page\',\'user/\' . $user->uid . \'/subscriptions/node\',array()) . "</div>";
?>';

  $export['resources_subscriptions'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site Name';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'site_name';
  $fe_block_boxes->body = '<h2>FIN Searches</h2>
';

  $export['site_name'] = $fe_block_boxes;

  return $export;
}
