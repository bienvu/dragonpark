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
  <div class="box-attractions__info">
	  <h3 class="box-attractions__title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
	  <ul class="box-attractions__wrap">
	    <li class="height"><?php print render($content['field_height']); ?></li>
	    <li class="target"><?php print render($content['field_zone']); ?></li>
	  </ul>
  </div>
</div>
