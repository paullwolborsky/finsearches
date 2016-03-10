<?php
/**
 * @file
 * fs_f_base.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function fs_f_base_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'modal_contact_link';
  $ds_field->label = 'Modal Contact Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
global $user;
if (user_has_role(5) || $user->uid == 1) {
$nid = [node:nid];
$type = \'[node:type]\';
if ($type == \'consultant_firm\') {
  $type= \'consultant\';
} elseif ($type == \'plan\') {
  $type = \'plan\';
}
print ctools_modal_text_button(\'Create new \' . $type . \' contact\', \'modal-front/nojs/add/contact/\' . [node:nid] . \'/\' . $type . \'-contact\', \'Create new \' . $type . \' contact\', \'ctools-modal-fin-modals-contact-style\');
}
?>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['modal_contact_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'modal_mandate_link';
  $ds_field->label = 'Modal Mandate link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
global $user;
if (user_has_role(5) || $user->uid == 1) {
print ctools_modal_text_button(\'Create new mandate\', \'modal-front/nojs/add/mandate/\' . [node:nid] . \'/plan-mandate\', \'Create new mandate\', \'ctools-modal-fin-modals-contact-style\');
}
?>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['modal_mandate_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'modal_office_link';
  $ds_field->label = 'Modal Office Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
global $user;
if (user_has_role(5) || $user->uid == 1) {
$nid = [node:nid];
print ctools_modal_text_button(\'Create new office\', \'modal-front/nojs/add/office/\' . [node:nid] . \'/consultant-office\', \'Create new office\', \'ctools-modal-fin-modals-contact-style\');
}
?>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['modal_office_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'modal_plan_link';
  $ds_field->label = 'Modal Plan link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
global $user;
if (user_has_role(5) || $user->uid == 1) {
$type = \'[node:type]\';
if ( $type == \'consultant_firm\'){
  $arg = \'consultant-plan\';
} elseif($type == \'manager_firm\') {
  $arg = \'manager-plan\';
}
print ctools_modal_text_button(\'Create new plan\', \'modal-front/nojs/add/plan/\' . [node:nid] . "/" . $arg, \'Create newplan\', \'ctools-modal-fin-modals-contact-style\');
}
?>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['modal_plan_link'] = $ds_field;

  return $export;
}
