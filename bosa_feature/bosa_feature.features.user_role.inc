<?php
/**
 * @file
 * bosa_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bosa_feature_user_default_roles() {
  $roles = array();

  // Exported role: Offer admin.
  $roles['Offer admin'] = array(
    'name' => 'Offer admin',
    'weight' => '3',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
