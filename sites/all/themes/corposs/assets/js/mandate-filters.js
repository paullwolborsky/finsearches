/**
 *js file for mandate custom date ranges
 */
(function($, Drupal){
  Drupal.behaviors.corposs = {
    attach: function(context, settings) {
      var now = new Date();
      currentMonth = now.getMonth()+1;
      html = "<select id='preset-dates'>";
        html += "<option selected>Use Fields</option>";
        html += "<option>Today</option>";
        html += "<option>This Week</option>";
        html += "<option>This Month</option>";
        html += "<option>This Year</option>";
        html += "<option>Last 12 Months</option>";
        html += "<option>1st Quarter</option>";
        if (currentMonth > 3) {
          html += "<option>2nd Quarter</option>";
        }
        if (currentMonth > 6) {
          html += "<option>3rd Quarter</option>";
        }
        if (currentMonth > 9) {
          html += "<option>4th Quarter</option>";
        }
      html += "</select>";
      if ($('#edit-field-date-value-wrapper #preset-dates').length == 0) {
        $('#edit-field-date-value-wrapper').prepend(html);
      } else {
        $('#edit-field-date-value-wrapper #preset-dates').change(function(){
          newDate = getDate($('#edit-field-date-value-wrapper #preset-dates option:selected').text())[0];
          $('#edit-field-date-value-min input').val(newDate)
          endDate = getDate($('#edit-field-date-value-wrapper #preset-dates option:selected').text())[1];
          $('#edit-field-date-value-max input').val(endDate)
        });
      }
      function getDate() {
        start = arguments[0];
        end = arguments[1];
        var startDate = new Date();
        var endDate = new Date();
        currentMonth = startDate.getMonth();
        switch (start) {
          case 'Today':
            break;
          case 'This Week':
            startDate.setDate(startDate.getDate() - startDate.getDay());
            break;
          case 'This Month':
            startDate.setDate(1)
            break;
          case 'This Year':
            startDate.setMonth(0);
            startDate.setDate(1);
            break;
          case 'Last 12 Months':
            thisYear = startDate.getFullYear();
            startDate.setFullYear(thisYear - 1);
            break;
          case '1st Quarter':
            startDate.setMonth(0);
            startDate.setDate(1);
            //Now we need an end date
            endDate.setMonth(3);
            lastDay = endDate.setDate(0);
            endDate.setMonth(2);
            break;
          case '2nd Quarter':
            startDate.setMonth(3);
            startDate.setDate(1);
            //Now we need an end date
            endDate.setMonth(6);
            lastDay = endDate.setDate(0);
            endDate.setMonth(5);
            break;
          case '3rd Quarter':
            startDate.setMonth(6);
            startDate.setDate(1);
            //Now we need an end date
            endDate.setMonth(10);
            lastDay = endDate.setDate(0);
            endDate.setMonth(9);
            break;
          case '4th Quarter':
            startDate.setMonth(9);
            startDate.setDate(1);
            //Now we need an end date
            endDate.setMonth(12);
            lastDay = endDate.setDate(0);
            endDate.setMonth(11);
            break;
        }
        output = [getShortDateString(startDate), getShortDateString(endDate)];
        return output;
      }
      
      function getShortDateString(value) {
        return value.getMonth()+1 + "/" + value.getDate() + "/" + value.getFullYear();
      }
      function getNow() {
        var d = new Date();
        return getShortDateString(d);
      }
      
    }
  };
})(jQuery, Drupal);