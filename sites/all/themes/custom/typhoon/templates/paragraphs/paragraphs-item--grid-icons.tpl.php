<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<div class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="box-service__list">
    <?php foreach($items as $item): ?>
      <div class="box-service__item">
        <div class="box-service__image">
          <img src="<?php print $item['img_src']; ?>" alt="<?php print $item['img_alt']; ?>">
        </div>
        <div class="box-service__content">
          <h3 class="box-service__title"><?php print $item['title']; ?></h3>
          <div class="box-service__body"><p><?php print $item['desc']; ?></p></div>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
</div>
