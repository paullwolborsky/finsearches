<?php

require_once dirname(__FILE__) . '/includes/core.php';
require_once dirname(__FILE__) . '/inc/layout_settings.inc';
require_once dirname(__FILE__) . '/inc/preset_settings.inc';
require_once dirname(__FILE__) . '/inc/basic_settings.inc';

/**
 * Implements hook_form_system_theme_settings_alter()
 */
function drupalexp_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL) {
    $theme_key = arg(3);
    if (file_exists(drupal_get_path('theme', $theme_key) . '/template.php')) {
        require_once drupal_get_path('theme', $theme_key) . '/template.php';
    }
    $theme = drupalexp_get_theme();
    $form['drupalexp_settings'] = array(
        '#type' => 'vertical_tabs',
    );
    $form['drupal_core_settings'] = array(
        '#type' => 'fieldset',
        '#title' => 'Drupal core',
        '#group' => 'drupalexp_settings',
        '#weight' => 99,
    );
    $form['drupal_core_settings']['theme_settings'] = $form['theme_settings'];
    $form['drupal_core_settings']['logo'] = $form['logo'];
    $form['drupal_core_settings']['favicon'] = $form['favicon'];
    unset($form['theme_settings']);
    unset($form['logo']);
    unset($form['favicon']);
    drupalexp_layout_settings_form_alter($form);
    drupalexp_preset_settings_form_alter($form);
    drupalexp_basic_settings_form_alter($form);
    $form['breadcrumb'] = array(
      '#type'          => 'fieldset',
      '#title'         => t('Breadcrumb settings'),
    );
    $form['breadcrumb']['yourthemename_breadcrumb'] = array(
      '#type'          => 'select',
      '#title'         => t('Display breadcrumb'),
      '#default_value' => theme_get_setting('yourthemename_breadcrumb'),
      '#options'       => array(
          'yes'   => t('Yes'),
          'admin' => t('Only in admin section'),
          'no'    => t('No'),
        ),
    );
    $form['breadcrumb']['breadcrumb_options'] = array(
      '#type' => 'container',
      '#states' => array(
        'invisible' => array(
          ':input[name="yourthemename_breadcrumb"]' => array('value' => 'no'),
        ),
      ),
    );
    $form['breadcrumb']['breadcrumb_options']['yourthemename_breadcrumb_separator'] = array(
      '#type'          => 'textfield',
      '#title'         => t('Breadcrumb separator'),
      '#description'   => t('Text only. DonÕt forget to include spaces.'),
      '#default_value' => theme_get_setting('yourthemename_breadcrumb_separator'),
      '#size'          => 5,
      '#maxlength'     => 10,
    );
    $form['breadcrumb']['breadcrumb_options']['yourthemename_breadcrumb_home'] = array(
      '#type'          => 'checkbox',
      '#title'         => t('Show home page link in breadcrumb'),
      '#default_value' => theme_get_setting('yourthemename_breadcrumb_home'),
    );
    $form['breadcrumb']['breadcrumb_options']['yourthemename_breadcrumb_trailing'] = array(
      '#type'          => 'checkbox',
      '#title'         => t('Append a separator to the end of the breadcrumb'),
      '#default_value' => theme_get_setting('yourthemename_breadcrumb_trailing'),
      '#description'   => t('Useful when the breadcrumb is placed just before the title.'),
      '#states' => array(
        'disabled' => array(
          ':input[name="yourthemename_breadcrumb_title"]' => array('checked' => TRUE),
        ),
        'unchecked' => array(
          ':input[name="yourthemename_breadcrumb_title"]' => array('checked' => TRUE),
        ),
      ),
    );
    $form['breadcrumb']['breadcrumb_options']['yourthemename_breadcrumb_title'] = array(
      '#type'          => 'checkbox',
      '#title'         => t('Append the content title to the end of the breadcrumb'),
      '#default_value' => theme_get_setting('yourthemename_breadcrumb_title'),
      '#description'   => t('Useful when the breadcrumb is not placed just before the title.'),
    );
    $form['#submit'][] = 'drupalexp_form_system_theme_settings_submit';
    $form['#validate'][] = 'drupalexp_form_system_theme_settings_validate';
}

function drupalexp_form_system_theme_settings_validate(&$form, &$form_state) {
    $drupalexp_layouts = '';
    $i = 0;
    while (isset($form_state['input']['dexp_layout_' . $i])) {
        $drupalexp_layouts .= $form_state['input']['dexp_layout_' . $i];
        $i++;
    }
    form_set_value($form['layout_settings']['drupalexp_layouts'], $drupalexp_layouts, $form_state);
}

function drupalexp_form_system_theme_settings_submit(&$form, &$form_state) {
    //Mark update status is TRUE
    variable_set('drupalexp_assets_path', '');
    unset($_SESSION['drupalexp_default_preset']);
    unset($_SESSION['drupalexp_default_direction']);
    unset($_SESSION['drupalexp_layout']);
    variable_set('drupalexp_settings_updated', REQUEST_TIME);
}
