<?php
/**
 * @file
 * Default theme implementation to display a block.
 * API Key: AIzaSyCTfXeTSJYhzfb8dphh6NwREJXUHWpvyLA
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="box-share">
  <h2 class="box-share__title"><?php print t('Share'); ?></h2>
  <div class="box-share__description"><p><?php print t('Share this page with your friends & family'); ?></p></div>
  <ul class="box-share__link">
    <li class="facebook"><a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $href; ?>" target="_blank"><i class="fa fa-facebook"></i></a></li>
    <li class="facebook"><a href="https://twitter.com/intent/tweet?url=<?php print $href; ?>" target="_blank"><i class="fa fa-twitter"></i></a></li>
    <li class="facebook"><a href="https://plus.google.com/share?url=<?php print $href; ?>" target="_blank"><i class="fa fa-google-plus"></i></a></li>
  </ul>
</div>
