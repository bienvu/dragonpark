<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */

/**
 * Override or insert variables into the html template.
 */
function typhoon_preprocess_html(&$vars) {
  // Add our custom CSS after all other CSS.
  drupal_add_css(path_to_theme() . '/css/styles.css', array(
    'weight' => 999,
    'preprocess' => false,
  ));
  // Load modernizr.
  drupal_add_js(
    path_to_theme(). '/js/lib/modernizr.min.js',
    array(
      'group' => JS_LIBRARY,
      'every_page' => TRUE,
      'preprocess' => TRUE,
      'weight' => -1,
      'scope' => 'head_scripts',
    )
  );
  //Create header scope for js placement
  $vars['head_scripts'] = drupal_get_js('head_scripts');
  // Add our custom JS in footer, after all other JS.
  drupal_add_js(path_to_theme() . '/js/script.js', array(
    'scope' => 'footer',
    'weight' => 999,
    'preprocess' => false,
  ));
}

/**
 * Override or insert variables into the page template.
 */
function typhoon_preprocess_page(&$vars) {
  $vars['logo'] = '/' . path_to_theme() . '/logo.png';

  if (isset($vars['node']->type)) {
    $nodetype = $vars['node']->type;
    $vars['theme_hook_suggestions'][] = 'page__' . $nodetype;
  }

  if (module_exists('page_manager') && count(page_manager_get_current_page())) {
    $vars['theme_hook_suggestions'][] = 'page__panels';
  }
}

/**
 * Override or insert variables into the node template.
 */
function typhoon_preprocess_node(&$vars) {
  if ($vars['view_mode'] == 'full' && node_is_page($vars['node'])) {
    $vars['classes_array'][] = 'node-full';
  }

  $node = $vars['node'];
  $node_wp = entity_metadata_wrapper('node', $node);
  // Add theme hook suggestion.
  if (!empty($vars['view_mode'])) {
    // Create theme suggestions for node types and view modes.
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $vars['view_mode'];
  }

  if ($vars['node']->type === 'location' && $vars['view_mode'] == 'full') {
    $vars['deals'] = $node_wp->field_deal->value();
  }

  if ($vars['node']->type === 'gallery') {
    $img = $node_wp->field_image->value();
    $style = $node_wp->field_size_thumnail->value();
    $vars['img_src'] = file_create_url($img['uri']);
    $vars['img_thumb'] = image_style_url($style, $img['uri']);
    $vars['img_alt'] = empty($img['alt']) ? $vars['title'] : $img['alt'];
  }

  if ($vars['node']->type === 'event') {
    $datetime = $node_wp->field_datetime->value();
    $date = array();
    foreach ($datetime as $item) {
      $date[] = date('d M Y', $item);
    }
    $vars['times'] = $node_wp->field_time->value();
    $vars['date'] = implode('<br/>', $date);
  }

  if ($vars['node']->type == 'location' || ($vars['node']->type === 'event')) {
    $vars['zone'] = $node_wp->field_zone->value();
  }
}

function typhoon_links($variables) {
  if (array_key_exists('id', $variables['attributes']) && $variables['attributes']['id'] == 'main-menu-links') {
      $pid = variable_get('menu_main_links_source', 'main-menu');
    $tree = menu_tree($pid);
    return drupal_render($tree);
  }
  return theme_links($variables);
}


/**
 * Implements hook_preprocess_entity().
 */
