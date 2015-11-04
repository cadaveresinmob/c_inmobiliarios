
/**
 * @file
 * icons.js
 * @author Bob Hutchinson http://drupal.org/user/52366
 * @copyright GNU GPL
 *
 * Icon manager for getlocations.
 * Required for markers to operate properly.
 * For Google maps API v3
 *
 * Derived from gmap icons.js
 */

/**
 * Get the Icon corresponding to a setname / sequence.
 * There is only one Icon for each slot in the sequence.
 * The marker set wraps around when reaching the end of the sequence.
 */

(function ($) {

  Drupal.getlocations = {};

  Drupal.getlocations.getIcon = function (setname, sequence) {

    if (!setname) {
      return;
    }

    if (!this.gicons) {
      this.gicons = {};
    }

    // If no sequence, synthesise one.
    if (!sequence) {
      // @TODO make this per-map.
      if (!this.sequences) {
        this.sequences = {};
      }
      if (!this.sequences[setname]) {
        this.sequences[setname] = -1;
      }
      this.sequences[setname]++;
      sequence = this.sequences[setname];
    }

    if (!this.gicons[setname]) {
      if (!Drupal.getlocations.icons[setname]) {
        var aa = {'!b': setname};
        alert(Drupal.t('Request for invalid marker set !b', aa));
      }
      this.gicons[setname] = [];
      var q = Drupal.getlocations.icons[setname];
      var p;
      var t = [];
      for (var i = 0; i < q.sequence.length; i++) {
        p = Drupal.getlocations.iconpath + q.path;

        t.image =  new google.maps.MarkerImage(
          p + q.sequence[i].f,
          new google.maps.Size(q.sequence[i].w, q.sequence[i].h),
          new google.maps.Point(q.imagepoint1X, q.imagepoint1Y),
          new google.maps.Point(q.imagepoint2X, q.imagepoint2Y)
        );
        if (q.shadow.f !== '') {
          t.shadow = new google.maps.MarkerImage(
            p + q.shadow.f,
            new google.maps.Size(q.shadow.w, q.shadow.h),
            new google.maps.Point(q.shadowpoint1X, q.shadowpoint1Y),
            new google.maps.Point(q.shadowpoint2X, q.shadowpoint2Y)
          );
        }
        // turn string in shapecoords into array
        if (q.shapecoords !== '') {
          t.shape = { coord: q.shapecoords.split(','), type: q.shapetype };
        }

        // @@@ imageMap?
        this.gicons[setname][i] = t;
      }
      delete Drupal.getlocations.icons[setname];
    }
    // TODO: Random, other cycle methods.
    return this.gicons[setname][sequence % this.gicons[setname].length];

  };

  /**
   * JSON callback to set up the icon defs.
   * When doing the JSON call, the data comes back in a packed format.
   * We need to expand it and file it away in a more useful format.
   */
  Drupal.getlocations.iconSetup = function () {
    Drupal.getlocations.icons = {};
    var m = Drupal.getlocations.icondata;
    var filef, filew, fileh, files;
    for (var path in m) {
      if (m.hasOwnProperty(path)) {
        // Reconstitute files array
        filef = m[path].f;
        filew = Drupal.getlocations.expandArray(m[path].w, filef.length);
        fileh = Drupal.getlocations.expandArray(m[path].h, filef.length);
        files = [];
        for (var i = 0; i < filef.length; i++) {
          files[i] = {f : filef[i], w : filew[i], h : fileh[i]};
        }

        for (var ini in m[path].i) {
          if (m[path].i.hasOwnProperty(ini)) {
            $.extend(Drupal.getlocations.icons, Drupal.getlocations.expandIconDef(m[path].i[ini], path, files));
          }
        }
      }
    }
  };

  /**
   * Expand a compressed array.
   * This will pad arr up to len using the last value of the old array.
   */
  Drupal.getlocations.expandArray = function (arr, len) {
    var d = arr[0];
    for (var i = 0; i < len; i++) {
      if (!arr[i]) {
        arr[i] = d;
      }
      else {
        d = arr[i];
      }
    }
    return arr;
  };

  /**
   * Expand icon definition.
   * This helper function is the reverse of the packer function found in
   * getlocations_markerinfo.inc.
   */
  Drupal.getlocations.expandIconDef = function (c, path, files) {

    var decomp = ['key', 'name', 'sequence',
      'imagepoint1X', 'imagepoint1Y', 'imagepoint2X', 'imagepoint2Y',
      'shadow', 'shadowpoint1X', 'shadowpoint1Y', 'shadowpoint2X', 'shadowpoint2Y',
      'shapecoords', 'shapetype'];

    var fallback = ['', '', [], 0, 0, 0, 0, {f: '', h: 0, w: 0}, 0, 0, 0, 0, '', ''];

    var imagerep = ['shadow'];

    var defaults = {};
    var sets = [];
    var i, j;
    // Part 1: Defaults / Markersets
    // Expand arrays and fill in missing ones with fallbacks
    for (i = 0; i < decomp.length; i++) {
      if (!c[0][i]) {
        c[0][i] = [ fallback[i] ];
      }
      c[0][i] = Drupal.getlocations.expandArray(c[0][i], c[0][0].length);
    }
    for (i = 0; i < c[0][0].length; i++) {
      for (j = 0; j < decomp.length; j++) {
        if (i === 0) {
          defaults[decomp[j]] = c[0][j][i];
        }
        else {
          if (!sets[i - 1]) {
            sets[i - 1] = {};
          }
          sets[i - 1][decomp[j]] = c[0][j][i];
        }
      }
    }
    for (i = 0; i < sets.length; i++) {
      for (j = 0; j < decomp.length; j++) {
        if (sets[i][decomp[j]] === fallback[j]) {
          sets[i][decomp[j]] = defaults[decomp[j]];
        }
      }
    }
    var icons = {};
    for (i = 0; i < sets.length; i++) {
      var key = sets[i].key;
      icons[key] = sets[i];
      icons[key].path = path;
      delete icons[key].key;
      delete sets[i];
      for (j = 0; j < icons[key].sequence.length; j++) {
        icons[key].sequence[j] = files[icons[key].sequence[j]];
      }
      for (j = 0; j < imagerep.length; j++) {
        if (typeof(icons[key][imagerep[j]]) === 'number') {
          icons[key][imagerep[j]] = files[icons[key][imagerep[j]]];
        }
      }
    }
    return icons;
  };

})(jQuery);
