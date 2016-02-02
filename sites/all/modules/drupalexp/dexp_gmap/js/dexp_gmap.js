jQuery(document).ready(function($) {
    /* GOOGLE MAP */
    $container=$(".contact-map");
    var $gmaps = $(".gmap-area", $container);
    if ($gmaps.length > 0 && jQuery().goMap && google && google.maps) {
        $gmaps.each(function(index, element) {
            var addr = $gmaps.text(), z = $gmaps.data('zoom'), image=$gmaps.data('image'), title=$gmaps.data('title');
            
            var map = $(this).goMap({
                markers: [{
                        address: addr, /* change your adress here */
                        title: title, /* title information */
                        icon: {
                            //image: Drupal.settings.basePath+'sites/all/modules/drupalexp/modules/dexp_gmap/images/pin_dark_omg.png' /* your custom icon file */
                            image: image /* your custom icon file */
                        }
                    }],
                scrollwheel: false,
                zoom: z,
                maptype: 'ROADMAP'
            });
        });
        var mapResize = false;
        $(window).resize(function(e) {
            if (mapResize) {
                clearTimeout(mapResize);
            }
            mapResize = setTimeout(function() {
                if ($.goMap.getMarkers('markers').length > 0) {
                    $.goMap.map.panTo($.goMap.getMarkers('markers')[0].getPosition());
                }
                ;
            }, 100);
        });
    };
});

