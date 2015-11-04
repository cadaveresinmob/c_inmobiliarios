
/**
 * @file
 * getlocations_fields_admin.js
 * @author Bob Hutchinson http://drupal.org/user/52366
 * @copyright GNU GPL
 *
 * Javascript functions for getlocations_fields module admin
 * jquery gee whizzery
*/
(function ($) {
  Drupal.behaviors.getlocations_fields_admin = {
    attach: function() {

      if ($("#edit-getlocations-fields-defaults-use-address,#edit-field-settings-use-address").is('select')) {
        if ($("#edit-getlocations-fields-defaults-use-address,#edit-field-settings-use-address").val() > 0) {
          $("#wrap-input_address_width").show();
        }
        else {
          $("#wrap-input_address_width").hide();
        }
        $("#edit-getlocations-fields-defaults-use-address,#edit-field-settings-use-address").change(function() {
          if ($(this).val() > 0) {
            $("#wrap-input_address_width").show();
          }
          else {
            $("#wrap-input_address_width").hide();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-restrict-by-country,#edit-field-settings-restrict-by-country").is('input')) {
        if ($("#edit-getlocations-fields-defaults-restrict-by-country,#edit-field-settings-restrict-by-country").attr('checked')) {
          $("#getlocations_fields_search_country").show();
        }
        else {
          $("#getlocations_fields_search_country").hide();
        }
        $("#edit-getlocations-fields-defaults-restrict-by-country,#edit-field-settings-restrict-by-country").change( function() {
          if ($("#edit-getlocations-fields-defaults-restrict-by-country,#edit-field-settings-restrict-by-country").attr('checked')) {
            $("#getlocations_fields_search_country").show();
          }
          else {
            $("#getlocations_fields_search_country").hide();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-pancontrol,#edit-field-settings-pancontrol").is('input')) {
        if ($("#edit-getlocations-fields-defaults-pancontrol,#edit-field-settings-pancontrol").attr('checked')) {
          $("#wrap-getlocations-pancontrol").show();
        }
        else {
          $("#wrap-getlocations-pancontrol").hide();
        }
        $("#edit-getlocations-fields-defaults-pancontrol,#edit-field-settings-pancontrol").change(function() {
          if ($(this).attr('checked')) {
            $("#wrap-getlocations-pancontrol").show();
          }
          else {
            $("#wrap-getlocations-pancontrol").hide();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-controltype,#edit-field-settings-controltype").is('select')) {
        if ($("#edit-getlocations-fields-defaults-controltype,#edit-field-settings-controltype").val() == 'none') {
          $("#wrap-getlocations-zoomcontrol").hide();
        }
        else {
          $("#wrap-getlocations-zoomcontrol").show();
        }
        $("#edit-getlocations-fields-defaults-controltype,#edit-field-settings-controltype").change(function() {
          if ($(this).val() == 'none') {
            $("#wrap-getlocations-zoomcontrol").hide();
          }
          else {
            $("#wrap-getlocations-zoomcontrol").show();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-mtc,#edit-field-settings-mtc").is('select')) {
        if ($("#edit-getlocations-fields-defaults-mtc,#edit-field-settings-mtc").val() == 'none') {
          $("#wrap-getlocations-mapcontrol").hide();
        }
        else {
          $("#wrap-getlocations-mapcontrol").show();
        }
        $("#edit-getlocations-fields-defaults-mtc,#edit-field-settings-mtc").change(function() {
          if ($(this).val() == 'none') {
            $("#wrap-getlocations-mapcontrol").hide();
          }
          else {
            $("#wrap-getlocations-mapcontrol").show();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-scale,#edit-field-settings-scale").is('input')) {
        if ($("#edit-getlocations-fields-defaults-scale,#edit-field-settings-scale").attr('checked')) {
          $("#wrap-getlocations-scale").show();
        }
        else {
          $("#wrap-getlocations-scale").hide();
        }
        $("#edit-getlocations-fields-defaults-scale,#edit-field-settings-scale").change(function() {
          if ($(this).attr('checked')) {
            $("#wrap-getlocations-scale").show();
          }
          else {
            $("#wrap-getlocations-scale").hide();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-overview,#edit-field-settings-overview").is('input')) {
        if ($("#edit-getlocations-fields-defaults-overview,#edit-field-settings-overview").attr('checked')) {
          $("#wrap-getlocations-overview").show();
        }
        else {
          $("#wrap-getlocations-overview").hide();
        }
        $("#edit-getlocations-fields-defaults-overview,#edit-field-settings-overview").change(function() {
          if ($(this).attr('checked')) {
            $("#wrap-getlocations-overview").show();
          }
          else {
            $("#wrap-getlocations-overview").hide();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-sv-show,#edit-field-settings-sv-show").is('input')) {
        if ($("#edit-getlocations-fields-defaults-sv-show,#edit-field-settings-sv-show").attr('checked')) {
          $("#wrap-getlocations-sv-show").show();
        }
        else {
          $("#wrap-getlocations-sv-show").hide();
        }
        $("#edit-getlocations-fields-defaults-sv-show,#edit-field-settings-sv-show").change(function() {
          if ($(this).attr('checked')) {
            $("#wrap-getlocations-sv-show").show();
          }
          else {
            $("#wrap-getlocations-sv-show").hide();
          }
        });
      }

      if ($("#edit-getlocations-fields-defaults-fullscreen,#edit-field-settings-fullscreen").is('input')) {
        if ($("#edit-getlocations-fields-defaults-fullscreen,#edit-field-settings-fullscreen").attr('checked')) {
          $("#wrap-getlocations-fs-show").show();
        }
        else {
          $("#wrap-getlocations-fs-show").hide();
        }
        $("#edit-getlocations-fields-defaults-fullscreen,#edit-field-settings-fullscreen").change(function() {
          if ($(this).attr('checked')) {
            $("#wrap-getlocations-fs-show").show();
          }
          else {
            $("#wrap-getlocations-fs-show").hide();
          }
        });
      }


    }
  };
})(jQuery);
