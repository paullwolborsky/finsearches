Drupal.fin_modals = Drupal.fin_modals || {};

/**
 * Attach related popup behavior.
 */
(function($) {
  'use strict';

  Drupal.behaviors.fin_modals = {
    popupClose: function() {
      $('div.ctools-modal-content a.close').click();
      $('body').removeClass('popup-triggered');
    },

    emailPopupClose: function() {
      $('div.ctools-modal-content a.close').click();
      $('body').removeClass('email-popup-triggered');
    },

    initializeEmailPopup: function($body) {
      $body.addClass('email-popup-triggered');
      $.cookie('email', 1, { path: '/' });

      var $emailPopup = $('#modalContent');

      $emailPopup.find('.modal-header').show();

      $emailPopup.find('.lysse_email_direct_close').click(function() {
        Drupal.behaviors.fin_modals.emailPopupClose();
      });

      var $label = $emailPopup.find('label').hide();
      $emailPopup.find('.form-text').attr('placeholder', $label.text());
    },

    attach: function(context) {
      $('.lysse_email_direct_close').click(function(){
        $('.ctools-modal-content .close').trigger('click');
      });
      
      //See if the user has visited before
      //This logic got a little weird because ctools seems to refresh the page
      var $body = $('body');
      var popupDuration = Drupal.settings.lysse_rp_recently_viewed.popupDuration;

      if ($.cookie('popup') !== null) {
        $.cookie('popup', parseInt($.cookie('popup')) + 1);
      }

      if ($body.hasClass('front')) {
        if ($.cookie('popup') === null) {
          $('a.lysse-popup-link').click();
          $body.addClass('popup-triggered');
          setTimeout(function() {
            Drupal.behaviors.fin_modals.popupClose();
          }, parseInt(popupDuration) * 1000);
          $.cookie('popup', 1, { path: '/' });
        } else {
          if ($.cookie('popup') === 3 && $.cookie('email') !== 1) {
            $(window).bind('load', function() {
              $('#hidden-email-modal-link a').click();
            });
            $body.addClass('manual-cart-redirect');
            Drupal.behaviors.fin_modals.initializeEmailPopup($body);
            
          }
        }
      }
      else {
        if ($.cookie('email') === null) {
          $('#hidden-email-modal-link a').click();
          $body.addClass('manual-cart-redirect');
          Drupal.behaviors.fin_modals.initializeEmailPopup($body);
        }
      }

    }
  };

})(jQuery);
