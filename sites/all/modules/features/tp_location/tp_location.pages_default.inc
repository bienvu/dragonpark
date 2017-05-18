<?php
/**
 * @file
 * tp_location.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tp_location_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_bfa98243-c815-49ce-b18d-383c9ccdacd1';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Location Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full',
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
              'location' => 'location',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Explore the park
%node:title',
    'panels_breadcrumbs_paths' => 'explore-park
<none>',
    'panels_breadcrumbs_home' => 1,
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
  $display->uuid = 'cc288f0b-60bb-4ec9-ac78-710206f4afe0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_bfa98243-c815-49ce-b18d-383c9ccdacd1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8cdfbaf1-dedb-4518-8d84-7debe31441e8';
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
  $pane->uuid = '8cdfbaf1-dedb-4518-8d84-7debe31441e8';
  $display->content['new-8cdfbaf1-dedb-4518-8d84-7debe31441e8'] = $pane;
  $display->panels['contentmain'][0] = 'new-8cdfbaf1-dedb-4518-8d84-7debe31441e8';
  $pane = new stdClass();
  $pane->pid = 'new-5587d2ac-224e-4fb8-b4ad-24ac7c204b79';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'views-location-more_location';
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
  $pane->uuid = '5587d2ac-224e-4fb8-b4ad-24ac7c204b79';
  $display->content['new-5587d2ac-224e-4fb8-b4ad-24ac7c204b79'] = $pane;
  $display->panels['contentmain'][1] = 'new-5587d2ac-224e-4fb8-b4ad-24ac7c204b79';
  $pane = new stdClass();
  $pane->pid = 'new-5920eff9-8294-4fcb-88eb-884b2f62cc70';
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
  $pane->uuid = '5920eff9-8294-4fcb-88eb-884b2f62cc70';
  $display->content['new-5920eff9-8294-4fcb-88eb-884b2f62cc70'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-5920eff9-8294-4fcb-88eb-884b2f62cc70';
  $pane = new stdClass();
  $pane->pid = 'new-5b47bf78-2fc7-4142-883e-3e33fa25eb37';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5b47bf78-2fc7-4142-883e-3e33fa25eb37';
  $display->content['new-5b47bf78-2fc7-4142-883e-3e33fa25eb37'] = $pane;
  $display->panels['contentmain_top'][1] = 'new-5b47bf78-2fc7-4142-883e-3e33fa25eb37';
  $pane = new stdClass();
  $pane->pid = 'new-67c2f8a5-fed7-463b-998b-018dfe86813a';
  $pane->panel = 'contentmain_top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'panels_breadcrumbs_admin_title' => '',
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Explore the park
%node:title',
    'panels_breadcrumbs_paths' => 'explore-park
<none>',
    'panels_breadcrumbs_home' => 1,
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
  $pane->uuid = '67c2f8a5-fed7-463b-998b-018dfe86813a';
  $display->content['new-67c2f8a5-fed7-463b-998b-018dfe86813a'] = $pane;
  $display->panels['contentmain_top'][2] = 'new-67c2f8a5-fed7-463b-998b-018dfe86813a';
  $pane = new stdClass();
  $pane->pid = 'new-152161d8-da40-476f-82e6-424d164ad4ea';
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
  $pane->uuid = '152161d8-da40-476f-82e6-424d164ad4ea';
  $display->content['new-152161d8-da40-476f-82e6-424d164ad4ea'] = $pane;
  $display->panels['feature'][0] = 'new-152161d8-da40-476f-82e6-424d164ad4ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_bfa98243-c815-49ce-b18d-383c9ccdacd1'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_9efdf8e6-a60e-4455-9fae-1f213c0242e5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Taxonomy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = '1268f82b-aae7-4969-81a5-bdeed1b55541';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_9efdf8e6-a60e-4455-9fae-1f213c0242e5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3b4bacbf-453c-400d-99fd-a1fb1746a82a';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'views-location-location_term';
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
  $pane->uuid = '3b4bacbf-453c-400d-99fd-a1fb1746a82a';
  $display->content['new-3b4bacbf-453c-400d-99fd-a1fb1746a82a'] = $pane;
  $display->panels['contentmain'][0] = 'new-3b4bacbf-453c-400d-99fd-a1fb1746a82a';
  $pane = new stdClass();
  $pane->pid = 'new-9b544205-a941-444a-b00b-519e496e7025';
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
  $pane->uuid = '9b544205-a941-444a-b00b-519e496e7025';
  $display->content['new-9b544205-a941-444a-b00b-519e496e7025'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-9b544205-a941-444a-b00b-519e496e7025';
  $pane = new stdClass();
  $pane->pid = 'new-c310e3d2-8df1-4a7f-acb4-136447cbea4e';
  $pane->panel = 'contentmain_top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'panels_breadcrumbs_admin_title' => '',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
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
  $pane->uuid = 'c310e3d2-8df1-4a7f-acb4-136447cbea4e';
  $display->content['new-c310e3d2-8df1-4a7f-acb4-136447cbea4e'] = $pane;
  $display->panels['contentmain_top'][1] = 'new-c310e3d2-8df1-4a7f-acb4-136447cbea4e';
  $pane = new stdClass();
  $pane->pid = 'new-9c6085f9-4225-4960-a75f-a2230f832dc2';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-hero-slide-attractions';
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
  $pane->uuid = '9c6085f9-4225-4960-a75f-a2230f832dc2';
  $display->content['new-9c6085f9-4225-4960-a75f-a2230f832dc2'] = $pane;
  $display->panels['feature'][0] = 'new-9c6085f9-4225-4960-a75f-a2230f832dc2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_9efdf8e6-a60e-4455-9fae-1f213c0242e5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function tp_location_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'attractions';
  $page->task = 'page';
  $page->admin_title = 'Attractions';
  $page->admin_description = '';
  $page->path = 'attractions';
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
  $handler->name = 'page_attractions__panel';
  $handler->task = 'page';
  $handler->subtask = 'attractions';
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
  $display->uuid = 'cabe6a2f-b24d-4bde-9971-13aefb07efe9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_attractions__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-80e51a2b-bc1a-4cfa-8e85-463d893dfdf8';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'views-location-locations_list';
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
  $pane->uuid = '80e51a2b-bc1a-4cfa-8e85-463d893dfdf8';
  $display->content['new-80e51a2b-bc1a-4cfa-8e85-463d893dfdf8'] = $pane;
  $display->panels['contentmain'][0] = 'new-80e51a2b-bc1a-4cfa-8e85-463d893dfdf8';
  $pane = new stdClass();
  $pane->pid = 'new-8c4dbe53-a166-49ce-9435-335e96be87af';
  $pane->panel = 'contentmain_top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'panels_breadcrumbs_admin_title' => '',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
    'override_title' => 0,
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
  $pane->uuid = '8c4dbe53-a166-49ce-9435-335e96be87af';
  $display->content['new-8c4dbe53-a166-49ce-9435-335e96be87af'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-8c4dbe53-a166-49ce-9435-335e96be87af';
  $pane = new stdClass();
  $pane->pid = 'new-ac5e5aa9-b7f8-47a7-a950-29f589fe8570';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-hero-slide-attractions';
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
  $pane->uuid = 'ac5e5aa9-b7f8-47a7-a950-29f589fe8570';
  $display->content['new-ac5e5aa9-b7f8-47a7-a950-29f589fe8570'] = $pane;
  $display->panels['feature'][0] = 'new-ac5e5aa9-b7f8-47a7-a950-29f589fe8570';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['attractions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'map_position';
  $page->task = 'page';
  $page->admin_title = 'Map position';
  $page->admin_description = '';
  $page->path = 'get-position';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_map_position__panel';
  $handler->task = 'page';
  $handler->subtask = 'map_position';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
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
      'contentmain_top' => NULL,
      'contentmain_top_full' => NULL,
      'contentmain_full' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '65237320-f95d-4a94-b239-10decd2001b5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_map_position__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0c6cd2ca-df5a-40c6-8fbb-5f32a53edc94';
  $pane->panel = 'contentmain_full';
  $pane->type = 'block';
  $pane->subtype = 'tp_custom_blocks-tp_map_position';
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
  $pane->uuid = '0c6cd2ca-df5a-40c6-8fbb-5f32a53edc94';
  $display->content['new-0c6cd2ca-df5a-40c6-8fbb-5f32a53edc94'] = $pane;
  $display->panels['contentmain_full'][0] = 'new-0c6cd2ca-df5a-40c6-8fbb-5f32a53edc94';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['map_position'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'price';
  $page->task = 'page';
  $page->admin_title = 'Price';
  $page->admin_description = '';
  $page->path = 'price';
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
  $handler->name = 'page_price__panel';
  $handler->task = 'page';
  $handler->subtask = 'price';
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
      'feature' => NULL,
      'content_top' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f1c415af-ac23-4807-b913-452ebda06341';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_price__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a69a4f97-d2db-48b5-83c3-6d8ad8f51ac7';
  $pane->panel = 'contentmain';
  $pane->type = 'block';
  $pane->subtype = 'bean-price-list-of-typhoon-water-park';
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
  $pane->uuid = 'a69a4f97-d2db-48b5-83c3-6d8ad8f51ac7';
  $display->content['new-a69a4f97-d2db-48b5-83c3-6d8ad8f51ac7'] = $pane;
  $display->panels['contentmain'][0] = 'new-a69a4f97-d2db-48b5-83c3-6d8ad8f51ac7';
  $pane = new stdClass();
  $pane->pid = 'new-966e1ef3-7150-440a-8634-82bc8de73a58';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '966e1ef3-7150-440a-8634-82bc8de73a58';
  $display->content['new-966e1ef3-7150-440a-8634-82bc8de73a58'] = $pane;
  $display->panels['content_top'][0] = 'new-966e1ef3-7150-440a-8634-82bc8de73a58';
  $pane = new stdClass();
  $pane->pid = 'new-bfbd5bd8-e80d-45ac-a361-d1566fde06d6';
  $pane->panel = 'content_top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'panels_breadcrumbs_admin_title' => '',
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
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
  $pane->uuid = 'bfbd5bd8-e80d-45ac-a361-d1566fde06d6';
  $display->content['new-bfbd5bd8-e80d-45ac-a361-d1566fde06d6'] = $pane;
  $display->panels['content_top'][1] = 'new-bfbd5bd8-e80d-45ac-a361-d1566fde06d6';
  $pane = new stdClass();
  $pane->pid = 'new-229181ba-16d0-400a-b485-cee9f4991a19';
  $pane->panel = 'feature';
  $pane->type = 'block';
  $pane->subtype = 'bean-ticket-price-hero';
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
  $pane->uuid = '229181ba-16d0-400a-b485-cee9f4991a19';
  $display->content['new-229181ba-16d0-400a-b485-cee9f4991a19'] = $pane;
  $display->panels['feature'][0] = 'new-229181ba-16d0-400a-b485-cee9f4991a19';
  $pane = new stdClass();
  $pane->pid = 'new-ccf68741-aac6-4261-b865-02f1868bd8c0';
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
  $pane->uuid = 'ccf68741-aac6-4261-b865-02f1868bd8c0';
  $display->content['new-ccf68741-aac6-4261-b865-02f1868bd8c0'] = $pane;
  $display->panels['sidebar'][0] = 'new-ccf68741-aac6-4261-b865-02f1868bd8c0';
  $pane = new stdClass();
  $pane->pid = 'new-d207ef03-d342-4f58-bae5-807cbbd190b8';
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
  $pane->uuid = 'd207ef03-d342-4f58-bae5-807cbbd190b8';
  $display->content['new-d207ef03-d342-4f58-bae5-807cbbd190b8'] = $pane;
  $display->panels['sidebar'][1] = 'new-d207ef03-d342-4f58-bae5-807cbbd190b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ccf68741-aac6-4261-b865-02f1868bd8c0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['price'] = $page;

  return $pages;

}
