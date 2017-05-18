(function($, undefined) {
  Drupal.behaviors.tp_map = {
    attach: function(context, settings) {
      $(window).load(function() {
        // Click search.
        $('.btn-search').click(function(e){
          e.preventDefault();
          getactivity();
        });
        // Change taxonomy.
        $('#modemapdirect').change(function(e){
          getactivity();
        });
        // Load default.
        getactivity();
        var overlay;
        var markers = [];
        var map = new google.maps.Map(document.getElementById('mapactivity'), {
          center: {lat: 0, lng: 0},
          zoom: 3,
          zoomControlOptions: {
            style: google.maps.ZoomControlStyle.LARGE,
            position: google.maps.ControlPosition.RIGHT_CENTER
          },
          streetViewControl: false,
          mapTypeControlOptions: {
            mapTypeIds: ['dragonpark']
          }
        });

        var moonDragonParkType = new google.maps.ImageMapType({
          getTileUrl: function (coord, zoom) {
            var normalizedCoord = getNormalizedCoord(coord, zoom);
            if (!normalizedCoord) {
              return null;
            }
            return Drupal.settings.basePath + "sites/all/libraries/newmap/A_" + zoom + "_" + normalizedCoord.x + "_" + normalizedCoord.y + '.jpg';
          },
          tileSize: new google.maps.Size(256, 256),
          maxZoom: 4,
          minZoom: 3,
          name: 'Dragon Park'
        });

        map.mapTypes.set('dragonpark', moonDragonParkType);
        map.setMapTypeId('dragonpark');
        var infowindow = new google.maps.InfoWindow();
        var infowindow2 = new google.maps.InfoWindow();
        var getapilan1 = false;
        function initMap() {
          getactivity();
          var $ = jQuery.noConflict();
          $("html, body").animate({
             scrollTop: (-80 + $('#map-dragon').offset().top)
          }, 1000);
        }
        // Adds a marker to the map and push to the array.
        function addMarker(uudailoc) {
          var latlngloc = new google.maps.LatLng(uudailoc.gmap_lat, uudailoc.gmap_lng);
          var newttpos = {
             lat: uudailoc.gmap_lat,
             lng: uudailoc.gmap_lng
          };

          var marker = new google.maps.Marker({
             position: latlngloc,
             icon: {url: uudailoc.icon},
             title: uudailoc.title,
             map: map
          });

          marker.addListener('click', function () {
             infowindow.setContent(uudailoc.html);
             infowindow.open(map, marker);
          });
          marker.addListener('mouseover', function () {
             //map.setCenter(newttpos);
             infowindow.setContent(uudailoc.html);
             infowindow.open(map, marker);
          });
          markers.push(marker);
        }

        // Sets the map on all markers in the array.
        function setMapOnAll(map) {
          for (var i = 0; i < markers.length; i++) {
            markers[i].setMap(map);
          }
        }
        // Removes the markers from the map, but keeps them in the array.
        function clearMarkers() {
          setMapOnAll(null);
        }
        // Shows any markers currently in the array.
        function showMarkers() {
          setMapOnAll(map);
        }
        // Deletes all markers in the array by removing references to them.
        function deleteMarkers() {
          clearMarkers();
          markers = [];
        }
        function getactivity() {
          var $ = jQuery.noConflict();
          var _filter_activity = $('#modemapdirect').val();
          var _filter_name = $('#input-search').val();
          var _lang = $('html').attr('lang');
          $.ajax({
            url: Drupal.settings.basePath + 'find-location',
            type: 'POST',
            dataType: 'json',
            data: {lang: _lang, filter_name: _filter_name, filter_activity: _filter_activity},
            beforeSend: function () {
              $('#map-dragon #rowvtp div #search-activity').html('<i class="fa fa-cog"></i>');
            },
            complete: function () {
              $('#map-dragon #rowvtp div #search-activity').html('<i class="fa fa-search"></i>');
            },
            success: function (json) {
              console.log(json);
              deleteMarkers();
              if (json != '') {
                for (i = 0; i < json.length; i++) {
                  addMarker(json[i]);
                }
                clearMarkers()
              } else {
                alert('Không tìm thấy địa điểm nào trên hệ thống!');
              }
              showMarkers();
              getapilan1 = true;
            },
            error: function (xhr, ajaxOptions, thrownError) {
              console.log('error');
              console.log(thrownError + "\r\n" + xhr.statusText + "\r\n" + xhr.responseText);
            }
          });
        }
        function getNormalizedCoord(coord, zoom) {
          var y = coord.y;
          var x = coord.x;
          var tileRange = 8;
          // don't repeat across y-axis (vertically).
          if (y < 0 || y >= tileRange) {
            // return null;
          }
          // repeat across x-axis
          if (x < 0 || x >= tileRange) {
            // x = (x % tileRange + tileRange) % tileRange;
          }
          return {x: x, y: y};
        }
        google.maps.event.addDomListener(map, 'zoom_changed', function () {
          if (map.getZoom() > 2) {
            showMarkers();
          } else {
            clearMarkers();
          }
        });
        google.maps.event.addDomListener(window, 'load', initMap);
      });
    }
  }
})(jQuery);
;
