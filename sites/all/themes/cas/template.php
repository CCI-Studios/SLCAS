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

function cas_webform_element($variables) {
	$element = $variables['element'];
	$field_name = $element['#webform_component']['form_key'];
	$value = $variables['element']['#children'];
	$wrapper_classes = array(
		'form-item',
	);
	$output = '<div class="' . implode(' ', $wrapper_classes) . '" id="webform-component-' . $field_name . '">' . "\n";
	$required = !empty($element['#required']) ? '<span class="form-required" title="' . t('This field is required.') . '">*</span>' : '';
	if (!empty($element['#title']))
	{
		$title = $element['#title'];
		$output .= ' <label for="' . $element['#id'] . '">' . t('!title !required', array('!title' => filter_xss_admin($title), '!required' => $required)) . "</label>\n";
	}
	if (!empty($element['#description']))
	{
		$output .= ' <div class="description">' . $element['#description'] . "</div>\n";
	}
	$output .= '<div id="' . $element['#id'] . '-wrap">' . $value . '</div>' . "\n";
	$output .= "</div>\n";
	return $output;
}

?>
