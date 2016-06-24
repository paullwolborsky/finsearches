<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
$output = '';
//dd($row);
if (isset($row->field_field_major_minor_style_tr[0]['raw']['tid'])) {
  $tid = $row->field_field_major_minor_style_tr[0]['raw']['tid'];
  $parent = taxonomy_get_parents($tid);
  $parent = reset($parent);
  if (is_object($parent) && isset($parent->name)) {
    $output = $parent->name;
  }
}
?>
<?php print $output; ?>
