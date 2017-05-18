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
  <div class="container">
    <div class="guide-park__image">
      <img src="<?php print $img_src; ?>" alt="<?php print $img_alt; ?>">
    </div>
    <div class="guide-park__content">
      <h2><?php print $title; ?></h2>
      <?php print $desc; ?>
    </div>
  </div>
</div>
