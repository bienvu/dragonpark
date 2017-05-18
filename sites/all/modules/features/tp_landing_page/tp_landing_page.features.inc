<?php
/**
 * @file
 * tp_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tp_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tp_landing_page_node_info() {
  $items = array(
    'landing' => array(
      'name' => t('Landing'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function tp_landing_page_paragraphs_info() {
  $items = array(
    '2_tile_navigation' => array(
      'name' => '2-tile Navigation',
      'bundle' => '2_tile_navigation',
      'locked' => '1',
    ),
    '3_tile_navigation' => array(
      'name' => '3-tile Navigation',
      'bundle' => '3_tile_navigation',
      'locked' => '1',
    ),
    'grid_icons' => array(
      'name' => 'Grid Icons',
      'bundle' => 'grid_icons',
      'locked' => '1',
    ),
    'image_content' => array(
      'name' => 'Image - Content',
      'bundle' => 'image_content',
      'locked' => '1',
    ),
  );
  return $items;
}
