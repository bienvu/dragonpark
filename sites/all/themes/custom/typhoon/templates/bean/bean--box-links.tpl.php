<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <ul class="box-menu__link">
    <?php foreach($items as $item): ?>
      <li><a href="<?php print $item['url']; ?>"><?php print $item['title']; ?></a></li>
    <?php endforeach; ?>
  </ul>
</div>
