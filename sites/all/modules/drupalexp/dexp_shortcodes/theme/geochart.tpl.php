<script type="text/javascript" src="https://www.google.com/jsapi"></script>
<script type="text/javascript">
	google.load("visualization", "1", {packages:["corechart"]});
	google.setOnLoadCallback(function(){
		var data = google.visualization.arrayToDataTable([
			<?php print $data;?>
		]);

		var options = {region: 'world',
        displayMode: 'regions',
        colorAxis: {colors: ['#69bd43']}
    };

		var geochart = new google.visualization.GeoChart(document.getElementById('<?php print $chart_id;?>'));
		geochart.draw(data, options);
		if (window.addEventListener) {
			window.addEventListener('resize', function(){geochart.draw(data, options);}, false);
		}
		else if (window.attachEvent) {
			window.attachEvent('onresize', function(){geochart.draw(data, options);});
		}
});
</script>
<div id="<?php print $chart_id;?>" style="height: 500px;"></div>