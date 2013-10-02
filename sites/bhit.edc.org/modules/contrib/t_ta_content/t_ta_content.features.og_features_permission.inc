<?php
/**
 * @file
 * t_ta_content.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function t_ta_content_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:resource_team:add user'
  $permissions['node:resource_team:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:administer group'
  $permissions['node:resource_team:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:approve and deny subscription'
  $permissions['node:resource_team:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:create costs content'
  $permissions['node:resource_team:create costs content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:resource_team:create service content'
  $permissions['node:resource_team:create service content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:resource_team:create tracker content'
  $permissions['node:resource_team:create tracker content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:resource_team:create vca content'
  $permissions['node:resource_team:create vca content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:resource_team:delete any costs content'
  $permissions['node:resource_team:delete any costs content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:delete any service content'
  $permissions['node:resource_team:delete any service content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:delete any tracker content'
  $permissions['node:resource_team:delete any tracker content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:delete any vca content'
  $permissions['node:resource_team:delete any vca content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:resource_team:delete own costs content'
  $permissions['node:resource_team:delete own costs content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:delete own service content'
  $permissions['node:resource_team:delete own service content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:delete own tracker content'
  $permissions['node:resource_team:delete own tracker content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:delete own vca content'
  $permissions['node:resource_team:delete own vca content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:resource_team:manage members'
  $permissions['node:resource_team:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:manage permissions'
  $permissions['node:resource_team:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:manage roles'
  $permissions['node:resource_team:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:subscribe'
  $permissions['node:resource_team:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:resource_team:subscribe without approval'
  $permissions['node:resource_team:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:resource_team:unsubscribe'
  $permissions['node:resource_team:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:resource_team:update any costs content'
  $permissions['node:resource_team:update any costs content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:update any service content'
  $permissions['node:resource_team:update any service content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:update any tracker content'
  $permissions['node:resource_team:update any tracker content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:update any vca content'
  $permissions['node:resource_team:update any vca content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:resource_team:update group'
  $permissions['node:resource_team:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:update own costs content'
  $permissions['node:resource_team:update own costs content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:resource_team:update own service content'
  $permissions['node:resource_team:update own service content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:update own tracker content'
  $permissions['node:resource_team:update own tracker content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:resource_team:update own vca content'
  $permissions['node:resource_team:update own vca content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
