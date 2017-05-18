<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <ul class="social-link">
    <?php foreach($items as $item): ?>
      <li><a href="<?php print $item['link_url']; ?>" title="<?php print $item['link_title']; ?>"><i class="<?php print $item['class']; ?>"></i></a></li>
    <?php endforeach; ?>
  </ul>
</div>
