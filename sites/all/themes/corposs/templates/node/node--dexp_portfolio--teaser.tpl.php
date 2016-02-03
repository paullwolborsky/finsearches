<div id="node-<?php print $node->nid; ?>" class="dexp-portfolio-teaser <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<div class="portfolio-item-inner">
		<div class="portfolio-thumb">
			<?php print render($content['field_portfolio_images']); ?>
			<?php $uri = $content['field_portfolio_images'][0]['#item']['uri']; 
				$path = file_create_url($uri);
			?>
			<div class="portfolio-overlay">
				<div>
					<a href="<?php print $path; ?>" title="<?php print $title; ?>" rel="lightbox" class="portfolio-preview"><?php print t('Preview');?></a>
					<a href="<?php print $node_url; ?>" class="portfolio-link"><?php print t('More Details'); ?></a>
				</div>
			</div>
		</div>
		<div class="portfolio-item-details">
			<h4 class="item-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h4>
			<div class="portfolio-introtext">
				<?php print render($content['body']); ?>
			</div>
		</div><!--/.portfolio-item-details-->
	</div>
</div>