<div class="item <?php if ($sequence == 0) print 'active'; ?>">
<?php if (strpos($path, "public://") !== false) {    $path = file_create_url($uri);} ?><img alt="" src="<?php print $path; ?>"/>
<?php if(!empty($content)) { ?><div class="carousel-caption"><?php print $content; ?></div> <?php } ?>
</div>