<?php foreach($attrs as $k=>$v):?>
<div class="testimonial-<?php print drupal_html_class($k);?>">
	<?php print $v;?>
</div>
<?php endforeach;?>