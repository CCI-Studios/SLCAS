<?php
/**
 * @file
 * slcas.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function slcas_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: board member.
  $roles['board member'] = array(
    'name' => 'board member',
    'weight' => 4,
  );

  // Exported role: board member admin.
  $roles['board member admin'] = array(
    'name' => 'board member admin',
    'weight' => 9,
  );

  // Exported role: foster parent.
  $roles['foster parent'] = array(
    'name' => 'foster parent',
    'weight' => 7,
  );

  // Exported role: foster parent and volunteer admin.
  $roles['foster parent and volunteer admin'] = array(
    'name' => 'foster parent and volunteer admin',
    'weight' => 10,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 5,
  );

  // Exported role: staff admin.
  $roles['staff admin'] = array(
    'name' => 'staff admin',
    'weight' => 8,
  );

  // Exported role: super administrator.
  $roles['super administrator'] = array(
    'name' => 'super administrator',
    'weight' => 2,
  );

  // Exported role: volunteer.
  $roles['volunteer'] = array(
    'name' => 'volunteer',
    'weight' => 6,
  );

  return $roles;
}
