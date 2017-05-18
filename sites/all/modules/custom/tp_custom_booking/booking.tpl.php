<?php

/**
 * @file
 * Default theme implementation to display a block.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<div class="block-tabs">
  <div class="container">
    <div class="block-tabs__switcher">
      <a href="" class="tab-ticket js-block-tab-switcher active" data-index="0"><?php print t('Buy ticket'); ?></a>
      <a href="" class="tab-hotel js-block-tab-switcher" data-index="1"><?php print t('Buy Hotel') ?></a>
    </div>
    <div class="block-tabs__container">
      <div class="block-tabs__container__tab active" data-index="0">
        <?php print drupal_render($ticket); ?>
      </div>
      <div class="block-tabs__container__tab" data-index="1">
        <?php print drupal_render($hotel); ?>
      </div>
  </div>
  </div>
</div>
