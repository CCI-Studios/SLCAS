<?php
/**
 * @file
 * slcas.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function slcas_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['entityform_block-child_and_youth_contact_us'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'child_and_youth_contact_us',
    'module' => 'entityform_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cas',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['entityform_block-foster_application_form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'foster_application_form',
    'module' => 'entityform_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cas',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['entityform_block-report_a_concern'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'report_a_concern',
    'module' => 'entityform_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cas',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['entityform_block-volunteer_application_form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'volunteer_application_form',
    'module' => 'entityform_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cas',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-anonymous-users-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-anonymous-users-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -10,
      ),
      'cas' => array(
        'region' => 'top',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-board-member-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-board-member-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'board
board/*',
    'roles' => array(
      'administrator' => 8,
      'board member' => 4,
      'super administrator' => 3,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu-menu-child-and-youth-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-child-and-youth-menu',
    'module' => 'menu',
    'node_types' => array(
      0 => 'child_and_youth_page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -26,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-foster-parent-and-volunteer'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-foster-parent-and-volunteer',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'foster-parent-and-volunteer
foster-parent-and-volunteer/*',
    'roles' => array(
      'administrator' => 8,
      'foster parent' => 7,
      'super administrator' => 3,
      'volunteer' => 6,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu-menu-social-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-social-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -8,
      ),
      'cas' => array(
        'region' => 'top',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -8,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-staff-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-staff-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'staff
staff/*',
    'roles' => array(
      'administrator' => 8,
      'staff' => 5,
      'super administrator' => 3,
    ),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu-menu-top-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-top-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -9,
      ),
      'cas' => array(
        'region' => 'top',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -9,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-youth-zone-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-youth-zone-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cas',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'cas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cas',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -12,
      ),
      'cas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -12,
      ),
      'cas' => array(
        'region' => 'top',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -12,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -11,
      ),
      'cas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -6,
      ),
      'cas' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -11,
      ),
      'cas' => array(
        'region' => 'top',
        'status' => 1,
        'theme' => 'cas',
        'weight' => -11,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
