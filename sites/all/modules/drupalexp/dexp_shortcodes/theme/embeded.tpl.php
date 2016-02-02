<!--DRUPAL NO CACHE-->
<?php 
  if ($view_name != '') {
    print views_embed_view($view_name,$block_id); 
  } else {
    if ($module_name != '') {
      $block = block_load($module_name, $block_id);
      $block_render = _block_render_blocks(array($block));
      $block_render_array = _block_get_renderable_array($block_render);
      $output = drupal_render($block_render_array);
      print $output;
    }
  }