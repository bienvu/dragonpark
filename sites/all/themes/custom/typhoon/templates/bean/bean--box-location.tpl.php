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
    <h2 class="box-location__title"><?php print $title; ?></h2>
    <ul class="box-location__link">
      <?php foreach($items as $item): ?>
        <li><a href="<?php print $item['url']; ?>"><?php print $item['title']; ?></a></li>
      <?php endforeach; ?>
    </ul>
  </div>
</div>
