<?php
/**
 * @file
 * salesforce_training_base_registration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function salesforce_training_base_registration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer authenticated_self_registration registration'.
  $permissions['administer authenticated_self_registration registration'] = array(
    'name' => 'administer authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own authenticated_self_registration registration'.
  $permissions['administer own authenticated_self_registration registration'] = array(
    'name' => 'administer own authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create authenticated_self_registration registration'.
  $permissions['create authenticated_self_registration registration'] = array(
    'name' => 'create authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create authenticated_self_registration registration other anonymous'.
  $permissions['create authenticated_self_registration registration other anonymous'] = array(
    'name' => 'create authenticated_self_registration registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create authenticated_self_registration registration other users'.
  $permissions['create authenticated_self_registration registration other users'] = array(
    'name' => 'create authenticated_self_registration registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create authenticated_self_registration registration self'.
  $permissions['create authenticated_self_registration registration self'] = array(
    'name' => 'create authenticated_self_registration registration self',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any authenticated_self_registration registration'.
  $permissions['delete any authenticated_self_registration registration'] = array(
    'name' => 'delete any authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own authenticated_self_registration registration'.
  $permissions['delete own authenticated_self_registration registration'] = array(
    'name' => 'delete own authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit authenticated_self_registration registration state'.
  $permissions['edit authenticated_self_registration registration state'] = array(
    'name' => 'edit authenticated_self_registration registration state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any authenticated_self_registration registration'.
  $permissions['update any authenticated_self_registration registration'] = array(
    'name' => 'update any authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own authenticated_self_registration registration'.
  $permissions['update own authenticated_self_registration registration'] = array(
    'name' => 'update own authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view authenticated_self_registration registration'.
  $permissions['view authenticated_self_registration registration'] = array(
    'name' => 'view authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own authenticated_self_registration registration'.
  $permissions['view own authenticated_self_registration registration'] = array(
    'name' => 'view own authenticated_self_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
