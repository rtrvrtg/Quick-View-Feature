<?php
/**
 * @file
 * quick_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function quick_view_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quick_view';
  $context->description = '';
  $context->tag = 'Quick View';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'quick-view/*' => 'quick-view/*',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 'header',
          'help' => 'help',
          'page_top' => 'page_top',
          'page_bottom' => 'page_bottom',
          'highlighted' => 'highlighted',
          'featured' => 'featured',
          'sidebar_first' => 'sidebar_first',
          'sidebar_second' => 'sidebar_second',
          'triptych_first' => 'triptych_first',
          'triptych_middle' => 'triptych_middle',
          'triptych_last' => 'triptych_last',
          'footer_firstcolumn' => 'footer_firstcolumn',
          'footer_secondcolumn' => 'footer_secondcolumn',
          'footer_thirdcolumn' => 'footer_thirdcolumn',
          'footer_fourthcolumn' => 'footer_fourthcolumn',
          'footer' => 'footer',
          'dashboard_main' => 'dashboard_main',
          'dashboard_sidebar' => 'dashboard_sidebar',
          'dashboard_inactive' => 'dashboard_inactive',
          'content' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'help' => 'help',
          'page_top' => 'page_top',
          'page_bottom' => 'page_bottom',
          'sidebar_first' => 'sidebar_first',
          'dashboard_main' => 'dashboard_main',
          'dashboard_sidebar' => 'dashboard_sidebar',
          'dashboard_inactive' => 'dashboard_inactive',
          'content' => 0,
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'popup-only',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Quick View');
  $export['quick_view'] = $context;

  return $export;
}
