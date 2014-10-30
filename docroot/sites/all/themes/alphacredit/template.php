<?php


/**
 * Implements hook_preprocess_html().
 */
function alphacredit_preprocess_html() {
  // Add Google font Open Sans
  $attributes = array(
    'href' => 'https://fonts.googleapis.com/css?family=Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800',
    'rel' => 'stylesheet',
    'type' => 'text/css',
  );

  drupal_add_html_head_link($attributes, TRUE);
}