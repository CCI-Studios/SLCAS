<?php
/**
 * @file
 * slcas.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function slcas_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|entityform|child_and_youth_contact_us|form';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'child_and_youth_contact_us';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '0',
    'children' => array(
      0 => 'field_name',
      1 => 'field_email',
      2 => 'field_phone_number',
      3 => 'field_phone_validated',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|entityform|child_and_youth_contact_us|form'] = $field_group;

  return $export;
}
