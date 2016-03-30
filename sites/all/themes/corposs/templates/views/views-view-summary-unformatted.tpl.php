<?php

/**
 * @file
 * Default simple view template to display a group of summary lines.
 *
 * This wraps items in a span if set to inline, or a div if not.
 *
 * @ingroup views_templates
 */

  $current_view = views_get_current_view();
  $current_display = $current_view->current_display;
  //Change "all" link based on current display
  switch ($current_display) {
    case 'attachment_1':
      $href = '/plans/all';
      break;
    case 'attachment_2':
      $href = '/plans/plan-contacts/all';
      break;
    case 'attachment_5':
      $href = '/consultants/all';
      break;
    case 'attachment_7':
      $href = '/consultants/consultant-contacts/all';
      break;
    case 'attachment_4':
      $href = '/managers/all';
      break;
    case 'attachment_6':
      $href = '/news/all';
      break;
  }
?>
<span class="views-summary views-summary-unformatted"><a href='<?php print $href ?>'>All</a></span>&nbsp;|&nbsp;
<?php foreach ($rows as $id => $row): ?>
  <?php print (!empty($options['inline']) ? '<span' : '<div') . ' class="views-summary views-summary-unformatted">'; ?>
    <?php if (!empty($row->separator)) { print $row->separator; } ?>
    <a href="<?php print $row->url; ?>"<?php print !empty($row_classes[$id]) ? ' class="' . $row_classes[$id] . '"' : ''; ?>><?php print $row->link; ?></a>
    <?php if (!empty($options['count'])): ?>
      (<?php print $row->count; ?>)
    <?php endif; ?>
  <?php print !empty($options['inline']) ? '</span>' : '</div>'; ?>
<?php endforeach; ?>
