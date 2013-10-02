<?php
/**
 * @file
 * t_ta_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function t_ta_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'Financial Manager',
      4 => 'RT Coordinator',
      5 => 'T/TA Specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: access expense info.
  $permissions['access expense info'] = array(
    'name' => 'access expense info',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Financial Manager',
    ),
    'module' => 'tta_custom',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'Financial Manager',
      4 => 'RT Coordinator',
      5 => 'T/TA Specialist',
    ),
    'module' => 'user',
  );

  // Exported permission: access vca info.
  $permissions['access vca info'] = array(
    'name' => 'access vca info',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Financial Manager',
    ),
    'module' => 'tta_custom',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create child nodes.
  $permissions['create child nodes'] = array(
    'name' => 'create child nodes',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'Financial Manager',
      4 => 'RT Coordinator',
      5 => 'T/TA Specialist',
    ),
    'module' => 'child_nodes',
  );

  // Exported permission: create costs content.
  $permissions['create costs content'] = array(
    'name' => 'create costs content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'Financial Manager',
      4 => 'RT Coordinator',
      5 => 'T/TA Specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: create expense content.
  $permissions['create expense content'] = array(
    'name' => 'create expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create service content.
  $permissions['create service content'] = array(
    'name' => 'create service content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'RT Coordinator',
      4 => 'T/TA Specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: create tracker content.
  $permissions['create tracker content'] = array(
    'name' => 'create tracker content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'RT Coordinator',
      4 => 'T/TA Specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: create vca content.
  $permissions['create vca content'] = array(
    'name' => 'create vca content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any costs content.
  $permissions['delete any costs content'] = array(
    'name' => 'delete any costs content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any expense content.
  $permissions['delete any expense content'] = array(
    'name' => 'delete any expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any service content.
  $permissions['delete any service content'] = array(
    'name' => 'delete any service content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any tracker content.
  $permissions['delete any tracker content'] = array(
    'name' => 'delete any tracker content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vca content.
  $permissions['delete any vca content'] = array(
    'name' => 'delete any vca content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own costs content.
  $permissions['delete own costs content'] = array(
    'name' => 'delete own costs content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own expense content.
  $permissions['delete own expense content'] = array(
    'name' => 'delete own expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own service content.
  $permissions['delete own service content'] = array(
    'name' => 'delete own service content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own tracker content.
  $permissions['delete own tracker content'] = array(
    'name' => 'delete own tracker content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vca content.
  $permissions['delete own vca content'] = array(
    'name' => 'delete own vca content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any costs content.
  $permissions['edit any costs content'] = array(
    'name' => 'edit any costs content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Financial Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any expense content.
  $permissions['edit any expense content'] = array(
    'name' => 'edit any expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any service content.
  $permissions['edit any service content'] = array(
    'name' => 'edit any service content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any tracker content.
  $permissions['edit any tracker content'] = array(
    'name' => 'edit any tracker content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vca content.
  $permissions['edit any vca content'] = array(
    'name' => 'edit any vca content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own costs content.
  $permissions['edit own costs content'] = array(
    'name' => 'edit own costs content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own expense content.
  $permissions['edit own expense content'] = array(
    'name' => 'edit own expense content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own service content.
  $permissions['edit own service content'] = array(
    'name' => 'edit own service content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own tracker content.
  $permissions['edit own tracker content'] = array(
    'name' => 'edit own tracker content',
    'roles' => array(
      0 => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own vca content.
  $permissions['edit own vca content'] = array(
    'name' => 'edit own vca content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'Financial Manager',
      4 => 'RT Coordinator',
      5 => 'T/TA Specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'Financial Manager',
      4 => 'RT Coordinator',
      5 => 'T/TA Specialist',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Core Director',
      2 => 'Core T/TA Coordinator',
      3 => 'Financial Manager',
      4 => 'RT Coordinator',
      5 => 'T/TA Specialist',
    ),
    'module' => 'node',
  );

  return $permissions;
}
