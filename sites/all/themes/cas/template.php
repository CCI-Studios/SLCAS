<?php

function cas_menu_tree($variables) {
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
		//print '<pre>';
		//print_r($form);
		$form['submitted']['first_name']['#attributes']['placeholder'] = 'First';
		$form['submitted']['last_name']['#attributes']['placeholder'] = 'Last';
		$form['submitted']['address_line_1']['#attributes']['placeholder'] = 'Address Line 1';
		$form['submitted']['address_line_2']['#attributes']['placeholder'] = 'Address Line 2';

		$form['submitted']['your_first_name']['#attributes']['placeholder'] = 'First';
		$form['submitted']['your_last_name']['#attributes']['placeholder'] = 'Last';
		$form['submitted']['your_address_line_1']['#attributes']['placeholder'] = 'Address Line 1';
		$form['submitted']['your_address_line_2']['#attributes']['placeholder'] = 'Address Line 2';
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
	//print '<pre>';
	//print_r($element);
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