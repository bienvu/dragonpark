<?php
/**
 * @file
 * tp_direction.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tp_direction_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'direction_page';
  $page->task = 'page';
  $page->admin_title = 'How to get there';
  $page->admin_description = '';
  $page->path = 'how-to-get-there';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_direction_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'direction_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'one_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'feature' => NULL,
      'contentmain_top_full' => NULL,
      'contentmain' => NULL,
      'contentmain_top' => NULL,
      'contentmain_full' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2d8f5fc5-4fbb-4624-90e2-b835a7cde86e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_direction_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-68f02e95-d334-49a8-bbaf-1662cc964b0f';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_blocks-tp_direction';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68f02e95-d334-49a8-bbaf-1662cc964b0f';
  $display->content['new-68f02e95-d334-49a8-bbaf-1662cc964b0f'] = $pane;
  $display->panels['contentmain_full'][0] = 'new-68f02e95-d334-49a8-bbaf-1662cc964b0f';
  $pane = new stdClass();
  $pane->pid = 'new-7d368ce5-23a9-4201-9463-5b18d82bb087';
  $pane->panel = 'contentmain_top';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d368ce5-23a9-4201-9463-5b18d82bb087';
  $display->content['new-7d368ce5-23a9-4201-9463-5b18d82bb087'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-7d368ce5-23a9-4201-9463-5b18d82bb087';
  $pane = new stdClass();
  $pane->pid = 'new-b251981f-017e-4179-aca3-edbb1cc5b20a';
  $pane->panel = 'contentmain_top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b251981f-017e-4179-aca3-edbb1cc5b20a';
  $display->content['new-b251981f-017e-4179-aca3-edbb1cc5b20a'] = $pane;
  $display->panels['contentmain_top'][1] = 'new-b251981f-017e-4179-aca3-edbb1cc5b20a';
  $pane = new stdClass();
  $pane->pid = 'new-a2f928cc-6ab9-4b61-ad1f-d3501babd8d6';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-how-to-get-there';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a2f928cc-6ab9-4b61-ad1f-d3501babd8d6';
  $display->content['new-a2f928cc-6ab9-4b61-ad1f-d3501babd8d6'] = $pane;
  $display->panels['feature'][0] = 'new-a2f928cc-6ab9-4b61-ad1f-d3501babd8d6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['direction_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'map';
  $page->task = 'page';
  $page->admin_title = 'Map';
  $page->admin_description = '';
  $page->path = 'map';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_map__panel';
  $handler->task = 'page';
  $handler->subtask = 'map';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'one_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'feature' => NULL,
      'contentmain_top_full' => NULL,
      'contentmain' => NULL,
      'contentmain_top' => NULL,
      'contentmain_full' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8b559158-fc54-44ae-962b-9804d364800a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_map__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-43e805f3-f6eb-4bab-abb1-d19d788fb8f3';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_blocks-tp_map';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '43e805f3-f6eb-4bab-abb1-d19d788fb8f3';
  $display->content['new-43e805f3-f6eb-4bab-abb1-d19d788fb8f3'] = $pane;
  $display->panels['contentmain_full'][0] = 'new-43e805f3-f6eb-4bab-abb1-d19d788fb8f3';
  $pane = new stdClass();
  $pane->pid = 'new-1380cde2-653b-403d-b6a9-c12affd74f02';
  $pane->panel = 'contentmain_top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1380cde2-653b-403d-b6a9-c12affd74f02';
  $display->content['new-1380cde2-653b-403d-b6a9-c12affd74f02'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-1380cde2-653b-403d-b6a9-c12affd74f02';
  $pane = new stdClass();
  $pane->pid = 'new-b5cbcf2e-54b6-4e9c-bf57-9b96c74648d9';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-hero-map';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b5cbcf2e-54b6-4e9c-bf57-9b96c74648d9';
  $display->content['new-b5cbcf2e-54b6-4e9c-bf57-9b96c74648d9'] = $pane;
  $display->panels['feature'][0] = 'new-b5cbcf2e-54b6-4e9c-bf57-9b96c74648d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['map'] = $page;

  return $pages;

}
