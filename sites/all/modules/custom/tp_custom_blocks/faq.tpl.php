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

<div class="box-search">
  <form>
    <div class="form-item">
      <input class="form-text txt-faq" maxlength="60" size="60" placeholder="<?php print t('Ask a question...'); ?>" type="text">
    </div>
    <div class="form-actions">
      <button>
        <i class="fa fa-search"></i>
      </button>
    </div>
  </form>
</div>

<div class="box-accordion">
  <?php foreach($faqs as $faq): ?>
    <div class="box-accordion__item">
      <div class="box-accordion__question js-direct"><?php print $faq['question']; ?></div>
      <div class="box-accordion__answer js-show">
        <?php print $faq['answer']; ?>
      </div>
    </div>
  <?php endforeach; ?>
</div>
