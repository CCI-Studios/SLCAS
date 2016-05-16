<?php
/**
 * @file
 * slcas.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slcas_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'super administrator' => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'board member admin' => 'board member admin',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access notify'.
  $permissions['access notify'] = array(
    'name' => 'access notify',
    'roles' => array(
      'staff' => 'staff',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'notify',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comment notify'.
  $permissions['administer comment notify'] = array(
    'name' => 'administer comment notify',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer features menu items'.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer forums'.
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'forum',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer management menu items'.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu-anonymous-users-menu menu items'.
  $permissions['administer menu-anonymous-users-menu menu items'] = array(
    'name' => 'administer menu-anonymous-users-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-board-member-menu menu items'.
  $permissions['administer menu-board-member-menu menu items'] = array(
    'name' => 'administer menu-board-member-menu menu items',
    'roles' => array(
      'board member admin' => 'board member admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-child-and-youth-menu menu items'.
  $permissions['administer menu-child-and-youth-menu menu items'] = array(
    'name' => 'administer menu-child-and-youth-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-footer-menu menu items'.
  $permissions['administer menu-footer-menu menu items'] = array(
    'name' => 'administer menu-footer-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-foster-parent-and-volunteer menu items'.
  $permissions['administer menu-foster-parent-and-volunteer menu items'] = array(
    'name' => 'administer menu-foster-parent-and-volunteer menu items',
    'roles' => array(
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-social-menu menu items'.
  $permissions['administer menu-social-menu menu items'] = array(
    'name' => 'administer menu-social-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-staff-menu menu items'.
  $permissions['administer menu-staff-menu menu items'] = array(
    'name' => 'administer menu-staff-menu menu items',
    'roles' => array(
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-top-menu menu items'.
  $permissions['administer menu-top-menu menu items'] = array(
    'name' => 'administer menu-top-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer menu-youth-zone-menu menu items'.
  $permissions['administer menu-youth-zone-menu menu items'] = array(
    'name' => 'administer menu-youth-zone-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer multifield'.
  $permissions['administer multifield'] = array(
    'name' => 'administer multifield',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'multifield',
  );

  // Exported permission: 'administer navigation menu items'.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer notify'.
  $permissions['administer notify'] = array(
    'name' => 'administer notify',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'notify',
  );

  // Exported permission: 'administer notify queue'.
  $permissions['administer notify queue'] = array(
    'name' => 'administer notify queue',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'notify',
  );

  // Exported permission: 'administer page titles'.
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer user-menu menu items'.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'assign administrator role'.
  $permissions['assign administrator role'] = array(
    'name' => 'assign administrator role',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign board member admin role'.
  $permissions['assign board member admin role'] = array(
    'name' => 'assign board member admin role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign board member role'.
  $permissions['assign board member role'] = array(
    'name' => 'assign board member role',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign foster parent and volunteer admin role'.
  $permissions['assign foster parent and volunteer admin role'] = array(
    'name' => 'assign foster parent and volunteer admin role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign foster parent role'.
  $permissions['assign foster parent role'] = array(
    'name' => 'assign foster parent role',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign staff admin role'.
  $permissions['assign staff admin role'] = array(
    'name' => 'assign staff admin role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign staff role'.
  $permissions['assign staff role'] = array(
    'name' => 'assign staff role',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign volunteer role'.
  $permissions['assign volunteer role'] = array(
    'name' => 'assign volunteer role',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create board_page content'.
  $permissions['create board_page content'] = array(
    'name' => 'create board_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create child_and_youth_page content'.
  $permissions['create child_and_youth_page content'] = array(
    'name' => 'create child_and_youth_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create child_and_youth_zone_photo content'.
  $permissions['create child_and_youth_zone_photo content'] = array(
    'name' => 'create child_and_youth_zone_photo content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create foster_parent_and_volunteer_page content'.
  $permissions['create foster_parent_and_volunteer_page content'] = array(
    'name' => 'create foster_parent_and_volunteer_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create header_image content'.
  $permissions['create header_image content'] = array(
    'name' => 'create header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create highlight content'.
  $permissions['create highlight content'] = array(
    'name' => 'create highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news_and_events content'.
  $permissions['create news_and_events content'] = array(
    'name' => 'create news_and_events content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create prechool_link content'.
  $permissions['create prechool_link content'] = array(
    'name' => 'create prechool_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create programs_and_services content'.
  $permissions['create programs_and_services content'] = array(
    'name' => 'create programs_and_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create q_a content'.
  $permissions['create q_a content'] = array(
    'name' => 'create q_a content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create school_aged_link content'.
  $permissions['create school_aged_link content'] = array(
    'name' => 'create school_aged_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create staff_page content'.
  $permissions['create staff_page content'] = array(
    'name' => 'create staff_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any board_page content'.
  $permissions['delete any board_page content'] = array(
    'name' => 'delete any board_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any child_and_youth_page content'.
  $permissions['delete any child_and_youth_page content'] = array(
    'name' => 'delete any child_and_youth_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any child_and_youth_zone_photo content'.
  $permissions['delete any child_and_youth_zone_photo content'] = array(
    'name' => 'delete any child_and_youth_zone_photo content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any foster_parent_and_volunteer_page content'.
  $permissions['delete any foster_parent_and_volunteer_page content'] = array(
    'name' => 'delete any foster_parent_and_volunteer_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any header_image content'.
  $permissions['delete any header_image content'] = array(
    'name' => 'delete any header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any highlight content'.
  $permissions['delete any highlight content'] = array(
    'name' => 'delete any highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_and_events content'.
  $permissions['delete any news_and_events content'] = array(
    'name' => 'delete any news_and_events content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any prechool_link content'.
  $permissions['delete any prechool_link content'] = array(
    'name' => 'delete any prechool_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any programs_and_services content'.
  $permissions['delete any programs_and_services content'] = array(
    'name' => 'delete any programs_and_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any q_a content'.
  $permissions['delete any q_a content'] = array(
    'name' => 'delete any q_a content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any school_aged_link content'.
  $permissions['delete any school_aged_link content'] = array(
    'name' => 'delete any school_aged_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any staff_page content'.
  $permissions['delete any staff_page content'] = array(
    'name' => 'delete any staff_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own board_page content'.
  $permissions['delete own board_page content'] = array(
    'name' => 'delete own board_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own child_and_youth_page content'.
  $permissions['delete own child_and_youth_page content'] = array(
    'name' => 'delete own child_and_youth_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own child_and_youth_zone_photo content'.
  $permissions['delete own child_and_youth_zone_photo content'] = array(
    'name' => 'delete own child_and_youth_zone_photo content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own foster_parent_and_volunteer_page content'.
  $permissions['delete own foster_parent_and_volunteer_page content'] = array(
    'name' => 'delete own foster_parent_and_volunteer_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own header_image content'.
  $permissions['delete own header_image content'] = array(
    'name' => 'delete own header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own highlight content'.
  $permissions['delete own highlight content'] = array(
    'name' => 'delete own highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_and_events content'.
  $permissions['delete own news_and_events content'] = array(
    'name' => 'delete own news_and_events content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own prechool_link content'.
  $permissions['delete own prechool_link content'] = array(
    'name' => 'delete own prechool_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own programs_and_services content'.
  $permissions['delete own programs_and_services content'] = array(
    'name' => 'delete own programs_and_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own q_a content'.
  $permissions['delete own q_a content'] = array(
    'name' => 'delete own q_a content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own school_aged_link content'.
  $permissions['delete own school_aged_link content'] = array(
    'name' => 'delete own school_aged_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff_page content'.
  $permissions['delete own staff_page content'] = array(
    'name' => 'delete own staff_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in background_icons'.
  $permissions['delete terms in background_icons'] = array(
    'name' => 'delete terms in background_icons',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any board_page content'.
  $permissions['edit any board_page content'] = array(
    'name' => 'edit any board_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any child_and_youth_page content'.
  $permissions['edit any child_and_youth_page content'] = array(
    'name' => 'edit any child_and_youth_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any child_and_youth_zone_photo content'.
  $permissions['edit any child_and_youth_zone_photo content'] = array(
    'name' => 'edit any child_and_youth_zone_photo content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any foster_parent_and_volunteer_page content'.
  $permissions['edit any foster_parent_and_volunteer_page content'] = array(
    'name' => 'edit any foster_parent_and_volunteer_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any header_image content'.
  $permissions['edit any header_image content'] = array(
    'name' => 'edit any header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any highlight content'.
  $permissions['edit any highlight content'] = array(
    'name' => 'edit any highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_and_events content'.
  $permissions['edit any news_and_events content'] = array(
    'name' => 'edit any news_and_events content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any prechool_link content'.
  $permissions['edit any prechool_link content'] = array(
    'name' => 'edit any prechool_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any programs_and_services content'.
  $permissions['edit any programs_and_services content'] = array(
    'name' => 'edit any programs_and_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any q_a content'.
  $permissions['edit any q_a content'] = array(
    'name' => 'edit any q_a content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any school_aged_link content'.
  $permissions['edit any school_aged_link content'] = array(
    'name' => 'edit any school_aged_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any staff_page content'.
  $permissions['edit any staff_page content'] = array(
    'name' => 'edit any staff_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own board_page content'.
  $permissions['edit own board_page content'] = array(
    'name' => 'edit own board_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own child_and_youth_page content'.
  $permissions['edit own child_and_youth_page content'] = array(
    'name' => 'edit own child_and_youth_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own child_and_youth_zone_photo content'.
  $permissions['edit own child_and_youth_zone_photo content'] = array(
    'name' => 'edit own child_and_youth_zone_photo content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own foster_parent_and_volunteer_page content'.
  $permissions['edit own foster_parent_and_volunteer_page content'] = array(
    'name' => 'edit own foster_parent_and_volunteer_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own header_image content'.
  $permissions['edit own header_image content'] = array(
    'name' => 'edit own header_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own highlight content'.
  $permissions['edit own highlight content'] = array(
    'name' => 'edit own highlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_and_events content'.
  $permissions['edit own news_and_events content'] = array(
    'name' => 'edit own news_and_events content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own prechool_link content'.
  $permissions['edit own prechool_link content'] = array(
    'name' => 'edit own prechool_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own programs_and_services content'.
  $permissions['edit own programs_and_services content'] = array(
    'name' => 'edit own programs_and_services content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own q_a content'.
  $permissions['edit own q_a content'] = array(
    'name' => 'edit own q_a content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own school_aged_link content'.
  $permissions['edit own school_aged_link content'] = array(
    'name' => 'edit own school_aged_link content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff_page content'.
  $permissions['edit own staff_page content'] = array(
    'name' => 'edit own staff_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in background_icons'.
  $permissions['edit terms in background_icons'] = array(
    'name' => 'edit terms in background_icons',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'grant content access'.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'grant own content access'.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'override auto queue'.
  $permissions['override auto queue'] = array(
    'name' => 'override auto queue',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'auto_nodequeue',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'super administrator' => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'super administrator' => 'super administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set page title'.
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'super administrator' => 'super administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to comments'.
  $permissions['subscribe to comments'] = array(
    'name' => 'subscribe to comments',
    'roles' => array(
      'staff' => 'staff',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'comment_notify',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'staff' => 'staff',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html_with_blocks'.
  $permissions['use text format full_html_with_blocks'] = array(
    'name' => 'use text format full_html_with_blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'board member' => 'board member',
      'staff' => 'staff',
      'super administrator' => 'super administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'board member admin' => 'board member admin',
      'foster parent and volunteer admin' => 'foster parent and volunteer admin',
      'staff' => 'staff',
      'staff admin' => 'staff admin',
      'super administrator' => 'super administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
