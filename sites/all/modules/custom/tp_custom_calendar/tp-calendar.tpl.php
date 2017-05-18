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
<div class="link-prev"><?php print $link_prev; ?></div>
<div class="link-next"><?php print $link_next; ?></div>
<div class="month"><?php print $low_month; ?></div>
<div class="month-next"><?php print $high_month; ?></div>
