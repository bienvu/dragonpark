<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <?php foreach($items as $key => $item): ?>
    <div class="box-grid-service__item">
      <div class="box-grid-service__image">
        <img src="<?php print $item['img_src']; ?>" alt="<?php print $item['img_alt']; ?>">
      </div>
      <div class="box-grid-service__icon">
        <a href="<?php print $item['link']; ?>">
          <span class="title"><?php print $item['title']; ?></span>
          <div class="svg-icon"><span id="service<?php print $key; ?>"></span></div>
        </a>
      </div>
    </div>
  <?php endforeach; ?>
</div>
