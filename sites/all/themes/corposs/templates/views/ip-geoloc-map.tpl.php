<?php
/**
 * @file
 * ip-geoloc-map.tpl.php
 *
 * This template is used to output a map of marker locations taken from a view.
 *
 * Variables available:
 * - $view: the view object, if needed
 * - $locations: array of locations each with lat/long coordinates and balloon
 *   texts; the map will normally be auto-centered on the visitor's current
 *   location, however, if not requrested or not found the first location in
 *   the array will be used to center the map
 * - $div_id: id of the div in which the map will be injected, arbitrary but
 *   must be unique
 * - $map_options: passed to Google Maps API, for example
 *    '{"mapTypeId":"roadmap", "zoom": 10}'
 * - $map_style: CSS style string, like 'height: 200px; width: 500px'
 * - $marker_color: name in English of the color used for all location markers
 *   that do not have their color overridden via the differentiator field
 * - $visitor_marker: FALSE for no marker, TRUE for standard marker or
 *     'RRGGBB' colour code
 * - $center_option, one of:
 *   0: fixed center, provided thorugh "centerLat", "centerLng" in $map_options
 *   1: auto-center the map on the first location in the $locations array
 *   2: auto-center the map on the visitor's current location
 * - $center_latlng, array of latitude and longitude based on IP lookup,
 *     applies only when $visitor_marker is set or $center_option == 2 and
 *     location could not be determined or $visitor_location_gps == FALSE
 * - $visitor_location_gps, whether HTML5-style location provider is to be
 *     used; applies only when $visitor_marker is set or $center_opiton == 2;
 *     if FALSE $center_latlng is used
 */
$num = count($view->style_plugin->rendered_fields);
?>
<div class="ip-geoloc-map view-based-map">
  <?php echo ip_geoloc_output_map_multi_location($locations, $div_id, $map_options,
          $map_style, $marker_color, $visitor_marker, $center_option, $center_latlng, $visitor_location_gps);
  ?>
</div>
<?php if ($view->current_display === 'map_search' && $num > 0) : ?>
<div class="ip-geoloc-table">
<table class="ip-geoloc-map-table views-table cols-5">
  <thead><tr><th class="views-field">Name</th><th class="views-field">Address</th class="views-field"><th>Type</th><th>Size</th><th>Plan Type</th></tr></thead><tbody>
  <?php foreach ($view->style_plugin->rendered_fields as $key => $wrow) : 
    $rowu = $view->result[$key];
    if ($rowu->field_field_plan_type_tr) {
      $pt = $rowu->field_field_plan_type_tr[0]['rendered']['#markup'];
    }
    else {
      $pt = 'n/a';
    }
    $row_class = 'class = "';
    $row_class .= ($key % 2 == 0) ? 'odd' : 'even';
    $row_class .= '"'
  ?>
  <tr <?php print $row_class; ?>>
    <td><?php print $wrow['field_consultant_firm_er'] . '<br>'; ?><?php print (strpos($wrow['field_content_type_human_tr'],'Consultant Office') === FALSE) ? $wrow['title_field'] : strip_tags($wrow['title_field']) . ' Office'; ?></td>
    <td><?php print $wrow['field_address']; ?></td>
    <td><?php print $wrow['field_content_type_human_tr']; ?></td>
    <td><?php print $wrow['nothing_1']; ?></td>
    <td><?php print $pt; ?></td>
  </tr>
  <?php endforeach; ?>
</tbody></table>
</div>
<?php endif; ?>
