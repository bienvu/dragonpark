(function($, undefined) {
  Drupal.behaviors.tp_direction = {
    attach: function(context, settings) {
      $(window).load(function() {
        initMap();
        $('.btn-direction').click(function(e){
          e.preventDefault();
          showmapdirect();
        });
        getLocation();
        $('.show-current-position').click(function(e){
          e.preventDefault();
          getLocation();
        });
        var directionsService;
        var directionsDisplay;
        var k_map_search = true;

        function initMap2() {
          var $ = jQuery.noConflict();
          var input = document.getElementById('input-whereareyou');
          var autocomplete = new google.maps.places.Autocomplete(input);
          google.maps.event.addListener(autocomplete, 'place_changed', function () {
            var place = autocomplete.getPlace();

            var lat = place.geometry.location.lat();
            var lng = place.geometry.location.lng();
            $('.btn-map-direct').attr("data-lat", lat).attr("data-lng", lng).promise().done(function () {
              showmapdirect();
            });
          });
        }
        function initMap() {
          var map = new google.maps.Map(document.getElementById('map'), {
            zoom: 10,
            scrollwheel: false,
            center: {lat: 20.953419, lng: 107.048645}
          });
          directionsService = new google.maps.DirectionsService;
          directionsDisplay = new google.maps.DirectionsRenderer({
            draggable: true,
            map: map,
            panel: document.getElementById('right-panel2')
          });
          getLocation();
          initMap2();
        }
        function showmapdirect() {
          var $ = jQuery.noConflict();
          $("html, body").animate({
             scrollTop: (-60 + $('#map-group').offset().top)
          }, 1000);
          var lat_destination = parseFloat($('.btn-map-direct').attr("data-lat"));
          var lng_destination = parseFloat($('.btn-map-direct').attr("data-lng"));
          //console.log(lat_destination);
          if (lng_destination && lng_destination) {
            k_map_search = true;
            $('#right-panel2').html('');
            $('#right-panel').fadeIn();
            displayRoute({
              lat: lat_destination,
              lng: lng_destination
            }, {
              lat: 20.953419,
              lng: 107.048645
            }, directionsService, directionsDisplay);
          } else {
            alert("You must select the location to find the way!");
          }
        }
        function displayRoute(origin, destination, service, display) {
          /*
           origin => Điểm bắt đầu
           destination => Điểm kết thúc
           */
          var selectedMode = document.getElementById('modemapdirect').value;
          service.route({
            origin: origin,
            destination: destination,
            travelMode: google.maps.TravelMode[selectedMode],
            avoidTolls: true
          }, function (response, status) {
            if (status === 'OK') {
              display.setDirections(response);
              var $ = jQuery.noConflict();
              $('#right-panel #topmap h3').html((response.routes[0].legs[0].duration.text) + " <span>(" + (response.routes[0].legs[0].distance.value / 1000) + " km)</span>");
            } else {
              alert("Sorry, your search appears to be outside the scope of regional support for our current means of this!");
            }
          });
        }

        function getLocation() {
          if (navigator.geolocation) {
            navigator.geolocation.getCurrentPosition(function(position) {
              $('.btn-map-direct').attr("data-lat", position.coords.latitude).attr("data-lng", position.coords.longitude).promise().done(function () {
                showmapdirect();
              });
            }, function() {
              if (typeof (Storage) !== "undefined") {
                if (!localStorage.alertshow) {
                  alert('!');
                  localStorage.alertshow = 1;
                }
              } else {
                console.log('Sorry, your browser does not support web storage...');
              }
            });
          } else {
            alert('OK');
          }
        }
        setInterval(function () {
          if (k_map_search) {
            var $ = jQuery.noConflict();
            var ketquatrave = $(".adp-summary").html();
            var ketquatrave = $("table.adp-directions tbody").html();
            if (ketquatrave != undefined) {
              ketquatrave = ketquatrave.replace(/tr/g, "div").replace(/td/g, "div");
              $("#map-detail").html(ketquatrave);
              k_map_search = false;
            }
          }
        }, 500);
      });
    }
  }
})(jQuery);
;
