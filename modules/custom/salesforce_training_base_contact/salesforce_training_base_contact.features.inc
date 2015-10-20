<?php
/**
 * @file
 * salesforce_training_base_contact.features.inc
 */

/**
 * Implements hook_default_redhen_contact_type().
 */
function salesforce_training_base_contact_default_redhen_contact_type() {
  $items = array();
  $items['general'] = entity_import('redhen_contact_type', '{
    "name" : "general",
    "label" : "General",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
