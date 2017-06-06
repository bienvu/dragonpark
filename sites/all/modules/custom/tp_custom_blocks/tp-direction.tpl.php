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
<div class="container">
  <div class="box-map-search row">
    <div class="box-map-search__form-group">
      <?php print drupal_render($form); ?>
      <span>Dragon Park, Ha Long, Quang Ninh</span>
    </div>
    <a href="#" class="show-current-position"><i class="fa fa-crosshairs"></i></a>
  </div>
</div>
<div id="map-group" class="box-map">
  <div id="map" class="box-map__map"></div>
  <div class="box-map__inner">
    <div id="right-panel" class="box-map__content">
      <div id="topmap" class="box-map__content__top">
        <h3>1h 6min <span>(5.3 km)</span></h3>
        <p>via Cái Dăm and Hạ Long</p>
      </div>
      <div id="contentmap" class="box-map__content__body">
        <p>Use caution - may involve errors or sections not suited for
          walking</p>
        <h3>Cổng Ông, Bãi Cháy, tp. Hạ Long</h3>
        <p>Quảng Ninh, Việt Nam</p>
        <div id="map-detail" class="box-map__detail"></div>
      </div>
    </div>
  </div>
  <div id="right-panel2"></div>
</div>
<script async defer
  src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCTfXeTSJYhzfb8dphh6NwREJXUHWpvyLA&libraries=places">
</script>
