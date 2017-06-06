<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?>">
  <h2 class="box-contact__title"><?php print t('Dragon Park'); ?></h2>
  <?php if ($desc): ?>
    <div class="box-contact__description"><p><?php print $desc; ?></p></div>
  <?php endif; ?>
  <ul class="box-contact__info">
    <?php foreach($items as $item): ?>
      <li>
        <i class="fa <?php print $item['icon']?>" aria-hidden="true"></i><?php print $item['info']; ?>
      </li>
    <?php endforeach; ?>
  </ul>
  <?php if (isset($link_url)): ?>
    <div class="box-contact__buy-ticket">
      <a href="<?php print $link_url; ?>" class="btn btn--icon-ticket"><?php print $link_title; ?></a>
    </div>
  <?php endif; ?>
</div>
