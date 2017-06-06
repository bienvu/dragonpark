<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <div class="box-location__image">
    <img src="<?php print $img_src; ?>" alt="<?php print $img_alt; ?>" />
    <ul class="box-location__icon">
      <?php foreach($items as $item): ?>
        <li><a href="<?php print $item['url']; ?>"><i class="icon-location">Icon</i></a></li>
      <?php endforeach; ?>
    </ul>
  </div>
  <div class="box-location__content">
    <div class="box-location__inner">
      <h2 class="box-location__title js-scroll-appear animated" data-scroll-appear="fadeInUp"><?php print $title; ?></h2>
      <ul class="box-location__link js-scroll-appear animated" data-scroll-appear="fadeInUp">
        <?php foreach($items as $key => $item): ?>
          <li>
            <a href="<?php print $item['url']; ?>">
              <span class="gate-icon" id="gate<?php print $key; ?>"></span>
              <?php print $item['title']; ?>
            </a>
          </li>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
</div>
