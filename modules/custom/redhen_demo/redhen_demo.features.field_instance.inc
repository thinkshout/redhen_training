<?php
/**
 * @file
 * redhen_demo.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function redhen_demo_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'redhen_note-redhen_note-field_subject'.
  $field_instances['redhen_note-redhen_note-field_subject'] = array(
    'bundle' => 'redhen_note',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
    'entity_type' => 'redhen_note',
    'field_name' => 'field_subject',
    'label' => 'Subject',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 40,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Subject');

  return $field_instances;
}
