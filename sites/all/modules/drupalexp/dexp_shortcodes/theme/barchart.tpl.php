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
    vAxis: {title: <?php print $vtitle; ?>, titleTextStyle: {color: '#ddd'}},
    <?php if(!empty($colors)) : ?>
      colors:[<?php print $colors; ?>],
    <?php endif; ?>
    legend: { position: 'bottom' },
    bar: {groupWidth: '<?php print $width; ?>'},
    isStacked: <?php print $stack; ?>
  };

  var chart = new google.visualization.BarChart(document.getElementById('<?php print $chart_id; ?>'));

  chart.draw(data, options);

}
</script>
<div id="<?php print $chart_id; ?>" style="height: 500px;"></div>