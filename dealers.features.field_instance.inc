<?php
/**
 * @file
 * dealers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dealers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-dealers-field_dealers_location'.
  $field_instances['node-dealers-field_dealers_location'] = array(
    'bundle' => 'dealers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geolocation',
        'settings' => array(),
        'type' => 'geolocation_text',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_dealers_location',
    'label' => 'Dealers Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'geolocation',
      'settings' => array(),
      'type' => 'geolocation_text',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dealers Location');

  return $field_instances;
}
