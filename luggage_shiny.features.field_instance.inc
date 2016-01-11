<?php
/**
 * @file
 * luggage_shiny.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function luggage_shiny_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-shiny-field_shiny_url'
  $field_instances['node-shiny-field_shiny_url'] = array(
    'bundle' => 'shiny',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_shiny_url',
    'label' => 'Url',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Url');

  return $field_instances;
}
