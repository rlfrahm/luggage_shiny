<?php
/**
 * @file
 * luggage_shiny.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_shiny_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function luggage_shiny_node_info() {
  $items = array(
    'shiny' => array(
      'name' => t('Shiny'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
