<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <div class="box-intro__video">
    <video width="1280" height="720" muted="muted" loop="loop" autoplay preload="auto" id="introVideo" playsinline>
      <source src="<?php print $video_src; ?>" type="video/mp4">
    </video>
  </div>
  <div class="box-intro__slide js-intro-slide">
    <?php foreach($items as $item): ?>
      <div class="box-intro__slide__item">
        <div class="box-intro__image">
          <img src="<?php print $item['img_src']?>" alt="<?php print $item['img_alt']; ?>" />
        </div>
        <div class="box-intro__slide__content">
          <h3 class="box-intro__slide__zone"><?php print $item['name']; ?></h3>
          <h2 class="box-intro__slide__title"><?php print $item['title']; ?></h2>
          <div class="box-intro__slide__body"><?php print $item['body']; ?></div>
          <div class="box-intro__slide__link">
            <?php if ($item['link']): ?>
              <a href="<?php print $item['link']; ?>" class="btn btn--large js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print t('Learn more'); ?></a>
            <?php endif; ?>
          </div>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>
