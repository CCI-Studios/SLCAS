<?php
/**
 * @file
 * slcas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slcas_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slcas_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_rule_setting().
 */
function slcas_default_entity_rule_setting() {
  $items = array();
  $items['1'] = entity_import('entity_rule_setting', '{
    "id" : "1",
    "entity_type" : "entityform",
    "bundle" : "foster_test",
    "op" : "entityform_submission",
    "rules_config" : "rules_entityform_notification_email_admin",
    "weight" : "0",
    "args" : {
      "email_subject" : "Form submission: Foster test",
      "email_body" : "",
      "show_submission" : 1,
      "to_email" : "cmorris@ccistudios.com"
    },
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['2'] = entity_import('entity_rule_setting', '{
    "id" : "2",
    "entity_type" : "entityform",
    "bundle" : "volunteer_application_form",
    "op" : "entityform_submission",
    "rules_config" : "rules_entityform_notification_email_admin",
    "weight" : "0",
    "args" : {
      "email_subject" : "Form submission: Volunteer Application Form",
      "email_body" : "",
      "show_submission" : 1,
      "to_email" : "lbujaki@ccistudios.com, cmorris@ccistudios.com"
    },
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  $items['3'] = entity_import('entity_rule_setting', '{
    "id" : "3",
    "entity_type" : "entityform",
    "bundle" : "foster_application_form",
    "op" : "entityform_submission",
    "rules_config" : "rules_entityform_notification_email_admin",
    "weight" : "0",
    "args" : {
      "email_subject" : "Form submission: Foster Application Form",
      "email_body" : "",
      "show_submission" : 1,
      "to_email" : "recruitment@slcas.on.ca"
    },
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_entityform_type().
 */
function slcas_default_entityform_type() {
  $items = array();
  $items['child_and_youth_contact_us'] = entity_import('entityform_type', '{
    "type" : "child_and_youth_contact_us",
    "label" : "Child and Youth Contact Us",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Send",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "3" : 0,
        "8" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "9" : 0,
        "10" : 0,
        "11" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "anonymous_links" : 0,
      "session_save" : 0,
      "current_type" : "child_and_youth_contact_us",
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['foster_application_form'] = entity_import('entityform_type', '{
    "type" : "foster_application_form",
    "label" : "Foster Application Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "3" : 0,
        "8" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "9" : 0,
        "10" : 0,
        "11" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "anonymous_links" : 0,
      "session_save" : 0,
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['report_a_concern'] = entity_import('entityform_type', '{
    "type" : "report_a_concern",
    "label" : "Report a Concern",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "3" : 0,
        "8" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "9" : 0,
        "10" : 0,
        "11" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "anonymous_links" : 0,
      "session_save" : 0,
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['volunteer_application_form'] = entity_import('entityform_type', '{
    "type" : "volunteer_application_form",
    "label" : "Volunteer Application Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "3" : 0,
        "8" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "9" : 0,
        "10" : 0,
        "11" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "anonymous_links" : 0,
      "session_save" : 0,
      "enable_block" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function slcas_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: child_and_youth_zone_photos
  $nodequeues['child_and_youth_zone_photos'] = array(
    'name' => 'child_and_youth_zone_photos',
    'title' => 'Child and Youth Zone Photos',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'child_and_youth_zone_photo',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: header_images
  $nodequeues['header_images'] = array(
    'name' => 'header_images',
    'title' => 'Header Images',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'header_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: preschool_links
  $nodequeues['preschool_links'] = array(
    'name' => 'preschool_links',
    'title' => 'Preschool Links',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'prechool_link',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: programs_and_services
  $nodequeues['programs_and_services'] = array(
    'name' => 'programs_and_services',
    'title' => 'Programs and Services',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'programs_and_services',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: q_as
  $nodequeues['q_as'] = array(
    'name' => 'q_as',
    'title' => 'Q&As',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'q_a',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: school_aged_links
  $nodequeues['school_aged_links'] = array(
    'name' => 'school_aged_links',
    'title' => 'School Aged Links',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'school_aged_link',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function slcas_image_default_styles() {
  $styles = array();

  // Exported image style: child_and_youth_zone_photo.
  $styles['child_and_youth_zone_photo'] = array(
    'name' => 'child_and_youth_zone_photo',
    'label' => 'Child and Youth Zone Photo',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 412,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_image.
  $styles['header_image'] = array(
    'name' => 'header_image',
    'label' => 'Header Image',
    'effects' => array(
      1 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1000,
          'height' => 400,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'header_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: highlight.
  $styles['highlight'] = array(
    'name' => 'highlight',
    'label' => 'Highlight',
    'effects' => array(
      2 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 540,
          'height' => 370,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'highlight',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slcas_node_info() {
  $items = array(
    'board_page' => array(
      'name' => t('Board Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'child_and_youth_page' => array(
      'name' => t('Child and Youth Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'child_and_youth_zone_photo' => array(
      'name' => t('Child and Youth Zone Photo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'foster_parent_and_volunteer_page' => array(
      'name' => t('Foster Parent and Volunteer Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'header_image' => array(
      'name' => t('Header Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'highlight' => array(
      'name' => t('Highlight'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news_and_events' => array(
      'name' => t('News and Events'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'prechool_link' => array(
      'name' => t('Prechool Link'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'programs_and_services' => array(
      'name' => t('Programs and Services'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'q_a' => array(
      'name' => t('Q&A'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
    'school_aged_link' => array(
      'name' => t('School Aged Link'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'staff_page' => array(
      'name' => t('Staff Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
