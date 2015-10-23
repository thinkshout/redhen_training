<?php
/**
 * @file
 * redhen_demo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_demo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_admin_path';
  $strongarm->value = 1;
  $export['redhen_admin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_alter_username';
  $strongarm->value = 1;
  $export['redhen_contact_alter_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_connect_users';
  $strongarm->value = TRUE;
  $export['redhen_contact_connect_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_mirror_email';
  $strongarm->value = 1;
  $export['redhen_contact_mirror_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg';
  $strongarm->value = 1;
  $export['redhen_contact_reg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg_type';
  $strongarm->value = 'volunteer';
  $export['redhen_contact_reg_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg_update';
  $strongarm->value = 1;
  $export['redhen_contact_reg_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_reg_update_fields';
  $strongarm->value = 1;
  $export['redhen_contact_reg_update_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_contact_require_email';
  $strongarm->value = 1;
  $export['redhen_contact_require_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_items_page';
  $strongarm->value = '10';
  $export['redhen_items_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_membership_cron_enable';
  $strongarm->value = 0;
  $export['redhen_membership_cron_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_membership_cron_expire';
  $strongarm->value = 0;
  $export['redhen_membership_cron_expire'] = $strongarm;

  return $export;
}
