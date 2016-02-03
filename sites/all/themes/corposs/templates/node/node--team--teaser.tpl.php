<div id="node-<?php print $node->nid; ?>" class="team-wrap <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="content"<?php print $content_attributes; ?>>              
        <div class="team">
			<div class="team-details">
				<?php print render($content['field_team_image']); ?>
				<div class="teamic_name"><span><?php print $title; ?></span> // <?php print strip_tags(render($content['field_team_position'])); ?></div>
			</div>
            <div class="team-overlay">
				<div class="team-social">                                        
					<ul class="icons-social">
						<?php if(!empty($content['field_team_facebook_link'])):?>
						<li><a class="facebook" href="<?php print render($content['field_team_facebook_link'][0]);?>"><i class="fa fa-facebook"></i></a></li>
						<?php endif;?>
						<?php if(!empty($content['field_team_twitter_link'])):?>
						<li><a class="twitter" href="<?php print render($content['field_team_twitter_link'][0]);?>"><i class="fa fa-twitter"></i></a></li>
						<?php endif;?>
						<?php if(!empty($content['field_team_google_plus_link'])):?>
						<li><a class="gplus" href="<?php print render($content['field_team_google_plus_link'][0]);?>"><i class="fa fa-google-plus"></i></a></li>
						<?php endif;?>
						<?php if(!empty($content['field_team_linkedin_link'])):?>
						<li><a class="linkedin" href="<?php print render($content['field_team_linkedin_link'][0]);?>"><i class="fa fa-linkedin"></i></a></li>
						<?php endif;?>
						<?php if(!empty($content['field_team_youtube_link'])):?>
						<li><a class="linkedin" href="<?php print render($content['field_team_youtube_link'][0]);?>"><i class="fa fa-youtube"></i></a></li>
						<?php endif;?>
					</ul>
				</div>
				<div class="team-content"><?php print render($content['body']); ?></div>
				<div class="teamic_url"><a href="<?php print strip_tags(render($content['field_team_website']));?>"><?php print strip_tags(render($content['field_team_website']));?></a></div>
            </div>
            <div class="clearfix"></div>
        </div>
    </div>
</div> 
