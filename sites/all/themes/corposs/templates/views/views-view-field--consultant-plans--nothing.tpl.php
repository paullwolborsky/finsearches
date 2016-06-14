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
  global $user;
  $now = time();
  $task_sql = "
  SELECT mf.id, mt.* from mytinytodo_fields mf
  INNER JOIN mytinytodo_lists ml ON mf.id=ml.field_id
  INNER JOIN mytinytodo_todos mt ON ml.id=mt.list_id
  WHERE mt.uid=:uid AND entity_id=:nid ORDER BY mt.duedate DESC LIMIT 1";
  $result = db_query($task_sql, array(':uid' => $user->uid, ':nid' => $row->node_field_data_field_plan_er_nid));
  $replace = 'fa-list-alt';
  if ($result) {
    while($task = $result->fetchObject()) {
      if (strtotime($task->duedate) < $now && $task->d_completed != '') {
        $replace = 'fa-list-alt task-overdue';
      } elseif ($task->d_completed != '') {
        $replace = 'fa-list-alt task-in-progress';
      }
    }
  }
  $output = str_replace('fa-list-alt', $replace, $output);
?>
<?php if (user_access('create tasks')): ?>
<?php print $output; ?>
<?php endif;?>