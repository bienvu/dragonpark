<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="box-restaurent ">
  <?php if (!empty($title)): ?>
    <h3 class="block-title"><?php print $title; ?></h3>
  <?php endif; ?>
  <div class="box-restaurent__list">
    <?php foreach ($rows as $id => $row): ?>
      <div class="box-restaurent__item">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
