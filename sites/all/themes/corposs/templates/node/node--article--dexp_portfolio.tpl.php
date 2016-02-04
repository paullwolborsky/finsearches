<div class="dexp-bxslider-gallery" data-title="<?php print $title; ?>" data-date="<?php print format_date($created, 'long'); ?>">
	<?php print render($content['field_media']); ?>
	<div class="description">
		<h4 class="title"><a target="_parent" title="<?php print $title; ?>" href="<?php print $node_url; ?>"><?php print $title; ?></a></h4>
		<?php print render($content['body']); ?>
	</div>
</div>