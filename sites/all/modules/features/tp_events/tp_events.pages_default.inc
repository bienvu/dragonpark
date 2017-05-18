<?php
/**
 * @file
 * tp_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tp_events_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_d157013b-4bbb-4a39-b6db-b61e0e237469';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Event Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->uuid = '64ee2c2c-4cac-47d7-9064-5d30b5e4eb50';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_d157013b-4bbb-4a39-b6db-b61e0e237469';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-11d257c2-e095-4ce0-a9d9-23a4fdba806b';
  $pane->panel = 'contentmain';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 1,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '11d257c2-e095-4ce0-a9d9-23a4fdba806b';
  $display->content['new-11d257c2-e095-4ce0-a9d9-23a4fdba806b'] = $pane;
  $display->panels['contentmain'][0] = 'new-11d257c2-e095-4ce0-a9d9-23a4fdba806b';
  $pane = new stdClass();
  $pane->pid = 'new-eea4f7b5-a277-46e1-bf26-2cb57c60b936';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'views-events-event_more';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'More show',
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
  $pane->uuid = 'eea4f7b5-a277-46e1-bf26-2cb57c60b936';
  $display->content['new-eea4f7b5-a277-46e1-bf26-2cb57c60b936'] = $pane;
  $display->panels['contentmain'][1] = 'new-eea4f7b5-a277-46e1-bf26-2cb57c60b936';
  $pane = new stdClass();
  $pane->pid = 'new-c5d1f63a-33d1-43f3-934e-46b857903b4c';
  $pane->panel = 'contentmain_top';
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
  $pane->uuid = 'c5d1f63a-33d1-43f3-934e-46b857903b4c';
  $display->content['new-c5d1f63a-33d1-43f3-934e-46b857903b4c'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-c5d1f63a-33d1-43f3-934e-46b857903b4c';
  $pane = new stdClass();
  $pane->pid = 'new-066c151d-edca-4973-8c8b-5eb337a16ada';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '066c151d-edca-4973-8c8b-5eb337a16ada';
  $display->content['new-066c151d-edca-4973-8c8b-5eb337a16ada'] = $pane;
  $display->panels['contentmain_top'][1] = 'new-066c151d-edca-4973-8c8b-5eb337a16ada';
  $pane = new stdClass();
  $pane->pid = 'new-52ccd006-8a5e-4556-aa00-260f58f260a9';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '52ccd006-8a5e-4556-aa00-260f58f260a9';
  $display->content['new-52ccd006-8a5e-4556-aa00-260f58f260a9'] = $pane;
  $display->panels['contentmain_top'][2] = 'new-52ccd006-8a5e-4556-aa00-260f58f260a9';
  $pane = new stdClass();
  $pane->pid = 'new-2bb44d4e-791a-40bb-8e17-5b3b3a6d9d8b';
  $pane->panel = 'feature';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 1,
    'build_mode' => 'hero',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '2bb44d4e-791a-40bb-8e17-5b3b3a6d9d8b';
  $display->content['new-2bb44d4e-791a-40bb-8e17-5b3b3a6d9d8b'] = $pane;
  $display->panels['feature'][0] = 'new-2bb44d4e-791a-40bb-8e17-5b3b3a6d9d8b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_d157013b-4bbb-4a39-b6db-b61e0e237469'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function tp_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'opening_days';
  $page->task = 'page';
  $page->admin_title = 'Opening Days';
  $page->admin_description = '';
  $page->path = 'opening-days';
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
  $handler->name = 'page_opening_days__panel';
  $handler->task = 'page';
  $handler->subtask = 'opening_days';
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
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Plan your visit
opening days',
    'panels_breadcrumbs_paths' => 'plan-your-visit
<none>',
    'panels_breadcrumbs_home' => 1,
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
  $display->uuid = '34d7a724-4ec3-4947-88e9-4983c0be8785';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_opening_days__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-87a81672-1573-4718-96eb-11ab49cd2b35';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_calendar-tp_calendar';
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
  $pane->uuid = '87a81672-1573-4718-96eb-11ab49cd2b35';
  $display->content['new-87a81672-1573-4718-96eb-11ab49cd2b35'] = $pane;
  $display->panels['contentmain'][0] = 'new-87a81672-1573-4718-96eb-11ab49cd2b35';
  $pane = new stdClass();
  $pane->pid = 'new-ba71eff7-0921-4758-99d3-32319362a75d';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'calendar-calendar_legend';
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
  $pane->uuid = 'ba71eff7-0921-4758-99d3-32319362a75d';
  $display->content['new-ba71eff7-0921-4758-99d3-32319362a75d'] = $pane;
  $display->panels['contentmain'][1] = 'new-ba71eff7-0921-4758-99d3-32319362a75d';
  $pane = new stdClass();
  $pane->pid = 'new-ba8c93fe-a240-4bbb-8462-43574a5d9183';
  $pane->panel = 'contentmain_bottom';
  $pane->type = 'block';
  $pane->subtype = 'views-events-event_by_day';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Events',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-events',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ba8c93fe-a240-4bbb-8462-43574a5d9183';
  $display->content['new-ba8c93fe-a240-4bbb-8462-43574a5d9183'] = $pane;
  $display->panels['contentmain_bottom'][0] = 'new-ba8c93fe-a240-4bbb-8462-43574a5d9183';
  $pane = new stdClass();
  $pane->pid = 'new-391d39c4-1762-4cd2-80bf-3d5fe9c65a4d';
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
  $pane->uuid = '391d39c4-1762-4cd2-80bf-3d5fe9c65a4d';
  $display->content['new-391d39c4-1762-4cd2-80bf-3d5fe9c65a4d'] = $pane;
  $display->panels['content_top'][0] = 'new-391d39c4-1762-4cd2-80bf-3d5fe9c65a4d';
  $pane = new stdClass();
  $pane->pid = 'new-e8277afd-0e09-439e-9660-b22d2050b2aa';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e8277afd-0e09-439e-9660-b22d2050b2aa';
  $display->content['new-e8277afd-0e09-439e-9660-b22d2050b2aa'] = $pane;
  $display->panels['content_top'][1] = 'new-e8277afd-0e09-439e-9660-b22d2050b2aa';
  $pane = new stdClass();
  $pane->pid = 'new-584cd6a2-fa01-4a22-8661-12de19b0c8ca';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '584cd6a2-fa01-4a22-8661-12de19b0c8ca';
  $display->content['new-584cd6a2-fa01-4a22-8661-12de19b0c8ca'] = $pane;
  $display->panels['content_top'][2] = 'new-584cd6a2-fa01-4a22-8661-12de19b0c8ca';
  $pane = new stdClass();
  $pane->pid = 'new-4790d814-0a78-468d-9285-6dc89d14dd8d';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-opening-pages';
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
  $pane->uuid = '4790d814-0a78-468d-9285-6dc89d14dd8d';
  $display->content['new-4790d814-0a78-468d-9285-6dc89d14dd8d'] = $pane;
  $display->panels['feature'][0] = 'new-4790d814-0a78-468d-9285-6dc89d14dd8d';
  $pane = new stdClass();
  $pane->pid = 'new-48b511f8-1914-4568-be6b-992c7cbba49c';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_calendar-opening_hour';
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
  $pane->uuid = '48b511f8-1914-4568-be6b-992c7cbba49c';
  $display->content['new-48b511f8-1914-4568-be6b-992c7cbba49c'] = $pane;
  $display->panels['sidebar'][0] = 'new-48b511f8-1914-4568-be6b-992c7cbba49c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['opening_days'] = $page;

  return $pages;

}
