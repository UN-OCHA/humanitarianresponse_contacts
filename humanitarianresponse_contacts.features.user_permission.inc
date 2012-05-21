<?php
/**
 * @file
 * humanitarianresponse_contacts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_contacts_user_default_permissions() {
  $permissions = array();

  // Exported permission: create contact content.
  $permissions['create contact content'] = array(
    'name' => 'create contact content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own contact content.
  $permissions['delete own contact content'] = array(
    'name' => 'delete own contact content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own contact content.
  $permissions['edit own contact content'] = array(
    'name' => 'edit own contact content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
