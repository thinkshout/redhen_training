<?php
/**
 * @file
 * salesforce_training_base_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function salesforce_training_base_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function salesforce_training_base_registration_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
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

/**
 * Implements hook_default_registration_type().
 */
function salesforce_training_base_registration_default_registration_type() {
  $items = array();
  $items['authenticated_self_registration'] = entity_import('registration_type', '{
    "name" : "authenticated_self_registration",
    "label" : "Authenticated self-registration",
    "locked" : "0",
    "default_state" : "complete",
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
