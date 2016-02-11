<div class="testimonial-wrap">
	<div class="testimonial-inner">
		<div class="col-sm-3 client-image">
			<?php print render($content['field_image']); ?>
		</div>
		<div class="col-sm-9 blockquote">
			<div class="testimonial-content">
				<?php print render($content['body']); ?>
			</div>
			<div class="media testimonial-author" style="margin-top:5px">
				<div class="author_name">
					<strong><?php print strip_tags(render($content['field_client'])); ?></strong> / <?php print strip_tags(render($content['field_job_title'])); ?>
					<br>
					<a href="<?php print strip_tags(render($content['field_client_url'])); ?>"><?php print strip_tags(render($content['field_client_url'])); ?></a>
				</div>
			</div>
		</div>
	</div>
</div>
