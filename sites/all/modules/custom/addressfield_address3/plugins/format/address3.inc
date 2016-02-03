<?php

/**
 * @file
 * The default format for adresses.
 */

$plugin = array(
  'title' => t('Address 3 address field'),
  'format callback' => 'addressfield_format_address3_generate',
  'type' => 'Address',
  'weight' => -100,
);


/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_format_address3_generate(&$format, $address, $context = array()) {
  if ($context['mode'] == 'form') {
    $format['address3_block'] = array(
      '#type' => 'addressfield_container',
      '#attributes' => array(
        'class' => array('premise'),
        'autocomplete' => 'address-line3',
      ),
      '#weight' => 40,
    );
    $format['address3_block']['address3'] = array(
      '#type' => 'addressfield_container',
      '#attributes' => array('class' => array('addressfield-container-inline')),
    );

    if (isset($context['instance']['widget']['settings']['address3_fields'])) {
      $settings = array_filter($context['instance']['widget']['settings']['address3_fields']);
    }

    if (empty($settings) || $settings['address3']) {
      $format['address3_block']['address3'] = array(
        '#title' => t('Address 3'),
        '#size' => 30,
        '#maxlength' => 255,
        '#attributes' => array('class' => array('address3')),
        '#type' => 'textfield',
        '#tag' => 'span',
        '#default_value' => isset($address['address3']) ? $address['address3'] : '',
      );
    }
  }
  else {
    // Add our own render callback for the format view
    $format['#pre_render'][] = '_addressfield_phone_render_address';
  }
}

