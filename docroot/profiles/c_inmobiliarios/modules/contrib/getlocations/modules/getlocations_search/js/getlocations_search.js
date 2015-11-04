
/**
 * @file
 * getlocations_search.js
 * @author Bob Hutchinson http://drupal.org/user/52366
 * @copyright GNU GPL
 *
 * Javascript functions for getlocations_search module
*/
(function ($) {

  var search_markersArray = [];
  var radShape = [];
  var searchmarker = [];
  var shapetoggleState = [];
  var markertoggleState = [];
  var unitsdisplay = {'km': Drupal.t('Kilometer'), 'm': Drupal.t('Meter'), 'mi': Drupal.t('Mile'), 'yd': Drupal.t('Yard'), 'nmi': Drupal.t('Nautical mile')};
  var unitsdisplaypl = {'km': Drupal.t('Kilometers'), 'm': Drupal.t('Meters'), 'mi': Drupal.t('Miles'), 'yd': Drupal.t('Yards'), 'nmi': Drupal.t('Nautical miles')};
  var typesdisplay = {'all': Drupal.t('All'), 'node': Drupal.t('Nodes'), 'user': Drupal.t('Users'), 'taxonomy_term': Drupal.t('Taxonomy Terms'), 'term': Drupal.t('Terms'), 'comment': Drupal.t('Comments')};

  function getlocations_search_init() {

    // each map has its own settings
    $.each(Drupal.settings.getlocations_search, function (key, searchsettings) {
      // is there really a map?
      if ($("#getlocations_map_canvas_" + key).is('div')) {
        // getlocations settings for current map
        var gset = Drupal.getlocations_settings[key];
        //var gset = Drupal.settings.getlocations[key];
        var method = searchsettings.method;
        gset.do_lookup = searchsettings.do_lookup;
        gset.show_distance = searchsettings.show_distance;
        gset.do_search_marker = searchsettings.do_search_marker;
        gset.search_marker = searchsettings.search_marker;
        gset.search_distance_type = searchsettings.search_distance_type;
        gset.search_marker_toggle = searchsettings.search_marker_toggle;
        gset.search_marker_toggle_active = searchsettings.search_marker_toggle_active;
        gset.search_info_path = searchsettings.search_info_path;
        gset.zoom_on_single_use = searchsettings.zoom_on_single_use;
        gset.display_accuracy = searchsettings.display_accuracy;
        var autocomplete_bias = searchsettings.autocomplete_bias;
        var restrict_by_country = searchsettings.restrict_by_country;
        var country = searchsettings.country;
        var maxzoom = searchsettings.maxzoom;
        gset.showall = searchsettings.showall;
        gset.display_geo_microformat = searchsettings.display_geo_microformat;

        var mapid = key;
        var mapid2 = key.replace("_", "-");
        // collect defaults
        var default_distance = $("#edit-getlocations-search-distance-" + mapid2).val();
        var default_units = $("#edit-getlocations-search-units-" + mapid2).val();
        var default_type = $("#edit-getlocations-search-type-" + mapid2).val();
        var default_limits = $("#edit-getlocations-search-limits-" + mapid2).val();

        // hide geocode button
        if ($("#getlocations_search_geocode_button_wrapper_" + mapid).is('div')) {
          $("#getlocations_search_geocode_button_" + mapid).hide();
        }

        // search type in tooltip
        if (gset.geocoder_enable == 2) {
          msg = Drupal.t('Search by OpenStreetMap');
        }
        else if (gset.geocoder_enable == 1) {
          msg = Drupal.t('Search by Google');
        }
        else {
          msg = Drupal.t('Search by Google Maps Places');
        }
        $("#edit-getlocations-search-" + mapid2).attr({title: msg});

        var fm_adrs = '';
        // search area shape
        gset.search_radshape_enable = searchsettings.search_radshape_enable;
        gset.search_radshape_toggle = searchsettings.search_radshape_toggle;
        gset.search_radshape_toggle_active = searchsettings.search_radshape_toggle_active;
        if (searchsettings.search_radshape_enable) {
          if (searchsettings.search_distance_type == 'dist') {
            // radius circle
            radShape[key] = new google.maps.Circle({
              map: Drupal.getlocations_map[key],
              strokeColor: searchsettings.search_radshape_strokecolor,
              strokeOpacity: searchsettings.search_radshape_strokeopacity,
              strokeWeight: searchsettings.search_radshape_strokeweight,
              fillColor: searchsettings.search_radshape_fillcolor,
              fillOpacity: searchsettings.search_radshape_fillopacity,
              visible: false,
              clickable: false
            });
          }
          else if (searchsettings.search_distance_type == 'mbr') {
            // rectangle
            var shcoords = new google.maps.LatLng(parseFloat(0.0), parseFloat(0.0));
            var shbounds = new google.maps.LatLngBounds(shcoords, shcoords);
            radShape[key] = new google.maps.Rectangle({
              map: Drupal.getlocations_map[key],
              strokeColor: searchsettings.search_radshape_strokecolor,
              strokeOpacity: searchsettings.search_radshape_strokeopacity,
              strokeWeight: searchsettings.search_radshape_strokeweight,
              fillColor: searchsettings.search_radshape_fillcolor,
              fillOpacity: searchsettings.search_radshape_fillopacity,
              visible: false,
              clickable: false
            });
          }
          $("#getlocations_search_toggleShape_" + key).attr('disabled', true);
        }

        if (gset.markermanagertype == 1 && gset.usemarkermanager == 1) {
          gset.usemarkermanager = true;
          gset.mgr = new MarkerManager(Drupal.getlocations_map[key], {
            borderPadding: 50,
            maxZoom: maxzoom,
            trackMarkers: false
          });
        }
        else if (gset.markermanagertype == 2 && gset.useclustermanager == 1) {
          gset.useclustermanager = true;
          gset.cmgr = new MarkerClusterer(
            Drupal.getlocations_map[key],
            [],
            {
              gridSize: gset.cmgr_gridSize,
              maxZoom: gset.cmgr_maxZoom,
              styles: gset.cmgr_styles[gset.cmgr_style],
              minimumClusterSize: gset.cmgr_minClusterSize,
              title: gset.cmgr_title
            }
          );
        }

        if (method == 'google_ac') {
          var input_adrs = document.getElementById("edit-getlocations-search-" + mapid2);
          var opts = {};
          if (restrict_by_country > 0 && country) {
            var c = {'country':country};
            opts = {'componentRestrictions':c};
          }
          var ac_adrs = new google.maps.places.Autocomplete(input_adrs, opts);
          if (autocomplete_bias) {
            ac_adrs.bindTo('bounds', Drupal.getlocations_map[key]);
          }
          google.maps.event.addListener(ac_adrs, 'place_changed', function () {
            var place_adrs = ac_adrs.getPlace();
            var fm_adrs = place_adrs.formatted_address;
            if (gset.geocoder_enable == 2) {
              // nominatem
              do_geocoder_Geocode(Drupal.getlocations_map[key], gset, fm_adrs, key);
            }
            else if (gset.geocoder_enable == 1) {
              // google
              do_Geocode(Drupal.getlocations_map[key], gset, fm_adrs, key);
            }
            else {
              // just use place_adrs
              do_PlaceAdrs(Drupal.getlocations_map[key], gset, place_adrs, key);
            }

            if ($("#getlocations_search_geocode_button_wrapper_" + key).is('div')) {
              $("#getlocations_search_geocode_button_" + key).show();
            }
          });
        }
        else {
          $("#edit-getlocations-search-submit-" + mapid2).click( function() {
            // collect the search string
            input_adrs = $("#edit-getlocations-search-" + mapid2).val();
            var fm_adrs = input_adrs;
            if (gset.geocoder_enable == 2) {
              // Create a Client Geocoder
              do_geocoder_Geocode(Drupal.getlocations_map[key], gset, fm_adrs, key);
            }
            else {
              // Create a Client Geocoder google
              do_Geocode(Drupal.getlocations_map[key], gset, fm_adrs, key);
            }
            return false;
          });
        }

        // geolocation by browser
        if (navigator && navigator.geolocation) {
          $("#getlocations_search_geolocation_status_ok_" + key).hide();
          $("#getlocations_search_geolocation_status_err_" + key).hide();
          $("#getlocations_search_geolocation_status_load_" + key).hide();
          $("#getlocations_search_geolocation_status_ok_" + key).removeClass('js-hide');
          $("#getlocations_search_geolocation_status_err_" + key).removeClass('js-hide');
          $("#getlocations_search_geolocation_status_load_" + key).removeClass('js-hide');
          $("#getlocations_search_geolocation_button_" + key).click( function () {
            $("#getlocations_search_geolocation_status_load_" + key).show();
            do_Geolocationbutton(Drupal.getlocations_map[key], gset, key);
          });
        }
        else {
          $("#getlocations_search_geolocation_button_wrapper_" + key).hide();
        }

        // Geocode button
        if ($("#getlocations_search_geocode_button_wrapper_" + key).is('div')) {
          $("#getlocations_search_geocode_button_" + key).click( function () {
            if (gset.geocoder_enable == 2) {
              do_geocoder_Geocode(Drupal.getlocations_map[key], gset, fm_adrs, key);
            }
            else {
              do_Geocode(Drupal.getlocations_map[key], gset, fm_adrs, key);
            }
          });
        }

        // Reset button
        if ($("#getlocations_search_reset_button_wrapper_" + key).is('div')) {
          $("#getlocations_search_reset_button_" + key).click( function () {
            // reset to defaults
            $("#edit-getlocations-search-distance-" + mapid2).val(default_distance);
            $("#edit-getlocations-search-units-" + mapid2).val(default_units);
            $("#edit-getlocations-search-type-" + mapid2).val(default_type);
            $("#edit-getlocations-search-limits-" + mapid2).val(default_limits);
            $("#edit-getlocations-search-" + mapid2).val("");
            if ($("#getlocations_search_geocode_button_wrapper_" + key).is('div')) {
              $("#getlocations_search_geocode_button_" + key).hide();
            }
            getlocations_search_clear_results(key, gset);
            getlocations_search_reset_map(key, gset);
          });
        }

        // search area shape
        if (searchsettings.search_radshape_enable) {
          if (searchsettings.search_radshape_toggle) {
            if (searchsettings.search_radshape_toggle_active) {
              shapetoggleState[key] = true;
            }
            else {
              shapetoggleState[key] = false;
            }
            $("#getlocations_search_toggleShape_" + key).click( function() {
              var label = '';
              if (shapetoggleState[key]) {
                radShape[key].setVisible(false);
                shapetoggleState[key] = false;
                label = Drupal.t('Search area On');
              }
              else {
                radShape[key].setVisible(true);
                shapetoggleState[key] = true;
                label = Drupal.t('Search area Off');
              }
              $(this).val(label);
            });
          }
          else {
            shapetoggleState[key] = true;
          }
        }

        // search marker toggle
        if (searchsettings.do_search_marker) {
          if (searchsettings.search_marker_toggle) {
            $("#getlocations_search_toggleMarker_" + key).attr('disabled', true);
            if ( searchsettings.search_marker_toggle_active > 0 ) {
              markertoggleState[key] = true;
            }
            else {
              markertoggleState[key] = false;
            }
            $("#getlocations_search_toggleMarker_" + key).click( function() {
              var label = '';
              if (markertoggleState[key]) {
                searchmarker[key].setVisible(false);
                markertoggleState[key] = false;
                label = Drupal.t('Marker On');
              }
              else {
                searchmarker[key].setVisible(true);
                markertoggleState[key] = true;
                label = Drupal.t('Marker Off');
              }
              $(this).val(label);
            });
          }
          else {
            markertoggleState[key] = true;
          }
        }

      }
    }); // end each
  } // end init

  // cleans out any existing markers, sets up a new geocoder and runs it, filling in the results.
  function do_Geocode(map, gs, adrs, mkey) {
    if (! gs.showall) {
      // are there any markers already?
      if (search_markersArray.length) {
        getlocations_search_deleteOverlays(gs);
      }
    }
    // clear out search marker
    if (gs.do_search_marker) {
      oldslat = $("#getlocations_search_slat_" + mkey).html();
      oldslon = $("#getlocations_search_slon_" + mkey).html();
      if (oldslat) {
        searchmarker[mkey].setMap();
      }
    }

    // close any previous instances
    for (var i in gs.infoBubbles) {
      gs.infoBubbles[i].close();
    }

    // clear the results box
    getlocations_search_clear_results(mkey, gs);

    // get settings from the DOM
    var mapid2 = mkey.replace("_", "-");
    var distance = $("#edit-getlocations-search-distance-" + mapid2).val();
    var units = $("#edit-getlocations-search-units-" + mapid2).val();
    var type = $("#edit-getlocations-search-type-" + mapid2).val();
    var limits = $("#edit-getlocations-search-limits-" + mapid2).val();
    if (! adrs) {
      adrs = $("#edit-getlocations-search-" + mapid2).val();
    }
    var adrs_o = {address: adrs};
    // start geocoder
    var geocoder = new google.maps.Geocoder();
    geocoder.geocode(adrs_o, function (results, status) {
      if (status == google.maps.GeocoderStatus.OK) {
        var address = results[0].formatted_address;
        var slat = results[0].geometry.location.lat();
        var slon = results[0].geometry.location.lng();

        var accuracy = '';
        if (gs.display_accuracy) {
          if (results[0].geometry.location_type == 'APPROXIMATE') {
            accuracy =  Drupal.t('Approximate');
          }
          else if (results[0].geometry.location_type == 'GEOMETRIC_CENTER') {
            accuracy = Drupal.t('Center');
          }
          else if (results[0].geometry.location_type == 'RANGE_INTERPOLATED') {
            accuracy = Drupal.t('Interpolated');
          }
          else if (results[0].geometry.location_type == 'ROOFTOP') {
            accuracy = Drupal.t('Exact');
          }
        }

        getlocations_search_get_data(slat, slon, distance, units, type, limits, accuracy, address, gs, map, mkey);

      }
      else {
        var prm = {'!a': place_adrs, '!b': Drupal.getlocations.getGeoErrCode(status) };
        var msg = Drupal.t('Geocode for (!a) was not successful for the following reason: !b', prm);
        alert(msg);
      }
    });
  }


  // cleans out any existing markers, sets up a new geocoder and runs it, filling in the results.
  // this one is for openstreetmap search
  function do_geocoder_Geocode(map, gs, adrs, mkey) {
    if (! gs.showall) {
      // are there any markers already?
      if (search_markersArray.length) {
        getlocations_search_deleteOverlays(gs);
      }
    }
    // clear out search marker
    if (gs.do_search_marker) {
      oldslat = $("#getlocations_search_slat_" + mkey).html();
      oldslon = $("#getlocations_search_slon_" + mkey).html();
      if (oldslat) {
        searchmarker[mkey].setMap();
      }
    }

    // close any previous instances
    for (var i in gs.infoBubbles) {
      gs.infoBubbles[i].close();
    }

    // clear the results box
    getlocations_search_clear_results(mkey, gs);

    // get settings from the DOM
    var mapid2 = mkey.replace("_", "-");
    var distance = $("#edit-getlocations-search-distance-" + mapid2).val();
    var units = $("#edit-getlocations-search-units-" + mapid2).val();
    var type = $("#edit-getlocations-search-type-" + mapid2).val();
    var limits = $("#edit-getlocations-search-limits-" + mapid2).val();
    // start geocoder
    // nominatim
    var geocoder = GeocoderJS.createGeocoder('openstreetmap');
    geocoder.geocode(adrs, function (results) {
      if (results) {
        var address = adrs;
        var slat = results[0].latitude;
        var slon = results[0].longitude;
        var accuracy = '';

        getlocations_search_get_data(slat, slon, distance, units, type, limits, accuracy, address, gs, map, mkey);

      }
      else {
        var prm = {'!a': place_adrs};
        var msg = Drupal.t('Geocode for (!a) was not successful', prm);
        alert(msg);
      }
    });
  }

  function do_reverse_Geocode(map, gs, adrs, mkey) {
    if (! gs.showall) {
      // are there any markers already?
      if (search_markersArray.length) {
        getlocations_search_deleteOverlays(gs);
      }
    }
    // clear out search marker
    if (gs.do_search_marker) {
      oldslat = $("#getlocations_search_slat_" + mkey).html();
      oldslon = $("#getlocations_search_slon_" + mkey).html();
      if (oldslat) {
        searchmarker[mkey].setMap();
      }
    }

    // close any previous instances
    for (var i in gs.infoBubbles) {
      gs.infoBubbles[i].close();
    }

    // clear the results box
    getlocations_search_clear_results(mkey, gs);
    // get settings from the DOM
    var mapid2 = mkey.replace("_", "-");
    var distance = $("#edit-getlocations-search-distance-" + mapid2).val();
    var units = $("#edit-getlocations-search-units-" + mapid2).val();
    var type = $("#edit-getlocations-search-type-" + mapid2).val();
    var limits = $("#edit-getlocations-search-limits-" + mapid2).val();

    var adrs_o = {latLng: adrs};
    // start geocoder
    var geocoder = new google.maps.Geocoder();
    geocoder.geocode(adrs_o, function (results, status) {
      if (status == google.maps.GeocoderStatus.OK) {
        var address = results[0].formatted_address;
        var slat = results[0].geometry.location.lat();
        var slon = results[0].geometry.location.lng();

        var accuracy = '';
        if (gs.display_accuracy) {
          if (results[0].geometry.location_type == 'APPROXIMATE') {
            accuracy =  Drupal.t('Approximate');
          }
          else if (results[0].geometry.location_type == 'GEOMETRIC_CENTER') {
            accuracy = Drupal.t('Center');
          }
          else if (results[0].geometry.location_type == 'RANGE_INTERPOLATED') {
            accuracy = Drupal.t('Interpolated');
          }
          else if (results[0].geometry.location_type == 'ROOFTOP') {
            accuracy = Drupal.t('Exact');
          }
        }

        getlocations_search_get_data(slat, slon, distance, units, type, limits, accuracy, address, gs, map, mkey);

      }
      else {
        var prm = {'!a': place_adrs, '!b': Drupal.getlocations.getGeoErrCode(status) };
        var msg = Drupal.t('Geocode for (!a) was not successful for the following reason: !b', prm);
        alert(msg);
      }
    });




  }

  function do_reverse_geocoder_Geocode(map, gs, lat, lon, mkey) {

    if (! gs.showall) {
      // are there any markers already?
      if (search_markersArray.length) {
        getlocations_search_deleteOverlays(gs);
      }
    }
    // clear out search marker
    if (gs.do_search_marker) {
      oldslat = $("#getlocations_search_slat_" + mkey).html();
      oldslon = $("#getlocations_search_slon_" + mkey).html();
      if (oldslat) {
        searchmarker[mkey].setMap();
      }
    }

    // close any previous instances
    for (var i in gs.infoBubbles) {
      gs.infoBubbles[i].close();
    }

    // clear the results box
    getlocations_search_clear_results(mkey, gs);
    // get settings from the DOM
    var mapid2 = mkey.replace("_", "-");
    var distance = $("#edit-getlocations-search-distance-" + mapid2).val();
    var units = $("#edit-getlocations-search-units-" + mapid2).val();
    var type = $("#edit-getlocations-search-type-" + mapid2).val();
    var limits = $("#edit-getlocations-search-limits-" + mapid2).val();

    var geocoder = GeocoderJS.createGeocoder('openstreetmap');
    geocoder.geodecode(lat, lon, function(results) {
      if (results) {
        var address = '';
        if ( results[0].streetNumber !== undefined) {
          address += results[0].streetNumber + ' ';
        }
        if ( results[0].streetName !== undefined) {
          address += results[0].streetName + ' ';
        }
        if ( results[0].city !== undefined) {
          address += results[0].city + ', ';
        }
        if ( results[0].region !== undefined) {
          address += results[0].region + ', ';
        }
        if ( results[0].postal_code !== undefined) {
          address += results[0].postal_code + '';
        }
        var accuracy = '';

        getlocations_search_get_data(lat, lon, distance, units, type, limits, accuracy, address, gs, map, mkey);

      }
      else {
        var prm = {'!a': place_adrs};
        var msg = Drupal.t('Geocode for (!a) was not successful', prm);
        alert(msg);
      }

    });

  }


  function do_PlaceAdrs(map, gs, place_adrs, mkey) {
    if (! gs.showall) {
      // are there any markers already?
      if (search_markersArray.length) {
        getlocations_search_deleteOverlays(gs);
      }
    }
    // clear out search marker
    if (gs.do_search_marker) {
      oldslat = $("#getlocations_search_slat_" + mkey).html();
      oldslon = $("#getlocations_search_slon_" + mkey).html();
      if (oldslat) {
        searchmarker[mkey].setMap();
      }
    }

    // close any previous instances
    for (var i in gs.infoBubbles) {
      gs.infoBubbles[i].close();
    }

    // clear the results box
    getlocations_search_clear_results(mkey, gs);

    // get settings from the DOM
    var mapid2 = mkey.replace("_", "-");
    var distance = $("#edit-getlocations-search-distance-" + mapid2).val();
    var units = $("#edit-getlocations-search-units-" + mapid2).val();
    var type = $("#edit-getlocations-search-type-" + mapid2).val();
    var limits = $("#edit-getlocations-search-limits-" + mapid2).val();
    var address = place_adrs.formatted_address;
    var slat = place_adrs.geometry.location.lat();
    var slon = place_adrs.geometry.location.lng();
    var accuracy = '';
    getlocations_search_get_data(slat, slon, distance, units, type, limits, accuracy, address, gs, map, mkey);

  }

  function getlocations_search_get_data(slat, slon, distance, units, type, limits, accuracy, address, gs, map, mkey) {
    // go get the data
    $.get(gs.search_info_path, {
      'lat':slat,
      'lon':slon,
      'distance':distance,
      'units':units,
      'type':type,
      'limits':limits
    }, function(data) {
      // in data, an array of locations, minmaxes and info
      var locations = data['locations'];
      var minmaxes = data['minmaxes'];
      var minlat = ''; var minlon = ''; var maxlat = ''; var maxlon = ''; var cenlat = ''; var cenlon = '';
      if (minmaxes) {
        mmarr = minmaxes.split(',');
        minlat = parseFloat(mmarr[0]);
        minlon = parseFloat(mmarr[1]);
        maxlat = parseFloat(mmarr[2]);
        maxlon = parseFloat(mmarr[3]);
        cenlat = parseFloat((minlat + maxlat)/2);
        cenlon = parseFloat((minlon + maxlon)/2);
      }
      var info = data['info'];
      distance = 0;
      units = '';
      infoarr = info.split(',');
      distance = infoarr[0];
      units = infoarr[1];
      type = infoarr[2];
      latout = infoarr[3];
      lonout = infoarr[4];
      distance_meters = infoarr[5];
      locationct = 0;
      markerdata = [];
      for (var i = 0; i < locations.length; i++) {
        lidkey = 'nid';
        lid = 0;
        if (locations[i].nid > 0) {
          lidkey = 'nid';
          lid = locations[i].nid;
        }
        else if (locations[i].uid > 0) {
          lidkey = 'uid';
          lid = locations[i].uid;
        }
        else if (locations[i].tid > 0) {
          lidkey = 'tid';
          lid = locations[i].tid;
        }
        else if (locations[i].cid > 0) {
          lidkey = 'cid';
          lid = locations[i].cid;
        }
        if (locations[i].glid > 0) {
          lid = locations[i].glid;
        }

        if (! gs.showall) {
          // just in case
          if (locations[i].marker === '') {
            gs.markdone = gs.defaultIcon;
          }
          else {
            gs.markdone = Drupal.getlocations.getIcon(locations[i].marker);
          }
          title = (locations[i].title ? locations[i].title : (locations[i].name ? locations[i].name : ''));
          // make a marker
          marker = Drupal.getlocations.makeMarker(map, gs, locations[i].latitude, locations[i].longitude, lid, title, lidkey, '', '', mkey);
          search_markersArray.push(marker);
          markerdata.push(locations[i].latitude + ',' + locations[i].longitude + ',' + lid);
        }
        locationct++;
      }
      // display results
      $("#getlocations_search_address_" + mkey).html('<span class="results-label">' + Drupal.t('Search') + ':</span><span class="results-value">' +  address + '</span>');
      $("#getlocations_search_distance_" + mkey).html('<span class="results-label">' + Drupal.t('Distance') + ':</span><span class="results-value">' + distance + ' ' + (distance == 1 ? unitsdisplay[units] : unitsdisplaypl[units] ) + '</span>');
      if (gs.do_lookup) {
        $("#getlocations_search_count_" + mkey).html('<span class="results-label">' + Drupal.t('Locations found') + ':</span><span class="results-value">' + locationct + '</span>');
        $("#getlocations_search_type_" + mkey).html('<span class="results-label">' + Drupal.t('Search Type') + ':</span><span class="results-value">' + typesdisplay[type] + '</span>');
      }
      if (accuracy) {
        $("#getlocations_search_accuracy_" + mkey).html('<span class="results-label">' + Drupal.t('Accuracy') + ':</span><span class="results-value">' + accuracy + '</span>');
      }
      if (gs.display_geo_microformat > 0) {
        if (gs.display_geo_microformat == 1) {
          $("#getlocations_search_latlon_" + mkey).html('<div class="geo"><abbr class="latitude" title="' + slat + '">' + latout + '</abbr>&nbsp;<abbr class="longitude" title="' + slon + '">' + lonout + '</abbr></div>');
        }
        else {
          $("#getlocations_search_latlon_" + mkey).html('<div  itemprop="geo" itemscope itemtype="http://schema.org/GeoCoordinates">' + Drupal.t('Latitude') + '&nbsp;' + latout + '<br />' + Drupal.t('Longitude') + '&nbsp;' + lonout + '<meta itemprop="latitude" content="' + slat + '" /><meta itemprop="longitude" content="' + slon + '" />  </div>');
        }
      }
      else {
        $("#getlocations_search_lat_" + mkey).html('<span class="results-label">' + Drupal.t('Latitude') + ':</span><span class="results-value">' + latout + '</span>');
        $("#getlocations_search_lon_" + mkey).html('<span class="results-label">' + Drupal.t('Longitude') + ':</span><span class="results-value">' + lonout + '</span>');
      }
      // hidden stuff, used by search distance and search marker
      $("#getlocations_search_slat_" + mkey).html(slat);
      $("#getlocations_search_slon_" + mkey).html(slon);
      $("#getlocations_search_sunit_" + mkey).html(units);
      $("#getlocations_search_markerdata_" + mkey).html(markerdata.join('|'));

      if (! gs.showall) {
        // markermanagers add batchr
        if (gs.usemarkermanager) {
          gs.mgr.addMarkers(search_markersArray, gs.minzoom, gs.maxzoom);
        }
        else if (gs.useclustermanager) {
          gs.cmgr.addMarkers(search_markersArray, 0);
        }
      }
      if (minlat !== '' && minlon !== '' && maxlat !== '' && maxlon !== '') {
        if (gs.pansetting == 1) {
          Drupal.getlocations.doBounds(map, minlat, minlon, maxlat, maxlon, true);
        }
        else if (gs.pansetting == 2) {
          Drupal.getlocations.doBounds(map, minlat, minlon, maxlat, maxlon, false);
        }
        else if (gs.pansetting == 3) {
          if (cenlat && cenlon) {
            c = new google.maps.LatLng(cenlat, cenlon);
            map.setCenter(c);
          }
        }
      }

      if (! gs.showall) {
        if (gs.usemarkermanager) {
          gs.mgr.refresh();
        }
        else if (gs.useclustermanager) {
          gs.cmgr.repaint();
        }
      }
      // search marker
      if (gs.do_search_marker) {
        smark = gs.search_marker;
        makeSearchcenterMarker(slat, slon, smark, map, mkey);
      }
      if (locationct == 1) {
        if (gs.zoom_on_single_use) {
          map.setZoom(gs.nodezoom);
        }

        if (! gs.showall) {
          // show_bubble_on_one_marker
          if (gs.show_bubble_on_one_marker && (gs.useInfoWindow || gs.useInfoBubble)) {
            google.maps.event.trigger(marker, 'click');
          }
        }
      }

      // search area shape
      if (gs.search_radshape_enable) {
        makeRadShape(slat, slon, distance_meters, gs, mkey);
      }

      // show_maplinks
      if (gs.show_maplinks && gs.show_maplinks_viewport && (gs.useInfoWindow || gs.useInfoBubble || gs.useLink)) {
        google.maps.event.addListener(map, 'bounds_changed', function() {
          var b = map.getBounds();
          var md1 = $("#getlocations_search_markerdata_" + mkey).html();
          if (md1 !== '') {
            var md2 = md1.split("|");
            for (var i = 0; i < md2.length; i++) {
              var md3 = md2[i].split(',');
              var lat = md3[0];
              var lon = md3[1];
              var lid = md3[2];
              var p = new google.maps.LatLng(lat, lon);
              // is this point within the bounds?
              if (b.contains(p)) {
                // hide and show the links for markers in the current viewport
                $("li a.lid-" + lid).show();
              }
              else {
                $("li a.lid-" + lid).hide();
              }
            }
          }
        });
      }

    });

  }


  function do_Geolocationbutton(map, gs, mkey) {
    navigator.geolocation.getCurrentPosition(
      function(position) {
        lat = position.coords.latitude;
        lng = position.coords.longitude;

        if (gs.geocoder_enable == 2) {
          do_reverse_geocoder_Geocode(map, gs, lat, lng, mkey);
        }
        else {
          var p = new google.maps.LatLng(parseFloat(lat), parseFloat(lng));
          do_reverse_Geocode(map, gs, p, mkey);
        }
        $("#getlocations_search_geolocation_status_ok_" + mkey).show();
        $("#getlocations_search_geolocation_status_err_" + mkey).hide();
        $("#getlocations_search_geolocation_status_load_" + mkey).hide();
      },
      function(error) {
        $("#getlocations_search_geolocation_status_load_" + mkey).hide();
        $("#getlocations_search_geolocation_status_ok_" + mkey).hide();
        $("#getlocations_search_geolocation_status_err_" + mkey).show();
      }, {maximumAge:10000}
    );
  }

  function makeSearchcenterMarker(slat, slon, smark, map, k) {
    smarkdone = Drupal.getlocations.getIcon(smark);
    var p = new google.maps.LatLng(slat, slon);
    searchmarker[k] = new google.maps.Marker({
      icon: smarkdone.image,
      shadow: smarkdone.shadow,
      shape: smarkdone.shape,
      map: map,
      position: p,
      //title: Drupal.t('Search center'),
      clickable: false,
      optimized: false
    });
    if (markertoggleState[k]) {
      searchmarker[k].setVisible(true);
    }
    else {
      searchmarker[k].setVisible(false);
    }
    $("#getlocations_search_toggleMarker_" + k).attr('disabled', false);
  }

  // search area shape
  function makeRadShape(slat, slon, distance_meters, gs, k) {
    var done = false;
    if (gs.search_distance_type == 'dist') {
      // circle
      var p = new google.maps.LatLng(parseFloat(slat), parseFloat(slon));
      radShape[k].setRadius(parseInt(distance_meters));
      radShape[k].setCenter(p);
      done = true;
    }
    else if (gs.search_distance_type == 'mbr') {
      // rectangle
      var lats = Drupal.getlocations.geo.earth_latitude_range(slat, slon, distance_meters);
      var lngs = Drupal.getlocations.geo.earth_longitude_range(slat, slon, distance_meters);

      var mcoords = [];
      mcoords[0] = new google.maps.LatLng(parseFloat(lats[0]), parseFloat(lngs[0]));
      mcoords[1] = new google.maps.LatLng(parseFloat(lats[1]), parseFloat(lngs[1]));
      var b = new google.maps.LatLngBounds(mcoords[0], mcoords[1]);
      radShape[k].setBounds(b);
      done = true;
    }
    if (done) {
      if (shapetoggleState[k]) {
        radShape[k].setVisible(true);
      }
      else {
        radShape[k].setVisible(false);
      }
      $("#getlocations_search_toggleShape_" + k).attr('disabled', false);
    }
  }

  // Deletes all markers in the array by removing references to them
  function getlocations_search_deleteOverlays(gs) {
    if (search_markersArray) {
      for (i in search_markersArray) {
        search_markersArray[i].setMap(null);
      }
      search_markersArray.length = 0;
    }
    // clear out manager
    if (gs.usemarkermanager) {
      gs.mgr.clearMarkers();
    }
    else if (gs.useclustermanager) {
      gs.cmgr.clearMarkers();
    }
  }

  function getlocations_search_clear_results(k, gs) {
    // clear the results box
    $("#getlocations_search_address_" + k).html('');
    $("#getlocations_search_count_" + k).html('');
    $("#getlocations_search_distance_" + k).html('');
    $("#getlocations_search_type_" + k).html('');
    $("#getlocations_search_lat_" + k).html('');
    $("#getlocations_search_lon_" + k).html('');
    $("#getlocations_search_latlon_" + k).html('');
    $("#getlocations_search_accuracy_" + k).html('');
    $("#getlocations_search_slat_" + k).html('');
    $("#getlocations_search_slon_" + k).html('');
    $("#getlocations_search_sunit_" + k).html('');
    $("#getlocations_search_markerdata_" + k).html('');
    if (gs.show_maplinks) {
      $("div#getlocations_map_links_" + k + " ul").html("");
    }
    // switch off area shape
    if (gs.search_radshape_enable) {
      radShape[k].setVisible(false);
      if (gs.search_radshape_toggle) {
        if (gs.search_radshape_toggle_active > 0) {
          shapetoggleState[k] = true;
          label = Drupal.t('Search area Off');
        }
        else {
          shapetoggleState[k] = false;
          label = Drupal.t('Search area On');
        }
        $("#getlocations_search_toggleShape_" + k).val(label);
      }
      $("#getlocations_search_toggleShape_" + k).attr('disabled', true);
    }
    if (gs.do_search_marker && searchmarker[k]) {
      searchmarker[k].setVisible(false);
      if (gs.search_marker_toggle) {
        if (gs.search_marker_toggle_active > 0) {
          markertoggleState[k] = true;
          label = Drupal.t('Marker Off');
        }
        else {
          markertoggleState[k] = false;
          label = Drupal.t('Marker On');
        }
        $("#getlocations_search_toggleMarker_" + k).val(label);
      }
      $("#getlocations_search_toggleMarker_" + k).attr('disabled', true);
    }
  }

  function getlocations_search_reset_map(k, gs) {
    var lat = Drupal.settings.getlocations[k].lat;
    var lon = Drupal.settings.getlocations[k].lng;
    var zoom = Drupal.settings.getlocations[k].zoom;
    var pansetting = Drupal.settings.getlocations[k].pansetting;
    var latlons = (Drupal.getlocations_data[k].latlons ? Drupal.getlocations_data[k].latlons : '');
    var minmaxes = (Drupal.getlocations_data[k].minmaxes ? Drupal.getlocations_data[k].minmaxes : '');
    var minlat = '';
    var minlon = '';
    var maxlat = '';
    var maxlon = '';
    var cenlat = '';
    var cenlon = '';
    if (minmaxes) {
      minlat = parseFloat(minmaxes.minlat);
      minlon = parseFloat(minmaxes.minlon);
      maxlat = parseFloat(minmaxes.maxlat);
      maxlon = parseFloat(minmaxes.maxlon);
      cenlat = ((minlat + maxlat)/2);
      cenlon = ((minlon + maxlon)/2);
    }
    if (gs.showall && cenlat && cenlon) {
      if (pansetting == 1) {
        Drupal.getlocations.doBounds(Drupal.getlocations_map[k], minlat, minlon, maxlat, maxlon, true);
      }
      else if (pansetting == 2) {
        Drupal.getlocations.doBounds(Drupal.getlocations_map[k], minlat, minlon, maxlat, maxlon, false);
      }
      else if (pansetting == 3) {
        Drupal.getlocations_map[k].setCenter(new google.maps.LatLng(parseFloat(cenlat), parseFloat(cenlon)));
        Drupal.getlocations_map[k].setZoom(parseInt(zoom));
      }
    }
    else {
      getlocations_search_deleteOverlays(gs);
      Drupal.getlocations_map[k].setCenter(new google.maps.LatLng(parseFloat(lat), parseFloat(lon)));
      Drupal.getlocations_map[k].setZoom(parseInt(zoom));
    }
  }

  Drupal.behaviors.getlocations_search = {
    attach: function () {
      getlocations_search_init();
    }
  };

})(jQuery);
