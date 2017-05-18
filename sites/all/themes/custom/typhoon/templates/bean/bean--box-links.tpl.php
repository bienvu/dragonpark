<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <h2 class="box-menu__title"><?php print $title; ?></h2>
  <ul class="box-menu__link">
    <?php foreach($items as $item): ?>
      <li><a href="<?php print $item['url']; ?>"><?php print $item['title']; ?></a></li>
    <?php endforeach; ?>
  </ul>
</div>
