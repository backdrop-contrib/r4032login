<?php

/**
 * @file
 * Variable information.
 */

/**
 * Implements hook_variable_info().
 */
function r4032login_variable_info($options) {
  $variables['r4032login_display_denied_message'] = array(
    'type' => 'boolean',
    'title' => t('Display access denied message on login page', array(), $options),
    'default' => 1,
    'description' => t('Displays an access denied message on the user login page.', array(), $options),
    'group' => 'r4032login',
  );
  $variables['r4032login_access_denied_message'] = array(
    'type' => 'string',
    'title' => t("User login 'access denied' message", array(), $options),
    'default' => t('Access denied. You must log in to view this page.', array(), $options),
    'description' => t('The message text displayed to users who are denied access to the page.', array(), $options),
    'group' => 'r4032login',
  );
  $variables['r4032login_redirect_authenticated_users_to'] = array(
    'type' => 'drupal_path',
    'title' => t('Redirect authenticated users to', array(), $options),
    'default' => '',
    'description' => t('If an authenticated user tries to access a page they can not, redirect them to the given page. Use &lt;front&gt; for the front page, leave blank for a default access denied page.', array(), $options),
    'group' => 'r4032login',
  );
  $variables['r4032login_user_login_path'] = array(
    'type' => 'drupal_path',
    'title' => t('Path to user login form', array(), $options),
    'default' => 'user/login',
    'description' => t('The path to the user login form. Omit the beginning slash, ie: user/login', array(), $options),
    'group' => 'r4032login',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function r4032login_variable_group_info() {
  $groups['r4032login'] = array(
    'title' => t('Redirect 403 to User Login'),
    'description' => t('Redirect anonymous users from 403 Access Denied pages to the user/login page.'),
    'access' => 'administer site configuration',
    'path' => array('admin/config/system/site-information'),
  );

  return $groups;
}
