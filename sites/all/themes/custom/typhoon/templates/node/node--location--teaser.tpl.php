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


<div class="box-attractions__image">
  <a href="<?php print $node_url; ?>"><?php print render($content['field_image']); ?></a>
  <ul class="box-attractions__info">
    <li class="height"><?php print render($content['field_height']); ?></li>
    <li class="target"><?php print render($content['field_zone']); ?></li>
  </ul>
</div>
<div class="box-attractions__content">
  <h3 class="box-attractions__title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
  <div class="box-attractions__body"><?php print render($content['body']); ?></div>
</div>
