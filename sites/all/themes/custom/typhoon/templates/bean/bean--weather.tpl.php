<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?> weather-paralax" style='background-image: url("<?php print $img_src; ?>"); background-attachment: fixed;
  background-position: center;
  background-repeat: repeat;'>
  <!-- <div class="box-weather__image">
      <img src="<?php print $img_src; ?>" alt="<?php print $img_alt; ?>">
    </div> -->
  <div class="box-weather__content">
    <div class="box-weather__content__inner">
      <h2 class="block-title js-scroll-appear animated" data-scroll-appear="fadeInDown"><?php print $title; ?></h2>
      <div class="box-weather__decription js-scroll-appear animated" data-scroll-appear="fadeInDown"><?php print $desc['value']; ?></div>
      <div class="box-weather__temple js-scroll-appear animated" data-scroll-appear="fadeInUp">
        <span class="<?php print $weather; ?>"><?php print $temp; ?></span>
        <span class="status">
          <label><?php print t('Beach Park is now:'); ?></label>
          <span><?php print t($status); ?></span>
        </span>
      </div>
    </div>
  </div>
</div>
