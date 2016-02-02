<script type="text/javascript" src="https://www.google.com/jsapi"></script>
<script type="text/javascript">
google.load("visualization", "1", {packages:["corechart"]});
google.setOnLoadCallback(drawChart);
function drawChart() {
  var data = google.visualization.arrayToDataTable([
	 <?php print $data;?>
  ]);

  var options = {
    title: '<?php print $title; ?>',
    titleTextStyle: { color: <?php print $colors; ?>,},
    colors:[<?php print $colors; ?>],
    backgroundColor: '<?php print $bgcolor; ?>',
    legend: { position: 'bottom',textStyle: {color: '<?php print $hcolor; ?>'}},
    pointSize: 25,
    pointShape: { type: '<?php print $type; ?>'},
    hAxis: {title: '<?php print $htitle; ?>',  titleTextStyle: {color: '<?php print $hcolor; ?>'},  textStyle: {color: '<?php print $hcolor; ?>'}},
    vAxis: {title: '<?php print $vtitle; ?>',  titleTextStyle: {color: '<?php print $vcolor; ?>'},  textStyle: {color: '<?php print $vcolor; ?>'}},
    
  };

  var chart = new google.visualization.AreaChart(document.getElementById('<?php print $chart_id; ?>'));

  chart.draw(data, options);

}
</script>
<div id="<?php print $chart_id; ?>" style="height: 500px;"></div>