function typhoon_preprocess_entity(&$vars) {
  if ($vars['entity_type'] == 'bean') {
    $function_name = "typhoon_preprocess_bean_{$vars['bean']->type}";
    if (function_exists($function_name)) {
      call_user_func_array($function_name, array(&$vars));
    }
  }

  if ($vars['entity_type'] == 'paragraphs_item') {
    $function_name = "typhoon_preprocess_paragraphs_item_{$vars['paragraphs_item']->bundle}";
    if (function_exists($function_name)) {
      call_user_func_array($function_name, array(&$vars));
    }
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Box links
 */
function typhoon_preprocess_bean_box_links(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-menu';
  $vars['classes_array'][] = 'bg-image';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $vars['items'] = array();
  foreach ($bean_wp->language($lang_code)->field_links->value() as $key => $link) {
    $vars['items'][$key]['url'] = $link['url'];
    $vars['items'][$key]['title'] = $link['title'];
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Block Title
 */
function typhoon_preprocess_bean_block_title(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-title';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $vars['title_large'] = $bean_wp->language($lang_code)->field_large_title->value();
}


/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Box location
 */
function typhoon_preprocess_bean_box_location(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-location';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $img = $bean_wp->field_location_image->value();
  $vars['img_src'] = file_create_url($img['uri']);
  $vars['img_alt'] = $img['alt'];
  $vars['items'] = array();
  foreach ($bean_wp->language($lang_code)->	field_location_link->value() as $key => $link) {
    $vars['items'][$key]['url'] = $link['url'];
    $vars['items'][$key]['title'] = $link['title'];
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Box zone intro
 */
function typhoon_preprocess_bean_box_zone_intro(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-intro';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = $bean_wp->title->value();
  $video = $bean_wp->field_zone_video_intro->value();
  $vars['video_src'] = file_create_url($video['uri']);
  $items = $bean_wp->field_zone_intro_item->value();
  foreach ($items as $key => $item) {
    $item_wp = entity_metadata_wrapper('field_collection_item', $item, $info);
    $img = $item_wp->field_zone_image->value();
    $vars['items'][$key]['img_src'] = image_style_url('960x530', $img['uri']);
    $vars['items'][$key]['img_alt'] = $img['alt'];
    $link = $item_wp->language($lang_code)->field_zone_link->value();
    $vars['items'][$key]['name'] = $item_wp->language($lang_code)->field_zone_name->value();
    $vars['items'][$key]['title'] = $item_wp->language($lang_code)->field_zone_title->value();
    $vars['items'][$key]['body'] = $item_wp->language($lang_code)->field_zone_body->value();
    $vars['items'][$key]['link'] = $link['url'];
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Contact
 */
function typhoon_preprocess_bean_contact(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-contact';
  $vars['classes_array'][] = 'bg-image';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $vars['desc'] = $bean_wp->language($lang_code)->field_description->value();
  $vars['items'] = array();
  foreach ($bean_wp->field_contact_item->getIterator() as $key => $item) {
    $vars['items'][$key]['icon'] = $item->field_class->value();
    $vars['items'][$key]['info'] = $item->language($lang_code)->field_infor->value();
  }
  $link = $bean_wp->language($lang_code)->field_link->value();
  if (!empty($link)) {
    $vars['link_url'] = $link['url'];
    $vars['link_title'] = $link['title'];
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: hero
 */
function typhoon_preprocess_bean_hero(&$vars) {
  $vars['classes_array'][] = 'box-hero';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $banner = $bean_wp->field_banner->value();
  $vars['img_src'] = file_create_url($banner['uri']);
  $vars['img_alt'] = $banner['alt'];
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: hero slide
 */
function typhoon_preprocess_bean_hero_slide(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-hero-slide js-hero-slide';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = $bean_wp->title->value();
  $items = $bean_wp->field_slide_item->value();
  foreach ($items as $key => $item) {
    $item_wp = entity_metadata_wrapper('field_collection_item', $item, $info);
    $img = $item_wp->field_banner->value();
    $link = $item_wp->language($lang_code)->field_link->value();
    $vars['items'][$key]['small_title'] = $item_wp->language($lang_code)->field_small_title->value();
    $vars['items'][$key]['title'] = $item_wp->language($lang_code)->field_title->value();
    $vars['items'][$key]['link'] = $link['url'];
    $vars['items'][$key]['desc'] = $item_wp->language($lang_code)->field_description->value();
    if (!empty($img)) {
      $vars['items'][$key]['img_src'] = file_create_url($img['uri']);
      $vars['items'][$key]['img_alt'] = $img['alt'] ? $img['alt'] : $item_wp->field_title->value();
    }
    else {
      $video = $item_wp->field_video->value();
      $vars['items'][$key]['video_src'] = file_create_url($video['uri']);
    }
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: image
 */
function typhoon_preprocess_bean_image(&$vars) {
  $vars['classes_array'][] = 'box-image';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean);
  $vars['items'] = array();
  $img = $bean_wp->field_image->value();
  $vars['img_src'] = file_create_url($img['uri']);
  $vars['img_alt'] = $img['alt'];
  if ($bean_wp->field_box_image_style->value()) {
    $vars['classes_array'][] = $bean_wp->field_box_image_style->value();
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: schedule
 */
function typhoon_preprocess_bean_schedule(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-schedule';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $img = $bean_wp->field_image->value();
  $vars['img_src'] = file_create_url($img['uri']);
  $vars['img_alt'] = $img['alt'] ? $img['alt'] : $bean_wp->title->value();
  $vars['desc'] = $bean_wp->language($lang_code)->field_description->value();
  $vars['note'] = $bean_wp->language($lang_code)->field_infor->value();
  $link = $bean_wp->language($lang_code)->field_link->value();
  $vars['link'] = $link['url'];
  foreach ($bean_wp->field_schedule_item->getIterator() as $key => $item) {
    $vars['items'][$key]['label'] = $item->language($lang_code)->field_title->value();
    $vars['items'][$key]['months'] = $item->language($lang_code)->field_txt_date->value();
    $vars['items'][$key]['time'] = $item->language($lang_code)->field_txt_time->value();
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: attractions
 */
function typhoon_preprocess_bean_box_attraction(&$vars) {
  global $language;
  $lang_code = $language->language;
  module_load_include('inc', 'tp_custom_blocks', 'tp_custom_blocks');
  $vars['classes_array'][] = 'box-image-attraction';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean);
  $vars['items'] = array();
  $link = $bean_wp->field_link->value();
  $vars['link'] = $link['url'];
  $term = $bean_wp->field_taxonomy->value();
  if (function_exists('_get_locations')) {
    $locations = _get_locations($term->tid, NULL, $lang_code);
    foreach ($locations as $key => $location) {
      $item_wp = entity_metadata_wrapper('node', $location);
      $icon = $item_wp->field_logo->value();
      $img = $item_wp->field_banner->value();
      $vars['items'][$key]['img_src'] = image_style_url('1300x580', $img['uri']);
      $vars['items'][$key]['img_alt'] = $img['alt'] ? $img['alt'] : $location->title;
      $vars['items'][$key]['icon_src'] = image_style_url('100x110', $icon['uri']);
      $vars['items'][$key]['icon_alt'] = $icon['alt'] ? $icon['alt'] : $location->title;
      $vars['items'][$key]['title'] = $location->title;
      $desc = $item_wp->field_description->value();
      $vars['items'][$key]['body'] = $desc;
      $vars['items'][$key]['url'] = url('node/' . $location->nid);
    }
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: weather
 */
function typhoon_preprocess_bean_weather(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-weather';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $img = $bean_wp->field_image->value();
  $vars['img_src'] = file_create_url($img['uri']);
  $vars['img_alt'] = $img['alt'] ? $img['alt'] : $bean_wp->title->value();
  $vars['desc'] = $bean_wp->language($lang_code)->field_description->value();
  $vars['status'] = $bean_wp->language($lang_code)->field_status->value();
  // Get weathe information.
  $geodata = $bean_wp->field_position->value();
  $url = 'http://api.apixu.com/v1/forecast.json?key=2866af6c192844a991b73914170903&q=' . $geodata['lat'] . ',' . $geodata['lon'];
  $json = file_get_contents($url);
  $data = json_decode($json,true);
  if ($data['current']['precip_mm'] > 0.5) {
    $vars['weather'] = 'rain';
  }
  else {
    $vars['weather'] = 'sun';
  }
  $vars['temp'] = $data['current']['temp_c'];
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Call to action
 */
function typhoon_preprocess_bean_cta(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-have-fun';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $img = $bean_wp->field_image->value();
  $vars['img_src'] =  image_style_url('1300x430', $img['uri']);
  $vars['img_alt'] = $img['alt'] ? $img['alt'] : $bean_wp->title->value();
  $link = $bean_wp->language($lang_code)->field_link->value();
  $vars['link'] = $link['url'];
  $vars['link_title'] = $link['title'];
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Map
 */
function typhoon_preprocess_bean_map(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-gmap margin-top-30';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $vars['map'] = $bean_wp->language($lang_code)->field_description->value();
  $vars['info'] = $bean_wp->language($lang_code)->field_contact->value();
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: Price Table
 */
function typhoon_preprocess_bean_price_table(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-ticket-price';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  $vars['title'] = t($bean_wp->title->value());
  $vars['date'] = $bean_wp->language($lang_code)->field_txt_date->value();
  $vars['desc'] = $bean_wp->language($lang_code)->field_description->value();
  $vars['note'] = $bean_wp->language($lang_code)->field_contact->value();
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: explore
 */
function typhoon_preprocess_bean_explore(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-explore';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $img = $bean_wp->field_image_background->value();
  $vars['img_src'] = image_style_url('1300x580', $img['uri']);
  $vars['img_alt'] = $img['alt'] ? $img['alt'] : $bean_wp->title->value();
  $vars['items'] = array();
  foreach ($bean_wp->field_explore_item->getIterator() as $key => $item) {
    $link = $item->language($lang_code)->field_link->value();
    $icon = $item->field_icon->value();
    $vars['items'][$key]['title'] = $item->language($lang_code)->field_title->value();
    $vars['items'][$key]['icon_src'] = file_create_url($icon['uri']);
    $vars['items'][$key]['icon_alt'] = $icon['title'] ? $icon['title'] : $item->field_title->value();
    if ($key == 0) {
      $vars['items'][$key]['class'] = 'active';
    }
    else {
      $vars['items'][$key]['class'] = '';
    }
    $vars['items'][$key]['link'] = $link['url'];
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: social.
 */
function typhoon_preprocess_bean_social(&$vars) {
  $vars['classes_array'][] = 'box-social';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean);
  $vars['items'] = array();
  foreach ($bean_wp->field_social_item->getIterator() as $key => $item) {
    $link = $item->field_link->value();
    $vars['items'][$key]['class'] = $item->field_class->value();
    $vars['items'][$key]['link_url'] = $link['url'];
    $vars['items'][$key]['link_title'] = $link['title'];
  }
}

/**
 * Implements hook_preprocess_bean_bean_type().
 *
 * Bean type: explore
 */
function typhoon_preprocess_bean_services(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'box-grid-service';
  $bean = $vars['bean'];
  $bean_wp = entity_metadata_wrapper('bean', $bean, $info);
  $vars['items'] = array();
  foreach ($bean_wp->field_service_item->getIterator() as $key => $item) {
    $img = $item->field_image->value();
    $icon = $item->field_logo->value();
    $link = $item->language($lang_code)->field_link->value();
    $vars['items'][$key]['title'] = $item->language($lang_code)->field_title->value();
    $vars['items'][$key]['img_src'] = image_style_url('385x680', $img['uri']);
    $vars['items'][$key]['img_alt'] = $img['alt'] ? $img['alt'] : $item->language($lang_code)->field_title->value();
    $vars['items'][$key]['icon_src'] = image_style_url('40x50', $icon['uri']);
    $vars['items'][$key]['icon_alt'] = $icon['title'] ? $icon['title'] : $item->language($lang_code)->field_title->value();
    $vars['items'][$key]['desc'] = $item->language($lang_code)->field_description->value();
    $vars['items'][$key]['link'] = $link['url'];
    $vars['items'][$key]['link_title'] = $link['title'] ? $link['title'] : t('View more');
  }
}


/**
 * Function Hook_preprocess_paragraph_item_2_tile_navigation.
 */
function typhoon_preprocess_paragraphs_item_2_tile_navigation(&$vars) {
  $vars['classes_array'][] = 'box-navigation';
  $vars['classes_array'][] = 'box-navigation--two-col';
  $pg_item = $vars['paragraphs_item'];
  $pg_wp = entity_metadata_wrapper('paragraphs_item', $pg_item);
  $vars['items'] = array();
  foreach ($pg_wp->field_navigation->getIterator() as $key => $item) {
    $img = $item->field_image->value();
    $link = $item->field_link->value();
    $vars['items'][$key]['title'] = $item->field_title->value();
    $vars['items'][$key]['link'] = $link['url'];
    $vars['items'][$key]['img_src'] = image_style_url('655x375', $img['uri']);
    $vars['items'][$key]['img_alt'] = $img['alt'] ? $img['alt'] : $item->field_title->value();
    $vars['items'][$key]['img_title'] = $img['title'] ? $img['title'] : $item->field_title->value();
  }
}

/**
 * Function Hook_preprocess_paragraph_item_2_tile_navigation.
 */
function typhoon_preprocess_paragraphs_item_3_tile_navigation(&$vars) {
  $vars['classes_array'][] = 'box-navigation';
  $pg_item = $vars['paragraphs_item'];
  $pg_wp = entity_metadata_wrapper('paragraphs_item', $pg_item);
  $vars['items'] = array();
  foreach ($pg_wp->field_navigation->getIterator() as $key => $item) {
    $img = $item->field_image->value();
    $link = $item->field_link->value();
    $vars['items'][$key]['title'] = $item->field_title->value();
    $vars['items'][$key]['link'] = $link['url'];
    $vars['items'][$key]['img_src'] = image_style_url('440x250', $img['uri']);
    $vars['items'][$key]['img_alt'] = $img['alt'] ? $img['alt'] : $item->field_title->value();
    $vars['items'][$key]['img_title'] = $img['title'] ? $img['title'] : $item->field_title->value();
  }
}

/**
 * Function Hook_preprocess_paragraph_item_grid_icons.
 */
function typhoon_preprocess_paragraphs_item_grid_icons(&$vars) {
  $vars['classes_array'][] = 'box-service';
  $pg_item = $vars['paragraphs_item'];
  $pg_wp = entity_metadata_wrapper('paragraphs_item', $pg_item);
  $vars['items'] = array();
  foreach ($pg_wp->field_item_icon->getIterator() as $key => $item) {
    $img = $item->field_image->value();
    $vars['items'][$key]['title'] = $item->field_title->value();
    $vars['items'][$key]['img_src'] = file_create_url($img['uri']);
    $vars['items'][$key]['img_alt'] = $img['alt'] ? $img['alt'] : $item->field_title->value();
    $vars['items'][$key]['desc'] = $item->field_description->value();
  }
}

/**
 * Function Hook_preprocess_paragraph_item_grid_icons.
 */
function typhoon_preprocess_paragraphs_item_image_content(&$vars) {
  global $language;
  $lang_code = $language->language;
  $info = array('langcode' => $lang_code);
  $vars['classes_array'][] = 'guide-park';
  $pg_item = $vars['paragraphs_item'];
  $pg_wp = entity_metadata_wrapper('paragraphs_item', $pg_item, $info);
  $img = $pg_wp->field_image->value();
  if (isset($pg_item->field_title[$lang_code])) {
    $vars['title'] = $pg_item->field_title[$lang_code][0]['value'];
  }
  else {
    $vars['title'] = $pg_item->field_title[LANGUAGE_NONE][0]['value'];
  }
  $vars['desc'] = $pg_item->field_description[LANGUAGE_NONE][0]['value'];
  $vars['img_src'] = image_style_url('570x305', $img['uri']);
  $vars['img_alt'] = $img['alt'] ? $img['alt'] : $pg_wp->field_title->value();
}

function typhoon_views_pre_render(&$view) {
  global $language;
  $lang_code = $language->language;
  if ($view->name == 'location') {
    if ($view->current_display == 'locations_list') {
      foreach ($view->result as $key => $result) {
        $intensiy = $result->field_field_intensity[0]['raw']['value'];
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node')
          ->entityCondition('bundle', 'location')
          ->propertyCondition('status', NODE_PUBLISHED)
          ->propertyCondition('language', $lang_code)
          ->fieldCondition('field_intensity', 'value', $intensiy);
        $result = $query->execute();
        $news_items = array();
        if (isset($result['node'])) {
          $news_items_nids = array_keys($result['node']);
          $news_items = entity_load('node', $news_items_nids);
        }
        $view->result[$key]->field_field_intensity[0]['rendered']['#markup'] = '<span>' . t($intensiy) . '</span><span class="content-number">(' . count($news_items) . ')</span>';
      }
    }
    if ($view->current_display == 'location_term') {
      foreach ($view->result as $key => $result) {
        $tid = $result->field_field_taxonomy[0]['raw']['target_id'];
        $name = $result->field_field_taxonomy[0]['rendered']['#markup'];
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node')
          ->entityCondition('bundle', 'location')
          ->propertyCondition('status', NODE_PUBLISHED)
          ->propertyCondition('language', $lang_code)
          ->fieldCondition('field_taxonomy', 'target_id', $tid);
        $result = $query->execute();
        $news_items = array();
        if (isset($result['node'])) {
          $news_items_nids = array_keys($result['node']);
          $news_items = entity_load('node', $news_items_nids);
        }
        $view->result[$key]->field_field_taxonomy[0]['rendered']['#markup'] = $name . '<span class="content-number">(' . count($news_items) . ')</span>';
      }
    }
  }
}

/**
 * Preprocess breadcrumb.
 */
function typhoon_preprocess_breadcrumb(&$vars) {
  global $language;
  $lang_code = $language->language;
  $breadcrumb = array();
  $tree = menu_get_active_trail();
  foreach ($tree as $key => $item) {
    if ($key == (count($tree) - 1)) {
      $breadcrumb[] = $item['title'];
    }
    else {
      $breadcrumb[] = l($item['title'], $item['href']);
    }
  }

  $node = menu_get_object('node');
  if (isset($node) && $node->type == 'location') {
    $breadcrumb = array();
    $breadcrumb[] = l(t('Home'), '<front>');
    if ($lang_code == 'en') {
      $breadcrumb[] = l(t('Explore the park'), '/explore-park');
    }
    else {
      $breadcrumb[] = l(t('Explore the park'), '/kham-pha-cong-vien');
    }
    if (!empty($node->field_taxonomy)) {
      $tid = $node->field_taxonomy[$lang_code][0]['target_id'];
      $term = taxonomy_term_load($tid);
      $breadcrumb[] = l($term->name, 'taxonomy/term/' . $tid);
    }
    $breadcrumb[] = $node->title;
  }

  $vars['breadcrumb'] = $breadcrumb;
}

/**
 * Returns HTML for a breadcrumb trail.
 *
 * @param $variables
 *   An associative array containing:
 *   - breadcrumb: An array containing the breadcrumb links.
 */
function typhoon_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    $output = '<div class="breadcrumb">' . implode(' <i>/</i> ', $breadcrumb) . '</div>';
    return $output;
  }
}
