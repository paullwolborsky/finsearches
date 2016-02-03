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
    curveType: 'function',
  	legend: { position: 'bottom', textStyle: {color: '<?php print $color;?>'} },
    titleTextStyle: { color: '<?php print $color;?>',},
    <?php if($type != "none") : ?>
    pointSize: 25,
  	pointShape: { type: '<?php print $type; ?>'},
    <?php endif; ?>
    backgroundColor: '<?php print $bgcolor; ?>',
    hAxis: {title: '', textStyle:{color: '<?php print $color;?>'}},
    vAxis: {title: '', textStyle:{color: '<?php print $color;?>'}},
  };

  var chart = new google.visualization.LineChart(document.getElementById('<?php print $chart_id; ?>'));
  chart.draw(data, options);
}
</script>
<div id="<?php print $chart_id; ?>" style="height: 500px;"></div>
