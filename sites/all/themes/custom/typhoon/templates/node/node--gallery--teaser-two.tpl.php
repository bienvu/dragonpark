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
<div class="box-gallery__image">
<!--  <a href="/en/gallery"><img src="--><?php //print $img_thumb; ?><!--"/></a>-->
  <!-- <a href="<?php if($language == 'en') {
    print '/en/gallery';
  } else {
    print 'vi/thu-vien-hinh-anh';
  }?>"><?php print render($content['field_image'][0]); ?></a> -->
  <a href="/gallery"><?php print render($content['field_image'][0]); ?></a>
</div>
