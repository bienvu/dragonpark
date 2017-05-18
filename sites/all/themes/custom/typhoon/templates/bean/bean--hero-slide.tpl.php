<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <?php foreach($items as $item): ?>
    <div class="box-hero-slide__item">
      <?php if (isset($item['img_src'])): ?>
        <div class="box-hero-slide__image">
          <img src="<?php print $item['img_src']?>" alt="<?php print $item['img_alt']; ?>" />
        </div>
      <?php else: ?>
        <div class="box-hero-slide__video">
          <video width="1280" height="720" muted="muted" loop="loop" autoplay preload="auto" id="theVideo" playsinline>
            <source src="<?php print $item['video_src']; ?>" type="video/mp4">
          </video>
        </div>
      <?php endif; ?>
      <div class="box-hero-slide__content">
        <div class="box-hero-slide__content__inner">
          <span class="play-video"></span>
          <h3 class="box-hero-slide__small-title js-scroll-appear animated" data-scroll-appear="fadeInDown"><?php print $item['small_title']; ?></h3>
          <h1 class="box-hero-slide__title js-scroll-appear animated" data-scroll-appear="fadeInDown"><?php print $item['title']; ?></h1>
          <?php if ($item['desc']): ?>
          <div class="box-hero-slide__body js-scroll-appear animated" data-scroll-appear="fadeInUp"><p><?php print $item['desc']; ?></p></div>
          <?php endif; ?>
          <?php if ($item['link']): ?>
            <a href="<?php print $item['link']; ?>" class="btn btn--large js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print t('explore the park'); ?></a>
          <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endforeach; ?>
</div>
