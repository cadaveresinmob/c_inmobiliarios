(function ($) {
  Drupal.behaviors.terminator = {
    attach: function() {

      L.Control.Terminator = L.Control.extend({

        _Terminator: false,

        options: {
          position: 'topleft',
          title: 'Toggle Terminator',
          forceSeparateButton: false
        },

        initialize: function (Terminator, options) {
          this._Terminator = Terminator;
          // Override default options
          for (var i in options) if (options.hasOwnProperty(i) && this.options.hasOwnProperty(i)) this.options[i] = options[i];
        },

        onAdd: function (map) {
          var className = 'leaflet-control-terminator', container;

          if (map.zoomControl && !this.options.forceSeparateButton) {
            container = map.zoomControl._container;
          } else {
            container = L.DomUtil.create('div', 'leaflet-bar');
          }

          this._createButton(this.options.title, className, container, this._clicked, map, this._Terminator);
          return container;
        },

        _createButton: function (title, className, container, method, map, Terminator) {
          var link = L.DomUtil.create('a', className, container);
          link.href = '#';
          link.title = title;

          L.DomEvent
          .addListener(link, 'click', L.DomEvent.stopPropagation)
          .addListener(link, 'click', L.DomEvent.preventDefault)
          .addListener(link, 'click', function() {method(map, Terminator);}, map);

          return link;
        },

        _clicked: function (map, Terminator) {
          if (!Terminator) {
            return;
          }

          if (map.hasLayer(Terminator)) {
            map.removeLayer(Terminator);
          } else {
            Terminator.addTo(map);
          }
        }
      });

      L.control.terminator = function (Terminator, options) {
        return new L.Control.Terminator(Terminator, options);
      };

    }
  };
})(jQuery);
