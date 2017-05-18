<?php
/**
 * @file
 * tp_webform.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tp_webform_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_8b6bb8b6-b9f5-4e29-b38d-d48b613b697c';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Webform',
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
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'About typhoon
%node:title',
    'panels_breadcrumbs_paths' => 'about-typhoon
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
  $display->uuid = '411a14c7-0a5e-47f6-9d3b-e856b8271b11';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_8b6bb8b6-b9f5-4e29-b38d-d48b613b697c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a6eca23b-1b98-43b1-878e-546d4f5be6b8';
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
    'leave_node_title' => 0,
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
  $pane->uuid = 'a6eca23b-1b98-43b1-878e-546d4f5be6b8';
  $display->content['new-a6eca23b-1b98-43b1-878e-546d4f5be6b8'] = $pane;
  $display->panels['contentmain'][0] = 'new-a6eca23b-1b98-43b1-878e-546d4f5be6b8';
  $pane = new stdClass();
  $pane->pid = 'new-85b54a01-caf4-42d5-b3b2-16cda996a794';
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
  $pane->uuid = '85b54a01-caf4-42d5-b3b2-16cda996a794';
  $display->content['new-85b54a01-caf4-42d5-b3b2-16cda996a794'] = $pane;
  $display->panels['content_top'][0] = 'new-85b54a01-caf4-42d5-b3b2-16cda996a794';
  $pane = new stdClass();
  $pane->pid = 'new-a30b6170-f112-4621-b21f-da28767e9788';
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
  $pane->uuid = 'a30b6170-f112-4621-b21f-da28767e9788';
  $display->content['new-a30b6170-f112-4621-b21f-da28767e9788'] = $pane;
  $display->panels['content_top'][1] = 'new-a30b6170-f112-4621-b21f-da28767e9788';
  $pane = new stdClass();
  $pane->pid = 'new-a71ce338-dc8a-4399-a94c-94af8652ab9c';
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
  $pane->uuid = 'a71ce338-dc8a-4399-a94c-94af8652ab9c';
  $display->content['new-a71ce338-dc8a-4399-a94c-94af8652ab9c'] = $pane;
  $display->panels['content_top'][2] = 'new-a71ce338-dc8a-4399-a94c-94af8652ab9c';
  $pane = new stdClass();
  $pane->pid = 'new-8612e8ae-689c-42f4-be32-3cbe3b859c01';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-contact-us';
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
  $pane->uuid = '8612e8ae-689c-42f4-be32-3cbe3b859c01';
  $display->content['new-8612e8ae-689c-42f4-be32-3cbe3b859c01'] = $pane;
  $display->panels['feature'][0] = 'new-8612e8ae-689c-42f4-be32-3cbe3b859c01';
  $pane = new stdClass();
  $pane->pid = 'new-9e7a5daa-2049-4b82-b129-938d3c35446d';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'bean-typhoon-water-park-0';
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
  $pane->uuid = '9e7a5daa-2049-4b82-b129-938d3c35446d';
  $display->content['new-9e7a5daa-2049-4b82-b129-938d3c35446d'] = $pane;
  $display->panels['sidebar'][0] = 'new-9e7a5daa-2049-4b82-b129-938d3c35446d';
  $pane = new stdClass();
  $pane->pid = 'new-2f8c0489-2824-4cd2-ad6a-b1bf688f3079';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f8c0489-2824-4cd2-ad6a-b1bf688f3079';
  $display->content['new-2f8c0489-2824-4cd2-ad6a-b1bf688f3079'] = $pane;
  $display->panels['sidebar'][1] = 'new-2f8c0489-2824-4cd2-ad6a-b1bf688f3079';
  $pane = new stdClass();
  $pane->pid = 'new-f7725d4a-9faa-42ad-be52-96c635071355';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f7725d4a-9faa-42ad-be52-96c635071355';
  $display->content['new-f7725d4a-9faa-42ad-be52-96c635071355'] = $pane;
  $display->panels['sidebar'][2] = 'new-f7725d4a-9faa-42ad-be52-96c635071355';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a6eca23b-1b98-43b1-878e-546d4f5be6b8';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_8b6bb8b6-b9f5-4e29-b38d-d48b613b697c'] = $handler;

  return $export;
}
