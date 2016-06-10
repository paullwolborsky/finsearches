/* This is the hackiest part of Fubik;
 * add classes via JS to facilitate theming some links which, inexplicably
 * don't have any meaningful classes.
 */

(function($){
  // Use strict mode to reduce development errors.
  // @link http://www.nczonline.net/blog/2012/03/13/its-time-to-start-using-javascript-strict-mode/
  //"use strict";
  Drupal.fubik = Drupal.fubik || {};
    
  Drupal.fubik.updateManaged = function (context) {
    var accountSize = 0 || $('#edit-field-account-size input').val();
    $('#edit-field-managed-amount').find('input').prop('readonly', true);
    if ($('#edit-field-managed-amount').find('input').val() != accountSize) {
      $('#edit-field-managed-amount').find('input').css({color: 'red'});
    } else {
      $('#edit-field-managed-amount').find('input').css({color: 'green'});
    }
    var managedTotal = 0;
    $("#edit-field-managers-hired table.field-multiple-table tr.draggable div[id^='edit-field-managers-hired'].field-type-number-integer input").each(function(){
      if ($(this).val() != '') {
        managedTotal = managedTotal + parseInt($(this).val());
      }
    });
    $('#edit-field-managed-amount input').val(managedTotal);
    if ($('#edit-field-managed-amount').find('input').val() != accountSize) {
      $('#edit-field-managed-amount').find('input').css({color: 'red'});
    } else {
      $('#edit-field-managed-amount').find('input').css({color: 'green'});
    }
  };

  Drupal.behaviors.fubik = {
    attach: function(context, settings) {

      var $body = $('body', context);
      $('.view-display-id-eva_mandate_history_edit .view-content > table').wrap("<form action='" + window.location.href  + "' method='post' id='editableviews-entity-form-comment-views' accept-charset='UTF-8'></form>");
      
      if ($body.hasClass('page-admin-content-webform')) {
        $('#block-system-main', context).find('table.sticky-enabled').find('td').each(function() {
          var $link = $(this).find('a'),
          href = $link.attr('href');

          if (href.indexOf('analysis', 0) > 0) {
            $link.addClass('action-analyze');
          }
          else if (href.indexOf('table', 0) > 0) {
            $link.addClass('action-table');
          }
          else if (href.indexOf('download', 0) > 0) {
            $link.addClass('action-export');
          }
          else if (href.indexOf('edit', 0) > 0) {
            $link.addClass('action-edit');
          }
          else if (href.indexOf('clear', 0) > 0) {
            $link.addClass('action-delete');
          }
          else if (href.indexOf('webform-results', 0) > 0) {
            $link.addClass('action-view');
          }
        });
      }
      
      /**
       *Update the asset allocation total field with the sum of all the percentage fields
       */
      $("#edit-field-asset-allocation-history table tr.draggable").each(function(){
        $(this).find('.field-name-field-allocation-total').find('input').prop('readonly', true);
        if ($(this).find('.field-name-field-allocation-total').find('input').val() != 100) {
          $(this).find('.field-name-field-allocation-total').find('input').css({color: 'red'});
        } else {
          $(this).find('.field-name-field-allocation-total').find('input').css({color: 'green'});
        }
        
        $("div[id^='allocations']").on('keyup', 'input', function(){
          var $currentBlock = $(this).parents("div[id^='allocations']");
          var $total = $currentBlock.find('.field-name-field-allocation-total').find('input');
          var total = 0;
          $currentBlock.find(".field-type-number-decimal input").each(function(){
            if ($(this).val() != 0) {
              total = total + parseFloat($(this).val());
            }
          });
          //Default red
          $total.val(total);
          $total.css({color: 'red'});
          if (total == 100) {
            $total.css({color: 'green'});
          }
        });
      })
      
      /**
       *Update the total managed amount with the sum of the individual manager amounts
       */
      Drupal.fubik.updateManaged(context);
      $("#edit-field-managers-hired table.field-multiple-table tr.draggable div[id^='edit-field-managers-hired'].field-type-number-integer").on('keyup', 'input', function(){
        Drupal.fubik.updateManaged(context);      
      });
      
      $('.view-id-user_management table td.views-field-metadata-property-editable-2 select').each(function(){
        $(this).prop('multiple', true);
        $(this).chosen('destroy').chosen();
      });
    }
  };
})(jQuery, Drupal);