<?php
/**
 * @file
 * Template for Radix Boxton.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="one-column">
  <div class="feature">
    <?php print $content['feature']; ?>
  </div>
  <div class="main-content">
    <div class="container">
      <?php print $content['contentmain_top']; ?>
    </div>
    <div class="content__full">
      <?php print $content['contentmain_top_full']; ?>
    </div>
    <div class="content__full">
      <?php print $content['contentmain_full']; ?>
    </div>
    <div class="container">
      <?php print $content['contentmain']; ?>
    </div>
  </div>
</div><!-- /.sre-layout -->
