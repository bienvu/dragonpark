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


<div class="box-restaurent__image">
  <a href="<?php print $node_url; ?>"><?php print render($content['field_image']); ?></a>
</div>
<div class="box-restaurent__content">
  <h3 class="box-restaurent__title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
  <div class="box-restaurent__info"><?php print render($content['field_zone']); ?></div>
</div>
