<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<div class="box-hero">
  <div class="box-hero__image"><?php print render($content['field_banner']); ?></div>
  <h2 class="box-hero__title animated"><?php print $title; ?></h2>
</div>
