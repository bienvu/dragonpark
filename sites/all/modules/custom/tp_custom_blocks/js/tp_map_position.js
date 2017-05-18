(function($, undefined) {
  Drupal.behaviors.tp_direction = {
    attach: function(context, settings) {
      $(window).load(function() {
        initMap();
        function initMap() {

          function CoordMapType(tileSize) {
            this.tileSize = tileSize;
          }

          CoordMapType.prototype.getTile = function (coord, zoom, ownerDocument) {
            var div = ownerDocument.createElement('div');
            var normalizedCoord = getNormalizedCoord(coord, zoom);
            div.innerHTML = "A_" + zoom + "_" + normalizedCoord.x + "_" + normalizedCoord.y;
            div.style.width = this.tileSize.width + 'px';
            div.style.height = this.tileSize.height + 'px';
            div.style.color = 'red';
            div.style.fontSize = '10';
            div.style.borderStyle = 'solid';
            div.style.borderWidth = '1px';
            div.style.borderColor = '#AAAAAA';
            return div;
          };

          var map = new google.maps.Map(document.getElementById('map'), {
            center: {lat: 0, lng: 0},
            zoom: 2,
            streetViewControl: false,
            mapTypeControlOptions: {
                mapTypeIds: ['moon']
            }
          });
          var latLng = new google.maps.LatLng(0, 0);
          var marker = new google.maps.Marker({
            position: latLng,
            title: 'Point A',
            map: map,
            draggable: true
          });
          google.maps.event.addListener(marker, 'dragstart', function () {
            updateMarkerAddress('Dragging...');
          });

          google.maps.event.addListener(marker, 'drag', function () {
            updateMarkerPosition(marker.getPosition());
          });

          google.maps.event.addListener(marker, 'dragend', function () {
            geocodePosition(marker.getPosition());
          });

          map.overlayMapTypes.insertAt(0, new CoordMapType(new google.maps.Size(256, 256)));

          var moonMapType = new google.maps.ImageMapType({
            getTileUrl: function (coord, zoom) {
              var normalizedCoord = getNormalizedCoord(coord, zoom);
              if (!normalizedCoord) {
                  return null;
              }
              return Drupal.settings.basePath + "sites/all/libraries/newmap/A_" + zoom + "_" + normalizedCoord.x + "_" + normalizedCoord.y + '.jpg';
            },
            tileSize: new google.maps.Size(256, 256),
            maxZoom: 4,
            minZoom: 2,
            //radius: 1738000,
            name: 'Moon'
          });

          map.mapTypes.set('moon', moonMapType);
          map.setMapTypeId('moon');
        }

        // Normalizes the coords that tiles repeat across the x axis (horizontally)
        // like the standard Google map tiles.
        function getNormalizedCoord(coord, zoom) {
          var y = coord.y;
          var x = coord.x;

          // tile range in one direction range is dependent on zoom level
          // 0 = 1 tile, 1 = 2 tiles, 2 = 4 tiles, 3 = 8 tiles, etc
          //var tileRange = 1 << zoom;
          var tileRange = 8;
          //console.log(tileRange);
          // don't repeat across y-axis (vertically)
          if (y < 0 || y >= tileRange) {
              //return null;
          }

          if ((Math.abs(x) > (zoom - 1)) || (Math.abs(y) > (zoom - 1))) {
              //return null;
          }

          // repeat across x-axis
          if (x < 0 || x >= tileRange) {
              //return null;
              //x = (x % tileRange + tileRange) % tileRange;
          }

          return {x: x, y: y};
        }

        function geocodePosition(pos) {
          geocoder.geocode({
              latLng: pos
          }, function (responses) {
              if (responses && responses.length > 0) {
                  updateMarkerAddress(responses[0].formatted_address);
              } else {
                  updateMarkerAddress('Cannot determine address at this location.');
              }
          });
        }

        function updateMarkerPosition(latLng) {
          document.getElementById('input-gmap').value = latLng.lat() + ' , ' + latLng.lng();
        }
      });
    }
  }
})(jQuery);
