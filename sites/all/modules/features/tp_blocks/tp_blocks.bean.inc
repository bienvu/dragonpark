<?php
/**
 * @file
 * tp_blocks.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function tp_blocks_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'box_attraction';
  $bean_type->label = 'Box attraction';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['box_attraction'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'box_links';
  $bean_type->label = 'Box links';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['box_links'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'contact';
  $bean_type->label = 'Contact';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['contact'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'cta';
  $bean_type->label = 'Call to action';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['cta'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'explore';
  $bean_type->label = 'Explore';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['explore'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'hero';
  $bean_type->label = 'Hero';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['hero'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'hero_slide';
  $bean_type->label = 'Hero slide';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['hero_slide'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'image';
  $bean_type->label = 'Image';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['image'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'map';
  $bean_type->label = 'Map';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['map'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'price_table';
  $bean_type->label = 'Price table';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['price_table'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'schedule';
  $bean_type->label = 'Schedule';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['schedule'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'services';
  $bean_type->label = 'Services';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['services'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'social';
  $bean_type->label = 'Social';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['social'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'weather';
  $bean_type->label = 'Weather';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['weather'] = $bean_type;

  return $export;
}
