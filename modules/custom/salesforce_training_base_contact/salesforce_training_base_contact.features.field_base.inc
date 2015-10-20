<?php
/**
 * @file
 * salesforce_training_base_contact.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function salesforce_training_base_contact_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_address'.
  $field_bases['field_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'field_phone'.
  $field_bases['field_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 20,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'redhen_contact_email'.
  $field_bases['redhen_contact_email'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'redhen_contact_email',
    'indexes' => array(
      'redhen_email_address' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'redhen_fields',
    'settings' => array(
      'labels' => array(
        1 => 'home',
        2 => 'work',
      ),
    ),
    'translatable' => 0,
    'type' => 'redhen_email',
  );

  return $field_bases;
}
