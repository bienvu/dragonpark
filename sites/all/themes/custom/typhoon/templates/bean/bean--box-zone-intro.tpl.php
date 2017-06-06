<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <div class="box-intro__slide ">
    <div class="js-intro-slide">
      <?php foreach($items as $item): ?>
        <div class="box-intro__slide__item">
          <div class="box-intro__slide__image">
            <img src="<?php print $item['img_src']?>" alt="<?php print $item['img_alt']; ?>" />
          </div>
          <div class="box-intro__slide__content">
            <div class="box-intro__slide__inner">
              <h3 class="box-intro__slide__zone js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print $item['name']; ?></h3>
              <h2 class="box-intro__slide__title js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print $item['title']; ?></h2>
              <?php if ($item['body']): ?>
                <div class="box-intro__slide__body js-scroll-appear animated" data-scroll-appear="fadeInUp">
                  <p><?php $lengstr = strlen($item['body']); $small = substr($item['body'], 0, 230);
                    if( $lengstr > 230) {
                    print $small."...";
                    } else {
                    print $item['body'];
                    }
                    ?></p>
                </div><?php endif; ?>
              <div class="box-intro__slide__link">
                <?php if ($item['link']): ?>
                  <a href="<?php print $item['link']; ?>" class="btn btn--large js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print t('Learn more'); ?></a>
                <?php endif; ?>
              </div>
            </div>
          </div>
        </div>
      <?php endforeach; ?>
    </div>
    <div class="box-intro__bg"></div>
  </div>
  <div class="box-intro__video">
    <div class="box-intro__video__inner">
      <video width="1280" height="720" muted="muted" preload="auto" loop="loop" class="introvideo" playsinline>
  <!--    <video width="1280" height="720" muted="muted" loop="loop" autoplay="false" preload="auto" id="introVideo" playsinline>-->
        <source src="<?php print $video_src; ?>" type="video/mp4">
      </video>
    </div>
  </div>
</div>
