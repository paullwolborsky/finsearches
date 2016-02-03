<div class="blog-slider">
	<?php print render($content['field_media']); ?>
	<div class="item-content">
		<h2 class="item-title"><?php print $title; ?></h2>
		<div class="item-meta">
			<?php print render($content['field_categories']); ?>
			<div class="date">
				<?php print ' / '.format_date($created, 'custom', 'd F Y'); ?>
			</div>
		</div>
		<p class="item-introtext">
		<?php print render($content['body']); ?>
		</p>
		<div class="slide_readmore">
			<a href="<?php print $node_url; ?>" class="readmore"><?php print t('Read More'); ?> <i class="fa fa-align-left"></i></a>
			
			<a href="#" class="purchase"><?php print t('Purchase Now'); ?> <i class="fa fa-arrow-circle-o-down"></i></a>
		</div>
	</div>
</div>