<?php
$lead = $row->field_field_lead_plan_contact[0]['raw']['value'];
if ($lead) {
  $leadstr = "<div class='lead-contact'>" . t('Lead') . '</div>';
}
else {
  $leadstr = ' ';
}
print $leadstr;
