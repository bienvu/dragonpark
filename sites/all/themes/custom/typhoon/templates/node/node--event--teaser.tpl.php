<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<div class="box-content__wrap">
  <div class="box-content__image">
    <?php print render($content['field_image']); ?>
  </div>
  <div class="box-content__content">
    <ul class="box-content__time">
      <?php foreach($times as $time): ?>
        <li><?php print $time; ?></li>
      <?php endforeach; ?>
    </ul>
    <div class="box-content__title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></div>
  </div>
</div>
