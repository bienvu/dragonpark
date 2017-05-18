<?php
/**
 * @file
 * Template for BB THEME.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="content-sidebar clearfix">
  <div class="feature">
    <?php print $content['feature']; ?>
  </div>
  <div class="main-content">
    <div class="container">
      <?php print $content['content_top']; ?>
      <div class="content-sidebar__content">
        <?php print $content['contentmain']; ?>
      </div>
      <div class="content-sidebar__sidebar">
        <?php print $content['sidebar']; ?>
      </div>
      <div class="content_bottom">
        <?php print $content['contentmain_bottom']; ?>
      </div>
    </div>
  </div>
</div><!-- /.bb-layout -->
