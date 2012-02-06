<?php

/**
 * Implementation of hook_user_default_roles().
 */
function btm_features_hp_slideshow_simple_user_default_roles() {
  $roles = array();

  // Exported role: Site Admin
  $roles['Site Admin'] = array(
    'name' => 'Site Admin',
  );

  // Exported role: Super Admin
  $roles['Super Admin'] = array(
    'name' => 'Super Admin',
  );

  return $roles;
}
