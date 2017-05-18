<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <div class="box-have-fun__image">
    <img src="<?php print $img_src; ?>" alt="<?php print $img_alt; ?>" />
  </div>
  <div class="box-have-fun__content js-scroll-appear animated" data-scroll-appear="bounceIn">
    <div class="box-have-fun__content__inner">
      <h2 class="box-have-fun__title js-scroll-appear animated" data-scroll-appear="fadeInDown"><?php print $title; ?></h2>
      <a href="<?php print $link; ?>" class="btn--border js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print $link_title; ?></a>
    </div>
  </div>
</div>
