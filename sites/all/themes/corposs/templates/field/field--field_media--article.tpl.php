<?php
/**
* @file field.tpl.php
* Default template implementation to display the value of a field.
*
* This file is not used and is here as a starting point for customization only.
* @see theme_field()
*
* Available variables:
* - $items: An array of field values. Use render() to output them.
* - $label: The item label.
* - $label_hidden: Whether the label display is set to 'hidden'.
* - $classes: String of classes that can be used to style contextually through
* CSS. It can be manipulated through the variable $classes_array from
* preprocess functions. The default values can be one or more of the
* following:
* - field: The current template type, i.e., "theming hook".
* - field-name-[field_name]: The current field name. For example, if the
* field name is "field_description" it would result in
* "field-name-field-description".
* - field-type-[field_type]: The current field type. For example, if the
* field type is "text" it would result in "field-type-text".
* - field-label-[label_display]: The current label position. For example, if
* the label position is "above" it would result in "field-label-above".
*
* Other variables:
* - $element['#object']: The entity to which the field is attached.
* - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
* - $element['#field_name']: The field name.
* - $element['#field_type']: The field type.
* - $element['#field_language']: The field language.
* - $element['#field_translatable']: Whether the field is translatable or not.
* - $element['#label_display']: Position of label display, inline, above, or
* hidden.
* - $field_name_css: The css-compatible field name.
* - $field_type_css: The css-compatible field type.
* - $classes_array: Array of html class attribute values. It is flattened
* into a string within the variable $classes.
*
* @see template_preprocess_field()
* @see theme_field()
*
* @ingroup themeable
*/
?>
<?php if(count($items) <= 1):?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
<?php if (!$label_hidden): ?>
<div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
<?php endif; ?>
<div class="<?php print $classes; ?>"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
<div class="field-item <?php print $delta == 0?'active':'';?> <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>
	<?php if($item['#file']->type == "video") : ?>
		<?php
			$rel = 'lightframe[' . drupal_html_id('video') . ']';
			$video = explode('//v/', $item['#file']->uri);
			$path = "//www.youtube.com/embed/".$video[1];
		?>
		<a href="<?php print $path; ?>" rel="<?php print $rel; ?>" title="">
			<?php print render($item); ?>
			<div class="video-overlay">
				<i class="fa fa-play"></i>
			</div>
		</a>
	<?php else : ?>
		<?php print render($item); ?>
	<?php endif; ?>
</div>
<?php endforeach; ?>
</div>
</div>
<?php else:?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
<?php if (!$label_hidden): ?>
<div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
<?php endif; ?>
<?php $carousel_id = drupal_html_id('dexp_carousel');?>
<div id="<?php print $carousel_id;?>" class="carousel slide dexp_carousel <?php print $classes; ?>">
<div class="carousel-inner">
    <?php foreach ($items as $delta => $item): ?>
<div class="item field-item <?php print $delta == 0?'active':'';?>">
	<?php if($item['#file']->type == "video") : ?>
		<?php
			$rel = 'lightframe[' . drupal_html_id('video') . ']';
			$video = explode('//v/', $item['#file']->uri);
			$path = "//www.youtube.com/embed/".$video[1];
		?>
		<a href="<?php print $path; ?>" rel="<?php print $rel; ?>" title="">
			<?php print render($item); ?>
			<div class="video-overlay">
				<i class="fa fa-play"></i>
			</div>
		</a>
	<?php else : ?>
		<?php print render($item); ?>
	<?php endif; ?>
</div>
<?php endforeach; ?>
    </div>
    <!-- Controls -->
    <a class="left carousel-control" href="#<?php print $carousel_id;?>" role="button" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#<?php print $carousel_id;?>" role="button" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
</div>
</div>
<?php endif;?>