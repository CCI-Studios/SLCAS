<?php

function cas_menu_tree__main_menu($variables) {
  return '<div><ul class="menu">' . $variables['tree'] . '</ul></div>';
}
function cas_menu_tree__menu_child_and_youth_menu($variables) {
  return '<div><ul class="menu">' . $variables['tree'] . '</ul></div>';
}
function cas_menu_tree__menu_staff_menu($variables) {
  return '<div><ul class="menu">' . $variables['tree'] . '</ul></div>';
}
function cas_menu_tree__menu_board_member_menu($variables) {
  return '<div><ul class="menu">' . $variables['tree'] . '</ul></div>';
}
function cas_menu_tree__menu_foster_parent_and_volunteer($variables) {
  return '<div><ul class="menu">' . $variables['tree'] . '</ul></div>';
}

function cas_css_alter(&$css) {
	$exclude = array(
		'modules/system/system.menus.css' => FALSE,
		'modules/system/system.theme.css' => FALSE,
	 );
	$css = array_diff_key($css, $exclude);
}

function cas_form_alter(&$form, $form_state, $form_id) {
	if ($form_id == 'user_login_block' || $form_id == 'user_login') {
		//username
		unset($form['name']['#description']);
		$form['name']['#title'] = 'Username or Email';
		$form['name']['#attributes']['required'] = 'required';

		//password
		unset($form['pass']['#description']);
		$form['pass']['#attributes']['required'] = 'required';

		//submit button
		$form['actions']['submit']['#value'] = 'Login »';

		//forgot password link
		$form['forgot'] = array('#type'=>'markup', '#markup'=>'<a href="/user/password" class="forgot">Forgot Password?</a>');

		drupal_set_title("Login");
	}
	else if ($form_id == 'search_block_form')
	{
		$form['search_block_form']['#attributes']['autocomplete'] = 'off';
	}
	else if ($form_id == 'webform_client_form_35' || $form_id == 'webform_client_form_34')
	{
		$form['submitted']['first_name']['#attributes']['placeholder'] = 'First';
		$form['submitted']['last_name']['#attributes']['placeholder'] = 'Last';
		$form['submitted']['address_line_1']['#attributes']['placeholder'] = 'Address Line 1';
		$form['submitted']['address_line_2']['#attributes']['placeholder'] = 'Address Line 2';

		$form['submitted']['your_first_name']['#attributes']['placeholder'] = 'First';
		$form['submitted']['your_last_name']['#attributes']['placeholder'] = 'Last';
		$form['submitted']['your_address_line_1']['#attributes']['placeholder'] = 'Address Line 1';
		$form['submitted']['your_address_line_2']['#attributes']['placeholder'] = 'Address Line 2';
	}
    else if ($form_id == 'report_a_concern_entityform_edit_form')
    {
        $form['field_name']['und']['0']['value']['#attributes']['placeholder'] = 'First';
        $form['field_last_name']['und']['0']['value']['#attributes']['placeholder'] = 'Last';
        $form['field_first_name']['und']['0']['value']['#attributes']['placeholder'] = 'First';
        $form['field_last_name_2']['und']['0']['value']['#attributes']['placeholder'] = 'Last';
    }
    else if ($form_id == 'volunteer_application_form_entityform_edit_form')
    {
        $form['field_first_name']['und']['0']['value']['#attributes']['placeholder'] = 'First';
        $form['field_last_name']['und']['0']['value']['#attributes']['placeholder'] = 'Last';
    }
}

function cas_preprocess_page(&$vars) {
    if (isset($vars['node']) && $vars['node']->type == 'news_and_events')
    {
        drupal_set_title('News + Events');
    }
    else if (isset($vars['node']) && $vars['node']->type == 'forum')
    {
        drupal_set_title('Staff Forum');
    }
    if (isset($vars['node']))
    {
        $vars['theme_hook_suggestions'][] = 'page__'. $vars['node']->type;
    }
}

function cas_form_element($variables) {
	$element = &$variables['element'];

    // This function is invoked as theme wrapper, but the rendered form element
    // may not necessarily have been processed by form_builder().
    $element += array(
        '#title_display' => 'before',
    );

    // Add element #id for #type 'item'.
    if (isset($element['#markup']) && !empty($element['#id'])) {
        $attributes['id'] = $element['#id'];
    }
    // Add element's #type and #name as class to aid with JS/CSS selectors.
    $attributes['class'] = array('form-item');
    if (!empty($element['#type'])) {
        $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
    }
    if (!empty($element['#name'])) {
        $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
    }
    // Add a class for disabled elements to facilitate cross-browser styling.
    if (!empty($element['#attributes']['disabled'])) {
        $attributes['class'][] = 'form-disabled';
    }
    $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

    // If #title is not set, we don't display any label or required marker.
    if (!isset($element['#title'])) {
        $element['#title_display'] = 'none';
    }
    $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
    $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

    switch ($element['#title_display']) {
        case 'before':
        case 'invisible':
            $output .= ' ' . theme('form_element_label', $variables);
            if (!empty($element['#description'])) {
                $output .= '<div class="description">' . $element['#description'] . "</div>\n";
            }
            $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
            break;

        case 'after':
            $output .= ' ' . $prefix . $element['#children'] . $suffix;
            $output .= ' ' . theme('form_element_label', $variables) . "\n";
            if (!empty($element['#description'])) {
                $output .= '<div class="description">' . $element['#description'] . "</div>\n";
            }
            break;

        case 'none':
        case 'attribute':
            // Output no label and no required marker, only the children.
            $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
            break;
    }

    $output .= "</div>\n";

    return $output;
}

?>
