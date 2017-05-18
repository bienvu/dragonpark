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
  <div class="box-navigation__list">
    <?php foreach($items as $item): ?>
      <div class="box-navigation__item">
        <div class="box-navigation__image">
          <a href="<?php print $item['link']; ?>"><img src="<?php print $item['img_src']; ?>" alt="<?php print $item['img_alt']; ?>" title = "<?php print $item['img_title']; ?>"></a></div>
        <h3 class="box-navigation__title">
          <a href="<?php print $item['link']; ?>"><?php print $item['title']; ?></a>
        </h3>
      </div>
    <?php endforeach; ?>
  </div>
</div>
