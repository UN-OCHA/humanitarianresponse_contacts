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

  // Exported permission: clear csv_contacts feeds.
  $permissions['clear csv_contacts feeds'] = array(
    'name' => 'clear csv_contacts feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create contact content.
  $permissions['create contact content'] = array(
    'name' => 'create contact content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own contact content.
  $permissions['delete own contact content'] = array(
    'name' => 'delete own contact content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own contact content.
  $permissions['edit own contact content'] = array(
    'name' => 'edit own contact content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: import csv_contacts feeds.
  $permissions['import csv_contacts feeds'] = array(
    'name' => 'import csv_contacts feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: unlock csv_contacts feeds.
  $permissions['unlock csv_contacts feeds'] = array(
    'name' => 'unlock csv_contacts feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
