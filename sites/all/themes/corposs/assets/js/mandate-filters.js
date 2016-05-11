/**
 *js file for mandate custom date ranges
 */
(function($, Drupal){
  Drupal.behaviors.mandateFilters = {
    attach: function(context, settings) {
      var now = new Date();
      currentMonth = now.getMonth()+1;
      html = "<div id='date-presets-wrapper'><select id='preset-dates'>";
        html += "<option selected>Preset Dates</option>";
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
      html += "</select></div>";
      $('#edit-field-date-value-max-wrapper').parent('.fieldset-wrapper').once('dates', function(){
        $wrapper = $('#edit-field-date-value-max-wrapper').parent('.fieldset-wrapper');
        if ($('#edit-field-date-value-max-wrapper').parent('.fieldset-wrapper').find('#preset-dates').length) {
          $wrapper.find('#preset-dates').change(function(){
            newDate = getDate($wrapper.find('#preset-dates option:selected').text())[0];
            $('#edit-field-date-value-min input').val(newDate);
            endDate = getDate($wrapper.find('#preset-dates option:selected').text())[1];
            $('#edit-field-date-value-max input').val(endDate);
          });
        } else {
          $wrapper.append(html);
          $wrapper.find('#preset-dates').change(function(){
            newDate = getDate($wrapper.find('#preset-dates option:selected').text())[0];
            $('#edit-field-date-value-min input').val(newDate);
            endDate = getDate($wrapper.find('#preset-dates option:selected').text())[1];
            $('#edit-field-date-value-max input').val(endDate);
          });
        }
      });
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