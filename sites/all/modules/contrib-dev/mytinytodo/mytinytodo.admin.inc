<?php

function mytinytodo_admin() {
    $form = array();
    $form['mytinytodo_enable_default_content'] = array(
        '#type' => 'checkbox',
        '#title' => t('Enable default content'),
        '#description' => t('Show example tasks when creating new lists.'),
        '#default_value' => variable_get('mytinytodo_enable_default_content', true),
    );

    return system_settings_form($form);
}
