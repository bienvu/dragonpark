<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
$term = taxonomy_term_load(arg(2));
$term_name = $term->name;
// print_r($term_name);die;
?>
<?php if ($term_name === 'Scenic Architecture' or $term_name === 'Kiến trúc cảnh quan'): ?>
  <div class="box-attractions__image">
    <a data-fancybox="images" href="http://dragonpark.local/sites/default/files/image/<?php print $content['field_image']['0']['#item']['filename']; ?>"><?php print render($content['field_image']); ?></a>
  </div>
<?php else: ?>
  <div class="box-attractions__image">
    <a href="<?php print $node_url; ?>"><?php print render($content['field_image']); ?></a>
    <div class="box-attractions__info">
      <h3 class="box-attractions__title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
      <?php if ($content['field_height'] || $content['field_zone']): ?>
      <ul class="box-attractions__wrap">
        <li class="height"><?php print render($content['field_height']); ?></li>
        <li class="target"><?php print render($content['field_zone']); ?></li>
      </ul>
      <?php endif; ?>
    </div>
  </div>
<?php endif; ?>
