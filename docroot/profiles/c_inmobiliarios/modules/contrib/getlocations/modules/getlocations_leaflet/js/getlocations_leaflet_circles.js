
/**
 * @file
 * getlocations_leaflet_circles.js
 * @author Bob Hutchinson http://drupal.org/user/52366
 * @copyright GNU GPL
 *
 * Javascript functions for getlocations circles support
 * jquery stuff
*/
(function ($) {
  Drupal.behaviors.getlocations_leaflet_circles = {
    attach: function() {

      // bail out
      if (typeof Drupal.settings.getlocations_leaflet_circles === 'undefined') {
        return;
      }

      var default_circle_settings = {
        strokeColor: '#FF0000',
        strokeOpacity: 0.8,
        strokeWeight: 3,
        fillColor: '#FF0000',
        fillOpacity: 0.35
      };

      $.each(Drupal.settings.getlocations_leaflet_circles, function (key, settings) {

        var strokeColor = (settings.strokeColor ? settings.strokeColor : default_circle_settings.strokeColor);
        if (! strokeColor.match(/^#/)) {
          strokeColor = '#' + strokeColor;
        }
        var strokeOpacity = (settings.strokeOpacity ? settings.strokeOpacity : default_circle_settings.strokeOpacity);
        var strokeWeight = (settings.strokeWeight ? settings.strokeWeight : default_circle_settings.strokeWeight);
        var fillColor = (settings.fillColor ? settings.fillColor : default_circle_settings.fillColor);
        if (! fillColor.match(/^#/)) {
          fillColor = '#' + fillColor;
        }
        var fillOpacity = (settings.fillOpacity ? settings.fillOpacity : default_circle_settings.fillOpacity);
        var clickable = (settings.clickable ? settings.clickable : default_circle_settings.clickable);
        var message = (settings.message ? settings.message : default_circle_settings.message);
        var radius = (settings.radius ? settings.radius : default_circle_settings.radius);

        var circles = settings.circles;
        var p_strokeColor = strokeColor;
        var p_strokeOpacity = strokeOpacity;
        var p_strokeWeight = strokeWeight;
        var p_fillColor = fillColor;
        var p_fillOpacity = fillOpacity;
        var p_clickable = clickable;
        var p_message = message;
        var p_radius = radius;
        var rc = [];
        var Circles = new L.LayerGroup();
        for (var i = 0; i < circles.length; i++) {
          rc = circles[i];
          if (rc.coords) {
            if (rc.strokeColor) {
              if (! rc.strokeColor.match(/^#/)) {
                rc.strokeColor = '#' + rc.strokeColor;
              }
              p_strokeColor = rc.strokeColor;
            }
            if (rc.strokeOpacity) {
              p_strokeOpacity = rc.strokeOpacity;
            }
            if (rc.strokeWeight) {
              p_strokeWeight = rc.strokeWeight;
            }
            if (rc.fillColor) {
              if (! rc.fillColor.match(/^#/)) {
                rc.fillColor = '#' + rc.fillColor;
              }
              p_fillColor = rc.fillColor;
            }
            if (rc.fillOpacity) {
              p_fillOpacity = rc.fillOpacity;
            }
            if (rc.clickable) {
              p_clickable = rc.clickable;
            }
            if (rc.message) {
              p_message = rc.message;
            }
            if (rc.radius) {
              p_radius = rc.radius;
            }

            p_clickable = (p_clickable ? true : false);
            p_radius = parseInt(p_radius);
            var mcoords = '';
            var circ = [];
            var ll = rc.coords[0];
            var lla = ll.split(",");
            mcoords = new L.LatLng(parseFloat(lla[0]), parseFloat(lla[1]));
            var circOpts = {};
            circOpts.color = p_strokeColor;
            circOpts.opacity = p_strokeOpacity;
            circOpts.weight = p_strokeWeight;
            circOpts.fillColor = p_fillColor;
            circOpts.fillOpacity = p_fillOpacity;
            circOpts.clickable = p_clickable;
            circ[i] = new L.Circle(mcoords,  p_radius, circOpts);
            Circles.addLayer(circ[i]);

            if (p_clickable && p_message) {
              circ[i].bindPopup(p_message);
            }
          }
        }

        if (circles.length) {
          Circles.addTo(Drupal.getlocations_leaflet_map[key]);
          if (Drupal.getlocations_leaflet_settings[key].map_settings.layercontrol_circ_ov) {
            Drupal.getlocations_leaflet_layerscontrol[key].addOverlay(Circles, Drupal.getlocations_leaflet_settings[key].map_settings.layercontrol_circ_ov_label);
          }
        }

      });
    }
  };
})(jQuery);
