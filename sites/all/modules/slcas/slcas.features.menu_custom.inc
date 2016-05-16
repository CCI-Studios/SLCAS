<?php
/**
 * @file
 * slcas.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function slcas_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-anonymous-users-menu.
  $menus['menu-anonymous-users-menu'] = array(
    'menu_name' => 'menu-anonymous-users-menu',
    'title' => 'Anonymous users menu',
    'description' => '',
  );
  // Exported menu: menu-board-member-menu.
  $menus['menu-board-member-menu'] = array(
    'menu_name' => 'menu-board-member-menu',
    'title' => 'Board Member Menu',
    'description' => '',
  );
  // Exported menu: menu-child-and-youth-menu.
  $menus['menu-child-and-youth-menu'] = array(
    'menu_name' => 'menu-child-and-youth-menu',
    'title' => 'Child and Youth Menu',
    'description' => '',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Exported menu: menu-foster-parent-and-volunteer.
  $menus['menu-foster-parent-and-volunteer'] = array(
    'menu_name' => 'menu-foster-parent-and-volunteer',
    'title' => 'Foster Parent and Volunteer Menu',
    'description' => '',
  );
  // Exported menu: menu-social-menu.
  $menus['menu-social-menu'] = array(
    'menu_name' => 'menu-social-menu',
    'title' => 'Social menu',
    'description' => '',
  );
  // Exported menu: menu-staff-menu.
  $menus['menu-staff-menu'] = array(
    'menu_name' => 'menu-staff-menu',
    'title' => 'Staff Menu',
    'description' => '',
  );
  // Exported menu: menu-youth-zone-menu.
  $menus['menu-youth-zone-menu'] = array(
    'menu_name' => 'menu-youth-zone-menu',
    'title' => 'Youth Zone Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Anonymous users menu');
  t('Board Member Menu');
  t('Child and Youth Menu');
  t('Footer Menu');
  t('Foster Parent and Volunteer Menu');
  t('Main menu');
  t('Social menu');
  t('Staff Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Youth Zone Menu');


  return $menus;
}
