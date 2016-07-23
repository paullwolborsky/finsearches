(function ($) {
  Drupal.behaviors.corposs = {
    attach: function (context, settings) {
      $('.page-search-map-search #edit-items-per-page', context).once(function () {
        $('.page-search-map-search #edit-items-per-page').after("<p class='alert-message'></p>");
      });
      $('.page-search-map-search #edit-items-per-page').change(function() {
        $('.page-search-map-search p.alert-message').remove();
        var selecteditems = $(this).find('option:selected').val();
        if (selecteditems == '500' || selecteditems == 'All') {
          $('.page-search-map-search #edit-items-per-page').after("<p class='alert-message'>please be patient, or refine search criteria</p>");
        }
      });

      $('#use-ajax-select-filter').bind('change', function() {
        var ajaxURL = $(this).find('option:selected').val();
        var base = $(this).attr('id'),
          element_settings = {
            url: '/' + ajaxURL,
            event: 'click',
            progress: {
              type: 'throbber'
            }
          }
        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
        $(this).click();
      });
    }
  };
})(jQuery);

