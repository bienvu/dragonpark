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
<div class="box-info bg-blue">
  <div class="box-info__icon">
    <i class="fa fa-calendar-check-o" aria-hidden="true"></i>
  </div>
  <div class="box-info__date-time">
    <div class="day"><?php print $day; ?></div>
    <div class=time><?php print $time; ?></div>
  </div>
  <div class="box-info__message">
    <h4 class="title"><?php print t('Opening times'); ?></h4>
  </div>
  <div class="box-info__price">
    <?php print t('Price')?> <span><?php print $price; ?></span>
  </div>
  <div class="box-info__message">
    <h4 class="title"><?php print t('Closing times'); ?></h4>
    <div class="message"><?php print $closing; ?></div>
  </div>
  <!-- <div class="box-info__buy-ticket">
    <a href="/contact-us" class="btn btn--icon-ticket"><?php print t('Buy ticket'); ?></a>
  </div> -->
</div>
