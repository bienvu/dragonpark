<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <?php foreach($items as $item): ?>
    <div class="box-grid-service__item">
      <div class="box-grid-service__image">
        <img src="<?php print $item['img_src']; ?>" alt="<?php print $item['img_alt']; ?>">
      </div>
      <div class="box-grid-service__icon js-scroll-appear animated" data-scroll-appear="bounceIn">
        <div class="title"><?php print $item['title']; ?></div>
        <img src="<?php print $item['icon_src']; ?>" alt="<?php print $item['icon_alt']; ?>">
      </div>
    </div>
  <?php endforeach; ?>
</div>
