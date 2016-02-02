<div id="node-<?php print $node->nid; ?>" class="blog-teaser <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<div class="blog-image">
		<a href="<?php print $node_url; ?>"><?php print render($content['field_media']);?></a>
	</div>
	<?php print render($title_prefix); ?>
		<h3 class="blog-title" <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
	<?php print render($title_suffix); ?>  
	<div class="blog-meta">
		<span class="time"><?php print format_date($created, 'long'); ?></span>
		<span class="by-author"> 
			<?php print t('Written by'); ?> <span class="author vcard"><span class="fn n"><?php print $name; ?></span></span>
		</span>
	</div>
	<div class="blog-content">
		<?php print render($content['body']);?>
	</div>
	<div class="blog-category">
		<span><?php print t('Published in');?></span> <?php print render($content['field_categories']); ?>
	</div>
	<?php if(!empty($content['field_tags'])) : ?>
	<div class="blog-tags">
		<span><?php print t('Tagged under');?></span> <?php print render($content['field_tags']); ?>
	</div>
	<?php endif; ?>
	<p class="readmore"><a href="<?php print $node_url; ?>"><?php print t('Read more'); ?></a></p>
</div>
