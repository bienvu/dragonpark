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
  <div class="content-sidebar__content">
    <div class="margin-bottom-20">
      <?php print render($content['field_image']); ?>
    </div>
    <!-- <h2<?php print $title_attributes; ?>>
      <?php print $title; ?>
    </h2> -->
    <?php print render($content['body']); ?>
    <?php print render($content['field_list_image']); ?>
    <h3 class="block-title"><?php print t('Comments'); ?></h3>
    <div class="fb-comments" data-href="<?php print url($node_url, array('absolute' => TRUE)); ?>" data-width="100%" data-numposts="5"></div>
  </div>
  <div class="content-sidebar__sidebar">
    <div class="box-info bg-blue">
      <div class="box-info__zone">
        <h2 class="title"><?php print $title; ?></h2>
        <div class="zone">
          <a href="/attractions?zone=<?php print $zone; ?>"><?php print render($content['field_zone']); ?></a>
        </div>
      </div>
      <?php if(!empty($deals)): ?>
        <div class="box-info__deal">
          <h2 class="title"><?php print t('Deals'); ?></h2>
          <ul>
            <?php foreach($deals as $deal): ?>
              <li class="<?php print(strtolower($deal)); ?>"><?php print $deal; ?></li>
            <?php endforeach; ?>
          </ul>
        </div>
      <?php endif; ?>
      <div class="box-info__turn">
        <h2 class="title"><?php print t('Height'); ?></h2>
        <div class="turn"><?php print $heightlocation; ?></div>
      </div>
      <!-- <div class="box-info__buy-ticket">
        <a href="/contact-us" class="btn btn--icon-ticket"><?php print t('Buy ticket'); ?></a>
      </div> -->
    </div>
    <div class="box-share">
      <h2 class="box-share__title"><?php print t('Share'); ?></h2>
      <div class="box-share__description"><p><?php print t('Share this page with your friends & family'); ?></p></div>
      <ul class="box-share__link">
        <li class="facebook"><a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" target="_blank"><i class="fa fa-facebook"></i></a></li>
        <li class="facebook"><a href="https://twitter.com/intent/tweet?url=<?php print $node_url; ?>" target="_blank"><i class="fa fa-twitter"></i></a></li>
        <li class="facebook"><a href="https://plus.google.com/share?url=<?php print $node_url; ?>" target="_blank"><i class="fa fa-google-plus"></i></a></li>
      </ul>
    </div>
  </div>
</div>

<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/vi_VN/sdk.js#xfbml=1&version=v2.8&appId=1096140120445516";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<script>window.twttr = (function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0],
    t = window.twttr || {};
  if (d.getElementById(id)) return t;
  js = d.createElement(s);
  js.id = id;
  js.src = "https://platform.twitter.com/widgets.js";
  fjs.parentNode.insertBefore(js, fjs);

  t._e = [];
  t.ready = function(f) {
    t._e.push(f);
  };

  return t;
}(document, "script", "twitter-wjs"));</script>

<script type="text/javascript">
  (function() {
    var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
    po.src = 'https://apis.google.com/js/platform.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>
