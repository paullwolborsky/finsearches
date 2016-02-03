<?php if ($tooltip == ""):?>
<a href="<?php print $link;?>" class="dexp-social-icon <?php print $class;?>"><span><i class="<?php print $icon;?>"></i></span> <?php print $content;?></a>
<?php else: ?>
<a data-placement="bottom" data-toggle="tooltip" title="<?php print $tooltip;?>" href="<?php print $link;?>" class="dtooltip dexp-social-icon <?php print $class;?>"><span><i class="<?php print $icon;?>"></i></span> <?php print $content;?></a>
<?php endif;?>
    
