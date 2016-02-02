<script type="text/javascript" src="https://www.google.com/jsapi"></script>
<script type="text/javascript">
	google.load("visualization", "1", {packages:["corechart"]});
	google.setOnLoadCallback(function(){
		var data = google.visualization.arrayToDataTable([
			<?php print $data;?>
		]);

		var options = {
			title: '<?php print $title;?>',
			legend: 'true',
			is3D: 'true',
			pieSliceText: '',
			colors:['#69bd43','#6576c2','#cc2149','#ff804e','#008dff', '#a16a2a'],
			slices: {  1: {offset: 0.2},
								2: {offset: 0.2},
								3: {offset: 0.2},
			},
		};

		var piechart = new google.visualization.PieChart(document.getElementById('<?php print $chart_id;?>'));
		piechart.draw(data, options);
		if (window.addEventListener) {
			window.addEventListener('resize', function(){piechart.draw(data, options);}, false);
		}
		else if (window.attachEvent) {
			window.attachEvent('onresize', function(){piechart.draw(data, options);});
		}
});
</script>
<div id="<?php print $chart_id;?>" style="height: 500px;"></div>