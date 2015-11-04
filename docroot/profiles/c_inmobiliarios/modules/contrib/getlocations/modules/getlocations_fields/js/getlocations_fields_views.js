/**
 * @file
 * getlocations_fields_views.js
 * @author Bob Hutchinson http://drupal.org/user/52366
 * @copyright GNU GPL
 *
 * Javascript functions for getlocations_fields module in Views
 * jquery stuff
*/
(function ($) {

  Drupal.behaviors.getlocations_fields_views = {
    attach: function() {

      // streetview plugin
      if ($("#edit-style-options-sv-addresscontrol").is('input')) {
        if ($("#edit-style-options-sv-addresscontrol").attr('checked')) {
          $("#wrap-getlocations-sv-addresscontrol").show();
        }
        else {
          $("#wrap-getlocations-sv-addresscontrol").hide();
        }
        $("#edit-style-options-sv-addresscontrol").change(function() {
          if ($(this).attr('checked')) {
            $("#wrap-getlocations-sv-addresscontrol").show();
          }
          else {
            $("#wrap-getlocations-sv-addresscontrol").hide();
          }
        });
      }
      if ($("#edit-style-options-sv-pancontrol").is('input')) {
        if ($("#edit-style-options-sv-pancontrol").attr('checked')) {
          $("#wrap-getlocations-sv-pancontrol").show();
        }
        else {
          $("#wrap-getlocations-sv-pancontrol").hide();
        }
        $("#edit-style-options-sv-pancontrol").change(function() {
          if ($(this).attr('checked')) {
            $("#wrap-getlocations-sv-pancontrol").show();
          }
          else {
            $("#wrap-getlocations-sv-pancontrol").hide();
          }
        });
      }
      if ($("#edit-style-options-sv-zoomcontrol").is('select')) {
        if ($("#edit-style-options-sv-zoomcontrol").val() == 'none') {
          $("#wrap-getlocations-sv-zoomcontrol").hide();
        }
        else {
          $("#wrap-getlocations-sv-zoomcontrol").show();
        }
        $("#edit-style-options-sv-zoomcontrol").change(function() {
          if ($(this).val() == 'none') {
            $("#wrap-getlocations-sv-zoomcontrol").hide();
          }
          else {
            $("#wrap-getlocations-sv-zoomcontrol").show();
          }
        });
      }

    }
  };

})(jQuery);
