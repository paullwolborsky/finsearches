<?php
$lead = $row->field_field_lead_plan_contact[0]['raw']['value'];
if ($lead) {
  $leadstr = t('Lead');
}
else {
  $leadstr = '';
}
?>
<div class='lead-contact'><?php print $leadstr; ?></div>
