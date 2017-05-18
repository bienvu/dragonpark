<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <div class="box-schedule__image">
    <div class="bg-bubble bg-bubble1" style='background-image: url("<?php print $img_src; ?>");'></div>
  </div>
  <div class="box-schedule__content">
    <div class="box-schedule__content__wrap">
      <h2 class="block-title js-scroll-appear animated" data-scroll-appear="fadeInDown"><?php print $title; ?></h2>
      <div class="box-schedule__description js-scroll-appear animated" data-scroll-appear="fadeInDown">
        <?php print $desc['value']; ?>
      </div>
      <div class="box-schedule__content__inner">
        <?php foreach($items as $key => $item): ?>
          <?php if ($key%2 == 0): ?>
            <div class="box-schedule__content__left js-scroll-appear animated" data-scroll-appear="fadeInUp">
          <?php else: ?>
            <div class="box-schedule__content__right js-scroll-appear animated" data-scroll-appear="fadeInUp">
          <?php endif; ?>
            <div class="box-schedule__season"><?php print $item['label']; ?></div>
            <div class="box-schedule__month">
              <?php print $item['months']; ?>
            </div>
            <div class="box-schedule__time"><?php print $item['time']; ?></div>
          </div>
        <?php endforeach; ?>
      </div>
      <div class="note js-scroll-appear animated" data-scroll-appear="fadeInUp"><p><i>*</i><?php print $note; ?></p></div>
      <a href="<?php print $link; ?>" class="btn btn--large js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print t('More Details') ?></a>
    </div>
  </div>
</div>
