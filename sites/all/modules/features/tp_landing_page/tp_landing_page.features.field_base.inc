<?php
/**
 * @file
 * tp_landing_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tp_landing_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_item_icon'.
  $field_bases['field_item_icon'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_item_icon',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_navigation'.
  $field_bases['field_navigation'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_navigation',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_paragraphs'.
  $field_bases['field_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_paragraphs',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
