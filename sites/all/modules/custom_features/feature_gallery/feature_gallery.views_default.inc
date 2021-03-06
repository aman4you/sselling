<?php
/**
 * @file
 * feature_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'photo gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = '';
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'image_style' => 'gallery_photo',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Album Title */
  $handler->display->display_options['fields']['field_album_1']['id'] = 'field_album_1';
  $handler->display->display_options['fields']['field_album_1']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album_1']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album_1']['ui_name'] = 'Album Title';
  $handler->display->display_options['fields']['field_album_1']['label'] = '';
  $handler->display->display_options['fields']['field_album_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_album_1']['alter']['text'] = '<div class="title"><a href="[path]">[field_album_1-title]</a></div>';
  $handler->display->display_options['fields']['field_album_1']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_album_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_album_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Album Alt */
  $handler->display->display_options['fields']['field_album_2']['id'] = 'field_album_2';
  $handler->display->display_options['fields']['field_album_2']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album_2']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album_2']['ui_name'] = 'Album Alt';
  $handler->display->display_options['fields']['field_album_2']['label'] = '';
  $handler->display->display_options['fields']['field_album_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_album_2']['alter']['text'] = '<div class="description"><a href="[path]">[field_album_2-alt]</a></div>';
  $handler->display->display_options['fields']['field_album_2']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_album_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_album_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_album_1] 
[field_album_2]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'photo_gallery:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'gallery' => 'gallery',
    'videos' => 'videos',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery';

  /* Display: Page-sort */
  $handler = $view->new_display('page', 'Page-sort', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'draggableviews' => 'draggableviews',
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
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['path'] = 'admin/sort-gallery';
  $translatables['photo_gallery'] = array(
    t('Master'),
    t('Photo Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="title"><a href="[path]">[field_album_1-title]</a></div>'),
    t('<div class="description"><a href="[path]">[field_album_2-alt]</a></div>'),
    t('[field_album_1] 
[field_album_2]'),
    t('Page'),
    t('Page-sort'),
    t('Title'),
  );
  $export['photo_gallery'] = $view;

  return $export;
}
