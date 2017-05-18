<?php
/**
 * @file
 */

function tp_map_find_location() {
  $languages = language_list();
  $post = $_REQUEST;
  $lang = !empty($_REQUEST['lang']) ? $_REQUEST['lang'] : 'en';
  $term = !empty($_REQUEST['filter_activity']) ? $_REQUEST['filter_activity'] : NULL;
  $title = !empty($_REQUEST['filter_name']) ? $_REQUEST['filter_name'] : NULL;
  $items = _get_locations($term, $title, $lang);
  $locations = array();
  foreach ($items as $key => $item) {
    $img = $item->field_image[LANGUAGE_NONE][0];
    $desc = $item->field_description[$lang][0]['value'];
    $icon = $item->field_icon[LANGUAGE_NONE][0];
    $location = array();
    $location['id'] = $item->nid;
    $location['title'] = $item->title;
    $html = '';
    $html .= '<div class="mini-activity">';
    $html .= '<div class="image">';
    $html .= '<img src="' . image_style_url('90x90', $img['uri']) . '" alt="' . $item->title . '"></div>';
    $html .= '<div class="description">';
    $html .= '<h4>' . l($item->title, 'node/' . $item->nid, array('language' => $languages[$lang])) . '</h4>';
    $html .= $desc;
    $html .= '<div class="detail">' . l(t('Read more'), 'node/' . $item->nid, array('language' => $languages[$lang])) . '</div>';
    $html .= '</div>';
    $location['html'] = $html;
    $location['icon'] = file_create_url($icon['uri']);
    $location['gmap_lat'] = $item->field_position[LANGUAGE_NONE][0]['lat'];
    $location['gmap_lng'] = $item->field_position[LANGUAGE_NONE][0]['lon'];
    $locations[] = $location;
  }
  drupal_json_output($locations);
  drupal_exit();
}

function _get_locations($tid = NULL, $title = NULL, $lang = NULL) {
  $query = db_select('node', 'n');
  $query->leftJoin('field_data_field_taxonomy', 'term', 'term.entity_id=n.nid');
  $query->fields('n', array('nid', 'title', 'type', 'language'));
  $query->fields('term', array('field_taxonomy_target_id'));
  $query->condition('n.type', 'location', '=');
  if ($lang) {
    $query->condition('n.language', $lang, '=');
  }
  if ($title) {
    $query->condition('n.title', '%' . $title . '%', 'LIKE');
  }
  if ($tid && $tid != 'All') {
    $query->condition('term.field_taxonomy_target_id', $tid, '=');
  }

  $results = $query->execute()->fetchAll();
  $nids = array();
  foreach ($results as $result) {
    $nids[] = $result->nid;
  }

  $news_items = array();
  if (!empty($nids)) {
    $news_items = entity_load('node', $nids);
  }
  return $news_items;
}
