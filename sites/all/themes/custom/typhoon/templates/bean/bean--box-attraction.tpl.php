<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <div class="box-image-attraction__image js-full-slide">
    <?php foreach($items as $item): ?>
      <div class="box-image-attraction__image__item"><img src="<?php print $item['img_src']; ?>" alt="<?php print $item['img_alt']; ?>"></div>
    <?php endforeach; ?>
  </div>
  <div class="box-image-attraction__content js-scroll-appear animated" data-scroll-appear="fadeInRight">
    <div class="box-image-attraction__inner">
      <div class="js-slide-attraction">
        <?php foreach($items as $item): ?>
          <div class="box-image-attraction__item">
            <div class="box-image-attraction__icon">
              <img src="<?php print $item['icon_src']?>" alt="<?php print $item['icon_alt']; ?>">
            </div>
            <h2 class="box-image-attraction__title"><a href="<?php print $item['url']; ?>"><?php print $item['title']; ?></a></h2>
            <div class="box-image-attraction__body">
              <p><?php print $item['body']; ?></p>
            </div>
            <a href="/contact-us" class="btn btn--large"><?php print t('Buy tickets') ?></a>
          </div>
        <?php endforeach; ?>
      </div>
      <div class="arrows">
        <div class="arrows-prev"></div>
        <div class="arrows-next"></div>
      </div>
    </div>
    <a href="<?php print $link; ?>" class="btn-image-attraction"><?php print t('Attractions'); ?></a>
  </div>
</div>
