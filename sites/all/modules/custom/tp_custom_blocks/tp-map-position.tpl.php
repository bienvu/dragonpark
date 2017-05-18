<?php
/**
 * @file
 * Default theme implementation to display a block.
 * API Key: AIzaSyCTfXeTSJYhzfb8dphh6NwREJXUHWpvyLA
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<section id="map-dragon" class="box-dragon-map">
  <div class="container">
    <div class="box-dragon-map__search">
      <input id="input-gmap" class="form-control" name="gmap" value="" placeholder="Gmap" type="text">
    </div>
  </div>
  <div id="map"></div>
  <script async defer
    src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCTfXeTSJYhzfb8dphh6NwREJXUHWpvyLA">
  </script>
</section>
