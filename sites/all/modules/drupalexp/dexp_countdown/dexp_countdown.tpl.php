<?php

print '<div id="dexp_countdown"></div>'; //wrapper display countdown


print '<div class="dexp-countdown-url">'.$event_name.'</div>';


print <<<___EOS___
<script type="text/javascript"><!--
  jQuery(document).ready(function($){
	$('#dexp_countdown').countdown('$timestamp', function(event) {
		$(this).html(event.strftime('$str_format'));
	});
  });
// --></script>
___EOS___;
