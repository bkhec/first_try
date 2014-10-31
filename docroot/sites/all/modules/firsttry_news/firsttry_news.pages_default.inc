<?php
/**
 * @file
 * firsttry_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function firsttry_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Top 10 News',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:basic_page:field_type',
          'settings' => array(
            'field_type' => array(
              'und' => array(
                0 => array(
                  'value' => 'top10News',
                ),
              ),
            ),
            'field_type_value' => 'top10News',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '92d32d72-ec4f-4c65-87e0-ad31b94948ad';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-acefe947-7350-47fd-9fac-af51c63ff9d0';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_header-panel_pane_1';
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
    $pane->uuid = 'acefe947-7350-47fd-9fac-af51c63ff9d0';
    $display->content['new-acefe947-7350-47fd-9fac-af51c63ff9d0'] = $pane;
    $display->panels['center'][0] = 'new-acefe947-7350-47fd-9fac-af51c63ff9d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
