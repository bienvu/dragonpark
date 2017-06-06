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
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_suffix); ?>
  <div class="margin-bottom-20">
    <?php print render($content['field_image']); ?>
  </div>
  <?php print render($content['body']); ?>
</div>
