<?php
/**
 * @file
 * redhen_demo.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function redhen_demo_user_default_roles() {
  $roles = array();

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 3,
  );

  return $roles;
}
