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
    <div class="box-content__title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></div>
    <div class="box-content__zone">
      <a href="/attractions?zone=<?php print $zone; ?>"><?php print render($content['field_zone']); ?></a>
    </div>
  </div>
</div>
