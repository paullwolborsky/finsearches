<div id="node-<?php print $node->nid; ?>" class="dexp-portfolio <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<div class="dexp-portfoliop-item">
		<div class="portfolio-image">
			<?php print render($content['field_portfolio_images']); ?>
			<div class="portfolio-effect"></div>
		</div>

		<div class="portfolio-content overlay-mode">
			<h2 class="portfolio-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>

			<div class="portfolio-text"><?php print render($content['body']); ?></div>

			<a class="portfolio-readon" href="<?php print $node_url; ?>"><?php print t('Read More'); ?></a>
		</div>
	</div>
</diV>