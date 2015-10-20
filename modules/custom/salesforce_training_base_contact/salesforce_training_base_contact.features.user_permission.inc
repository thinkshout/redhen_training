<?php
/**
 * @file
 * salesforce_training_base_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function salesforce_training_base_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit own redhen contact'.
  $permissions['edit own redhen contact'] = array(
    'name' => 'edit own redhen contact',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_contact',
  );

  // Exported permission: 'view own redhen contact'.
  $permissions['view own redhen contact'] = array(
    'name' => 'view own redhen contact',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'redhen_contact',
  );

  return $permissions;
}
