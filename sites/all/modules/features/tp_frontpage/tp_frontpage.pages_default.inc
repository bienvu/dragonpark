<?php
/**
 * @file
 * tp_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tp_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
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
      'contentmain_top' => NULL,
      'contentmain_top_full' => NULL,
      'contentmain_full' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ea2dbe32-7757-4423-bf01-c750c1ad71c7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fee3f60c-62a3-47ba-ad63-9adb0e64d51f';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'bean-explore-home-page';
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
  $pane->uuid = 'fee3f60c-62a3-47ba-ad63-9adb0e64d51f';
  $display->content['new-fee3f60c-62a3-47ba-ad63-9adb0e64d51f'] = $pane;
  $display->panels['contentmain_full'][0] = 'new-fee3f60c-62a3-47ba-ad63-9adb0e64d51f';
  $pane = new stdClass();
  $pane->pid = 'new-c66bac14-2642-4a84-8427-a60b7e83c01f';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'bean-schedule';
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
  $pane->uuid = 'c66bac14-2642-4a84-8427-a60b7e83c01f';
  $display->content['new-c66bac14-2642-4a84-8427-a60b7e83c01f'] = $pane;
  $display->panels['contentmain_full'][1] = 'new-c66bac14-2642-4a84-8427-a60b7e83c01f';
  $pane = new stdClass();
  $pane->pid = 'new-d963c868-430c-4e98-a572-c6b822e5a3b3';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'bean-box-attraction';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd963c868-430c-4e98-a572-c6b822e5a3b3';
  $display->content['new-d963c868-430c-4e98-a572-c6b822e5a3b3'] = $pane;
  $display->panels['contentmain_full'][2] = 'new-d963c868-430c-4e98-a572-c6b822e5a3b3';
  $pane = new stdClass();
  $pane->pid = 'new-c861a7a4-e638-4b5f-8d32-0dcc585e02ba';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'bean-services-0';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c861a7a4-e638-4b5f-8d32-0dcc585e02ba';
  $display->content['new-c861a7a4-e638-4b5f-8d32-0dcc585e02ba'] = $pane;
  $display->panels['contentmain_full'][3] = 'new-c861a7a4-e638-4b5f-8d32-0dcc585e02ba';
  $pane = new stdClass();
  $pane->pid = 'new-755923cf-52ec-4ba8-9b3a-ea4e8e9b65dc';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'bean-weather';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '755923cf-52ec-4ba8-9b3a-ea4e8e9b65dc';
  $display->content['new-755923cf-52ec-4ba8-9b3a-ea4e8e9b65dc'] = $pane;
  $display->panels['contentmain_full'][4] = 'new-755923cf-52ec-4ba8-9b3a-ea4e8e9b65dc';
  $pane = new stdClass();
  $pane->pid = 'new-84b8d133-22a3-4166-ab04-2701867b9003';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'bean-come-have-fun';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '84b8d133-22a3-4166-ab04-2701867b9003';
  $display->content['new-84b8d133-22a3-4166-ab04-2701867b9003'] = $pane;
  $display->panels['contentmain_full'][5] = 'new-84b8d133-22a3-4166-ab04-2701867b9003';
  $pane = new stdClass();
  $pane->pid = 'new-216d340b-a716-4e5e-bd99-634674277ba6';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'bean-contact-map';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '216d340b-a716-4e5e-bd99-634674277ba6';
  $display->content['new-216d340b-a716-4e5e-bd99-634674277ba6'] = $pane;
  $display->panels['contentmain_full'][6] = 'new-216d340b-a716-4e5e-bd99-634674277ba6';
  $pane = new stdClass();
  $pane->pid = 'new-2ddd7df4-1233-4c38-a644-4f34df9b6cd0';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-hero-slide-home-page';
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
  $pane->uuid = '2ddd7df4-1233-4c38-a644-4f34df9b6cd0';
  $display->content['new-2ddd7df4-1233-4c38-a644-4f34df9b6cd0'] = $pane;
  $display->panels['feature'][0] = 'new-2ddd7df4-1233-4c38-a644-4f34df9b6cd0';
  $pane = new stdClass();
  $pane->pid = 'new-594eb6cc-b9e6-441c-b5b4-4ef84e6256a0';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_booking-booking';
  $pane->shown = FALSE;
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
  $pane->uuid = '594eb6cc-b9e6-441c-b5b4-4ef84e6256a0';
  $display->content['new-594eb6cc-b9e6-441c-b5b4-4ef84e6256a0'] = $pane;
  $display->panels['feature'][1] = 'new-594eb6cc-b9e6-441c-b5b4-4ef84e6256a0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
