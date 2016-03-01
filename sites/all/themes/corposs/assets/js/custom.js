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
      if ($('.pie-chart .views-field').length) {
        google.load("visualization", "1", {packages:["corechart"]});
        var data = new google.visualization.DataTable();
        data.addColumn('string', 'Label');
        data.addColumn('number', 'Value');
        $('.pie-chart .views-field').each(function(){
          data.addRow([$(this).find('.views-label').html(), parseFloat($(this).find('.field-content').html())]);
        });
        var options = {
          is3D: false,
          chartArea: {left:10,top:10, width: '100%', height:'90%'},
          legend: {position: 'right',alignment:'top'},
          tooltip: {text:'percentage'}
        };
        $('.pie-chart').html("<div id='aa-chart'></div>");
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
      
      //Add collapsible fielsets to exposed filters
      //$('.view-content-lists .view-filters .views-exposed-form').unwrap('div')
      $('.view-content-lists .view-filters .views-exposed-form', context).wrap("<fieldset class='collapsible'></fieldset>")
      $('.view-content-lists .view-filters .views-exposed-form', context).before("<legend><span class='fieldset-legend'><a class='fieldset-title' href='#'>Filters</a></span></legend>");
      $('.view-content-lists .view-filters .views-exposed-form', context).wrap("<div class='fieldset-wrapper'></div>");
      $('.view-content-lists .view-filters fieldset legend a', context).click(function(){
        $(this).parents('fieldset').toggleClass('collapsed');
      });
      $('.view-content-lists .views-field-field-tasks a.show-tasks').click(function(){
        $(this).next('div.tasks').show();
        return false;
      });
      $('.view-content-lists .views-field-field-tasks .tasks .close').click(function(){
        $(this).parents('div.tasks').hide();
      });
      
      //Make links work in recent content view
      $('.view-display-id-recent_content_sidebar .view-content .views-row .field-content a').click(function(){
        window.location = jQuery(this).attr('href');
        return false;
      });
    }
  };
})(jQuery, Drupal);