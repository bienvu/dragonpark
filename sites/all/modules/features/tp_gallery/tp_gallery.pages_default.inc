<?php
/**
 * @file
 * tp_gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tp_gallery_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'social_gallery';
  $page->task = 'page';
  $page->admin_title = 'Social Gallery';
  $page->admin_description = '';
  $page->path = 'gallery';
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
  $handler->name = 'page_social_gallery__panel';
  $handler->task = 'page';
  $handler->subtask = 'social_gallery';
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
  $display->uuid = '9341c223-b57b-4ded-a49a-39ee0146f457';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_social_gallery__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fb3d20c3-ec7e-4e51-992d-f34548e2d904';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'views-gallery-block_1';
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
  $pane->uuid = 'fb3d20c3-ec7e-4e51-992d-f34548e2d904';
  $display->content['new-fb3d20c3-ec7e-4e51-992d-f34548e2d904'] = $pane;
  $display->panels['contentmain_full'][0] = 'new-fb3d20c3-ec7e-4e51-992d-f34548e2d904';
  $pane = new stdClass();
  $pane->pid = 'new-c386e3f3-252c-4252-aec6-4614d2b463d8';
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
  $pane->uuid = 'c386e3f3-252c-4252-aec6-4614d2b463d8';
  $display->content['new-c386e3f3-252c-4252-aec6-4614d2b463d8'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-c386e3f3-252c-4252-aec6-4614d2b463d8';
  $pane = new stdClass();
  $pane->pid = 'new-01db6842-90bc-4fba-919e-215237d1baf1';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-gallery-page';
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
  $pane->uuid = '01db6842-90bc-4fba-919e-215237d1baf1';
  $display->content['new-01db6842-90bc-4fba-919e-215237d1baf1'] = $pane;
  $display->panels['feature'][0] = 'new-01db6842-90bc-4fba-919e-215237d1baf1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['social_gallery'] = $page;

  return $pages;

}
