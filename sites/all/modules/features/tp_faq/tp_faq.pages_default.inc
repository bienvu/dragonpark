<?php
/**
 * @file
 * tp_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tp_faq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'helps';
  $page->task = 'page';
  $page->admin_title = 'Helps';
  $page->admin_description = '';
  $page->path = 'help';
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
  $handler->name = 'page_helps__panel';
  $handler->task = 'page';
  $handler->subtask = 'helps';
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
  $display->layout = 'left_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content_top' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'feature' => NULL,
      'contentmain_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '17b02797-83a0-4d38-a6fe-faad5a3db577';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_helps__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d7bb90db-19bf-4b86-98b8-48eea5e7668e';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_blocks-faq';
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
  $pane->uuid = 'd7bb90db-19bf-4b86-98b8-48eea5e7668e';
  $display->content['new-d7bb90db-19bf-4b86-98b8-48eea5e7668e'] = $pane;
  $display->panels['contentmain'][0] = 'new-d7bb90db-19bf-4b86-98b8-48eea5e7668e';
  $pane = new stdClass();
  $pane->pid = 'new-1f1c9382-8ea8-4152-81e3-d110b6ef83b1';
  $pane->panel = 'content_top';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
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
  $pane->uuid = '1f1c9382-8ea8-4152-81e3-d110b6ef83b1';
  $display->content['new-1f1c9382-8ea8-4152-81e3-d110b6ef83b1'] = $pane;
  $display->panels['content_top'][0] = 'new-1f1c9382-8ea8-4152-81e3-d110b6ef83b1';
  $pane = new stdClass();
  $pane->pid = 'new-73e78eab-8052-48f1-b35e-53be10eaba87';
  $pane->panel = 'content_top';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '73e78eab-8052-48f1-b35e-53be10eaba87';
  $display->content['new-73e78eab-8052-48f1-b35e-53be10eaba87'] = $pane;
  $display->panels['content_top'][1] = 'new-73e78eab-8052-48f1-b35e-53be10eaba87';
  $pane = new stdClass();
  $pane->pid = 'new-4241793d-441c-4892-be46-eaab13ace7a4';
  $pane->panel = 'content_top';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4241793d-441c-4892-be46-eaab13ace7a4';
  $display->content['new-4241793d-441c-4892-be46-eaab13ace7a4'] = $pane;
  $display->panels['content_top'][2] = 'new-4241793d-441c-4892-be46-eaab13ace7a4';
  $pane = new stdClass();
  $pane->pid = 'new-05457c46-1bd5-4479-95d0-c803ba86e118';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-help-page';
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
  $pane->uuid = '05457c46-1bd5-4479-95d0-c803ba86e118';
  $display->content['new-05457c46-1bd5-4479-95d0-c803ba86e118'] = $pane;
  $display->panels['feature'][0] = 'new-05457c46-1bd5-4479-95d0-c803ba86e118';
  $pane = new stdClass();
  $pane->pid = 'new-464d4171-4708-4989-8e76-22189e7936c8';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'bean-typhoon-water-park';
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
  $pane->uuid = '464d4171-4708-4989-8e76-22189e7936c8';
  $display->content['new-464d4171-4708-4989-8e76-22189e7936c8'] = $pane;
  $display->panels['sidebar'][0] = 'new-464d4171-4708-4989-8e76-22189e7936c8';
  $pane = new stdClass();
  $pane->pid = 'new-0fd242e9-1aec-4a1b-8700-df34605eb61d';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_blocks-tp_social';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0fd242e9-1aec-4a1b-8700-df34605eb61d';
  $display->content['new-0fd242e9-1aec-4a1b-8700-df34605eb61d'] = $pane;
  $display->panels['sidebar'][1] = 'new-0fd242e9-1aec-4a1b-8700-df34605eb61d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d7bb90db-19bf-4b86-98b8-48eea5e7668e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['helps'] = $page;

  return $pages;

}
