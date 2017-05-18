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
      <?php print drupal_render($form); ?>
    </div>
  </div>
  <div id="mapactivity"></div>
  <script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCTfXeTSJYhzfb8dphh6NwREJXUHWpvyLA"></script>
</section>
