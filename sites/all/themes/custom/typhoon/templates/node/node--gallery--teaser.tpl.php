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
<a href="<?php print $img_src; ?>" data-fancybox="images"></a>
<div class="box-gallery__image">
  <img class="lazy" src="<?php print $img_thumb; ?>" />
</div>
<div class="box-gallery__content">
  <h3><?php print $title; ?></h3>
  <div class="tag"><?php print render($content['field_tags']); ?></div>
  <a class="social"><i class="fa fa-facebook"></i></a>
  <a class="link"><?php print t('View'); ?></a>
</div>
