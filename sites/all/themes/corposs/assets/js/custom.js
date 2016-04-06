(function($, Drupal){
  Drupal.behaviors.corposs = {
    attach: function(context, settings) {
      $('.block-facetapi .block-title').click(function(){
        if ($(this).siblings('.content').css('display') == 'none') {
          $(this).siblings('.content').show();
        } else {
          $(this).siblings('.content').hide();
        }
      });
      $('.block-facetapi .content ul li a.facetapi-active').parents('.block-facetapi .content').addClass('open');
      
      //Pie charts for plans
      if ($('.sidebar-pie-chart .views-field').length) {
        google.load("visualization", "1", {packages:["corechart"]});
        var data = new google.visualization.DataTable();
        data.addColumn('string', 'Label');
        data.addColumn('number', 'Value');
        $('.sidebar-pie-chart .views-field').each(function(){
          data.addRow([$(this).find('.views-label').html(), parseFloat($(this).find('.field-content').html())]);
        });
        var options = {
          is3D: false,
          chartArea: {left:0,top:10, width: '100%', height:'90%'},
          legend: {position: 'none'},
          tooltip: {text:'percentage'}
        };
        $('.sidebar-pie-chart').html("<div id='aa-chart'></div>");
        var chart = new google.visualization.PieChart(document.getElementById('aa-chart'));
        chart.draw(data, options);
      }
      
      //Hide search results until something happens
      if ($('.block-facetapi .content ul li a.facetapi-active').length) {
        if ($('.view-views-search .view-content').css('display') == 'none') {
          $('.view-views-search .view-content').show();
          $('.view-views-search .pager').show();
          $('.view-views-search .view-footer').hide();
        }
      }
      if ($('.view-views-search .views-exposed-form #edit-title').val() != '' || $('.view-views-search .views-exposed-form #edit-title').val()) {
        if ($('.view-views-search .view-content').css('display') == 'none') {
          $('.view-views-search .view-content').show();
          $('.view-views-search .pager').show();
          $('.view-views-search .view-footer').hide();
        }
      }
      
      //Add save search trigger button
      if (!$('.view-content-lists .view-filters .my-views-filter-submit').parent('.fieldset-wrapper').find('#save-search-trigger').length) {
       $('.view-content-lists .view-filters .my-views-filter-submit').parent('.fieldset-wrapper').append("<button id='save-search-trigger'>Save Search</button>");
      }
      //See views_save.js for hiding the trigger button after form submit
      $('.view-content-lists .view-filters #save-search-trigger').click(function(){
        $('#edit-save.views-save-button-save').trigger('click');
        return false;
      });
      
      //Make links work in recent content view 
      $('.view-display-id-recent_content_sidebar .view-content .views-row .field-content a').click(function(){
        window.location = jQuery(this).attr('href');
        return false;
      });
      
      //Trigger focus and blur on plan contact modals.
      //I can't believe this actually works.
      if ($('#modalContent').length) {
        $('#edit-field-job-history-und-0-field-plan-er-und-0-target-id').focus();
        $('#edit-title-field-und-0-value').focus();
      }
      
      //Add a 'title' to the saved searches page
      $('body.page-user-saved-searches #block-system-main').before('<h3 id="saved-searches-header" class="block-title collapsiblock"><span>Advanced Saved Searches</span></h3>');
      $('body.page-user-saved-searches .action-links').hide();
    }
  };
})(jQuery, Drupal);