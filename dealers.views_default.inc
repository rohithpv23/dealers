<?php
/**
 * @file
 * dealers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dealers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dealers_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dealers export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'dealers export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Adress */
  $handler->display->display_options['fields']['dealers_address']['id'] = 'dealers_address';
  $handler->display->display_options['fields']['dealers_address']['table'] = 'field_data_dealers_address';
  $handler->display->display_options['fields']['dealers_address']['field'] = 'dealers_address';
  /* Field: Content: Adress line 1 */
  $handler->display->display_options['fields']['dealers_address_1']['id'] = 'dealers_address_1';
  $handler->display->display_options['fields']['dealers_address_1']['table'] = 'field_data_dealers_address_1';
  $handler->display->display_options['fields']['dealers_address_1']['field'] = 'dealers_address_1';
  /* Field: Content: City */
  $handler->display->display_options['fields']['dealers_city']['id'] = 'dealers_city';
  $handler->display->display_options['fields']['dealers_city']['table'] = 'field_data_dealers_city';
  $handler->display->display_options['fields']['dealers_city']['field'] = 'dealers_city';
  /* Field: Content: State */
  $handler->display->display_options['fields']['dealers_state']['id'] = 'dealers_state';
  $handler->display->display_options['fields']['dealers_state']['table'] = 'field_data_dealers_state';
  $handler->display->display_options['fields']['dealers_state']['field'] = 'dealers_state';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['dealers_country']['id'] = 'dealers_country';
  $handler->display->display_options['fields']['dealers_country']['table'] = 'field_data_dealers_country';
  $handler->display->display_options['fields']['dealers_country']['field'] = 'dealers_country';
  /* Field: Content: Zip Code */
  $handler->display->display_options['fields']['dealers_zip']['id'] = 'dealers_zip';
  $handler->display->display_options['fields']['dealers_zip']['table'] = 'field_data_dealers_zip';
  $handler->display->display_options['fields']['dealers_zip']['field'] = 'dealers_zip';
  /* Field: Content: Latitude */
  $handler->display->display_options['fields']['dealers_latitude']['id'] = 'dealers_latitude';
  $handler->display->display_options['fields']['dealers_latitude']['table'] = 'field_data_dealers_latitude';
  $handler->display->display_options['fields']['dealers_latitude']['field'] = 'dealers_latitude';
  /* Field: Content: Longitude */
  $handler->display->display_options['fields']['dealers_longitude']['id'] = 'dealers_longitude';
  $handler->display->display_options['fields']['dealers_longitude']['table'] = 'field_data_dealers_longitude';
  $handler->display->display_options['fields']['dealers_longitude']['field'] = 'dealers_longitude';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dealers' => 'dealers',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dealers-export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'dealers-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['dealers_export'] = $view;

  return $export;
}
