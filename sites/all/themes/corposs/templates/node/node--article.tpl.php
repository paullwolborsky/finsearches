<div id="node-<?php print $node->nid; ?>" class="blog-detail <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<div class="blog-image">
		<?php print render($content['field_media']);?>
	</div>
	<?php print render($title_prefix); ?>
		<h3 class="blog-title" <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
	<?php print render($title_suffix); ?>  
	<div class="blog-meta">
		<ul>
			<li><i class="fa fa-user"></i> <?php print $name; ?></li>
			<li><i class="fa fa-file-o"></i> <?php print render($content['field_categories']); ?></li>
			<li><i class="fa fa-clock-o"></i> <?php print format_date($created, 'custom', 'd F Y'); ?></li>
		</ul>
	</div>
	<div class="blog-content">
		<?php print render($content['body']);?>
	</div>
</div>
<div class="social">
<?php print render($content['field_rating']); ?>
</div>
<div class="comments-form">
	<?php print render($content['comments']); ?>
</div>