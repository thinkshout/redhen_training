<?php
/**
 * @file
 * redhen_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function redhen_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function redhen_demo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function redhen_demo_default_redhen_contact_type() {
  $items = array();
  $items['management'] = entity_import('redhen_contact_type', '{
    "name" : "management",
    "label" : "Management",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['staff'] = entity_import('redhen_contact_type', '{
    "name" : "staff",
    "label" : "Staff",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['volunteer'] = entity_import('redhen_contact_type', '{
    "name" : "volunteer",
    "label" : "Volunteer",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_engagement_score().
 */
function redhen_demo_default_redhen_engagement_score() {
  $items = array();
  $items['comment'] = entity_import('redhen_engagement_score', '{
    "name" : "comment",
    "label" : "Comment",
    "locked" : null,
    "score" : "33",
    "rdf_mapping" : []
  }');
  $items['event_registration'] = entity_import('redhen_engagement_score', '{
    "name" : "event_registration",
    "label" : "Event registration",
    "locked" : null,
    "score" : "65",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_membership_type().
 */
function redhen_demo_default_redhen_membership_type() {
  $items = array();
  $items['premium'] = entity_import('redhen_membership_type', '{
    "name" : "premium",
    "label" : "Premium",
    "role_id" : "4",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['standard'] = entity_import('redhen_membership_type', '{
    "name" : "standard",
    "label" : "Standard",
    "role_id" : null,
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_org_type().
 */
function redhen_demo_default_redhen_org_type() {
  $items = array();
  $items['business'] = entity_import('redhen_org_type', '{
    "name" : "business",
    "label" : "Business",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['foundation'] = entity_import('redhen_org_type', '{
    "name" : "foundation",
    "label" : "Foundation",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['group'] = entity_import('redhen_org_type', '{
    "name" : "group",
    "label" : "Group",
    "locked" : "0",
    "weight" : "0",
    "rdf_mapping" : [],
    "data" : {
      "group" : 1,
      "group_settings" : { "private" : 1, "content_types" : { "post" : "post" } }
    }
  }');
  $items['shelter'] = entity_import('redhen_org_type', '{
    "name" : "shelter",
    "label" : "Shelter",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
