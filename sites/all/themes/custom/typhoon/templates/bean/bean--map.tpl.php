<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <div class="box-gmap__map">
    <?php print $map; ?>
  </div>
  <div class="box-gmap__content js-scroll-appear animated" data-scroll-appear="fadeInLeft">
    <div class="box-gmap__inner">
      <h2 class="block-title"><?php print $title; ?></h2>
      <?php print $info['value']; ?>
    </div>
  </div>
</div>
