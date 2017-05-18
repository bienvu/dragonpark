<?php
/**
 * @file
 */
?>

<div class="<?php print $classes; ?> parallax" style='background-image: url("<?php print $img_src; ?>");
  background-position: center bottom;
  background-repeat: no-repeat;'>
  <div class="box-explore__content">
    <div class="box-explore__content__inner">
      <ul class="box-explore__list js-hover">
        <?php foreach($items as $item): ?>
          <li class="<?php print $item['class']; ?>">
            <a href="<?php print $item['link']; ?>"><span class="image js-scroll-appear animated" data-scroll-appear="fadeInUp"><span><img src="<?php print $item['icon_src']; ?>" alt="<?php print $item['icon_alt']; ?>"></span></span></a>
            <a href="<?php print $item['link']; ?>"><span class="text "><span><?php print $item['title']; ?></span></span></a>
          </li>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
</div>
