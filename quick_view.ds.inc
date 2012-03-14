<?php
/**
 * @file
 * quick_view.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function quick_view_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|popup';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'popup';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'ds_user_picture' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['node|article|popup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'quick_view' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|popup';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'popup';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|popup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'quick_view' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function quick_view_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'quick_view';
  $ds_field->label = 'Quick View';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/quick-view/[node:nid]?width=900&height=450&iframe=true" class="colorbox-load">Quick View</a>',
      'format' => 'filtered_html',
    ),
    'use_token' => 1,
  );
  $export['quick_view'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function quick_view_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'ds_user_picture',
        1 => 'post_date',
        2 => 'author',
        3 => 'title',
      ),
      'left' => array(
        0 => 'field_image',
        1 => 'field_tags',
      ),
      'right' => array(
        0 => 'body',
        1 => 'links',
      ),
      'footer' => array(
        0 => 'comments',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'header',
      'post_date' => 'header',
      'author' => 'header',
      'title' => 'header',
      'field_image' => 'left',
      'field_tags' => 'left',
      'body' => 'right',
      'links' => 'right',
      'comments' => 'footer',
    ),
    'classes' => array(),
  );
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'popup';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'author',
        2 => 'ds_user_picture',
        3 => 'post_date',
      ),
      'right' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'author' => 'left',
      'ds_user_picture' => 'left',
      'post_date' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|article|popup'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'author',
        2 => 'post_date',
        3 => 'quick_view',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'author' => 'ds_content',
      'post_date' => 'ds_content',
      'quick_view' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|article|teaser'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'author',
        1 => 'post_date',
        2 => 'ds_user_picture',
        3 => 'links',
      ),
      'footer' => array(
        0 => 'comments',
      ),
      'header' => array(
        0 => 'title',
      ),
      'right' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'author' => 'left',
      'post_date' => 'left',
      'ds_user_picture' => 'left',
      'comments' => 'footer',
      'links' => 'left',
      'title' => 'header',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'popup';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'title',
      ),
      'right' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|page|popup'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'quick_view',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'quick_view' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|page|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function quick_view_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'popup';
  $ds_view_mode->label = 'Popup';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['popup'] = $ds_view_mode;

  return $export;
}
