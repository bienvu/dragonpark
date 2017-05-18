<?php
/**
 * @file
 * tp_landing_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tp_landing_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__basic-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Basic Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-full',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'basic-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
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
    'panels_breadcrumbs_paths' => '<front>
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'left_sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'feature' => NULL,
      'contentmain_top_full' => NULL,
      'contentmain' => NULL,
      'contentmain_top' => NULL,
      'contentmain_full' => NULL,
      'content_top' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cc288f0b-60bb-4ec9-ac78-710206f4afe0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__basic-page';
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
  $pane->uuid = '8cdfbaf1-dedb-4518-8d84-7debe31441e8';
  $display->content['new-8cdfbaf1-dedb-4518-8d84-7debe31441e8'] = $pane;
  $display->panels['contentmain'][0] = 'new-8cdfbaf1-dedb-4518-8d84-7debe31441e8';
  $pane = new stdClass();
  $pane->pid = 'new-ef8fd7c0-fcea-4446-95e7-497faf4ee3b0';
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
  $pane->uuid = 'ef8fd7c0-fcea-4446-95e7-497faf4ee3b0';
  $display->content['new-ef8fd7c0-fcea-4446-95e7-497faf4ee3b0'] = $pane;
  $display->panels['content_top'][0] = 'new-ef8fd7c0-fcea-4446-95e7-497faf4ee3b0';
  $pane = new stdClass();
  $pane->pid = 'new-1303b497-2f89-45f6-839e-ca8043a04422';
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
  $pane->uuid = '1303b497-2f89-45f6-839e-ca8043a04422';
  $display->content['new-1303b497-2f89-45f6-839e-ca8043a04422'] = $pane;
  $display->panels['content_top'][1] = 'new-1303b497-2f89-45f6-839e-ca8043a04422';
  $pane = new stdClass();
  $pane->pid = 'new-cca0281a-8a5e-40b9-be30-7066056acd93';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cca0281a-8a5e-40b9-be30-7066056acd93';
  $display->content['new-cca0281a-8a5e-40b9-be30-7066056acd93'] = $pane;
  $display->panels['content_top'][2] = 'new-cca0281a-8a5e-40b9-be30-7066056acd93';
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
  $pane = new stdClass();
  $pane->pid = 'new-ffe035cf-dd23-44ef-af1e-b80fe1c05591';
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
  $pane->uuid = 'ffe035cf-dd23-44ef-af1e-b80fe1c05591';
  $display->content['new-ffe035cf-dd23-44ef-af1e-b80fe1c05591'] = $pane;
  $display->panels['sidebar'][0] = 'new-ffe035cf-dd23-44ef-af1e-b80fe1c05591';
  $pane = new stdClass();
  $pane->pid = 'new-4e60cfb1-0a99-4d68-9075-4720f1a0cadb';
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
  $pane->uuid = '4e60cfb1-0a99-4d68-9075-4720f1a0cadb';
  $display->content['new-4e60cfb1-0a99-4d68-9075-4720f1a0cadb'] = $pane;
  $display->panels['sidebar'][1] = 'new-4e60cfb1-0a99-4d68-9075-4720f1a0cadb';
  $pane = new stdClass();
  $pane->pid = 'new-3014b43f-35e9-40e2-839b-ebc2335a91e6';
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
  $pane->uuid = '3014b43f-35e9-40e2-839b-ebc2335a91e6';
  $display->content['new-3014b43f-35e9-40e2-839b-ebc2335a91e6'] = $pane;
  $display->panels['sidebar'][2] = 'new-3014b43f-35e9-40e2-839b-ebc2335a91e6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__basic-page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_13d8a1a8-890e-4ba2-aec9-04fe8fc27c61';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Landing Page',
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
              'landing' => 'landing',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '%node:title',
    'panels_breadcrumbs_paths' => '<none>',
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
  $display->uuid = '183be36e-bc97-4f72-8928-5bfc713427a8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_13d8a1a8-890e-4ba2-aec9-04fe8fc27c61';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-33c7040a-0ed4-4266-9fa5-2601c9d3b3b4';
  $pane->panel = 'contentmain_full';
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
  $pane->uuid = '33c7040a-0ed4-4266-9fa5-2601c9d3b3b4';
  $display->content['new-33c7040a-0ed4-4266-9fa5-2601c9d3b3b4'] = $pane;
  $display->panels['contentmain_full'][0] = 'new-33c7040a-0ed4-4266-9fa5-2601c9d3b3b4';
  $pane = new stdClass();
  $pane->pid = 'new-01020e9e-ddbb-43b9-b84e-dc88bf8447d5';
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
  $pane->uuid = '01020e9e-ddbb-43b9-b84e-dc88bf8447d5';
  $display->content['new-01020e9e-ddbb-43b9-b84e-dc88bf8447d5'] = $pane;
  $display->panels['contentmain_top'][0] = 'new-01020e9e-ddbb-43b9-b84e-dc88bf8447d5';
  $pane = new stdClass();
  $pane->pid = 'new-c9775cef-70bf-4229-bcfe-07d2b08b63db';
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
  $pane->uuid = 'c9775cef-70bf-4229-bcfe-07d2b08b63db';
  $display->content['new-c9775cef-70bf-4229-bcfe-07d2b08b63db'] = $pane;
  $display->panels['contentmain_top'][1] = 'new-c9775cef-70bf-4229-bcfe-07d2b08b63db';
  $pane = new stdClass();
  $pane->pid = 'new-4844b8dc-e673-4909-b972-2ccaf437a7eb';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4844b8dc-e673-4909-b972-2ccaf437a7eb';
  $display->content['new-4844b8dc-e673-4909-b972-2ccaf437a7eb'] = $pane;
  $display->panels['contentmain_top'][2] = 'new-4844b8dc-e673-4909-b972-2ccaf437a7eb';
  $pane = new stdClass();
  $pane->pid = 'new-93a51216-fca6-480c-9fa8-89dd8624dcbd';
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
  $pane->uuid = '93a51216-fca6-480c-9fa8-89dd8624dcbd';
  $display->content['new-93a51216-fca6-480c-9fa8-89dd8624dcbd'] = $pane;
  $display->panels['feature'][0] = 'new-93a51216-fca6-480c-9fa8-89dd8624dcbd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-93a51216-fca6-480c-9fa8-89dd8624dcbd';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_13d8a1a8-890e-4ba2-aec9-04fe8fc27c61'] = $handler;

  return $export;
}
