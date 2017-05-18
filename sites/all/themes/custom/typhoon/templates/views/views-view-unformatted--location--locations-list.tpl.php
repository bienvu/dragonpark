<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="box-attractions">
  <?php if (!empty($title)): ?>
    <h3 class="block-title"><?php print $title; ?></h3>
  <?php endif; ?>
  <div class="box-attractions__list">
    <?php foreach ($rows as $id => $row): ?>
      <div class="box-attractions__item">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
