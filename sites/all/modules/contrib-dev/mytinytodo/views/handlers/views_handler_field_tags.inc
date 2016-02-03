<?php
/**
 * Field handler to present tags as a string.
 */
class views_handler_field_tags extends views_handler_field {
    function construct() {
        parent::construct();
    }
    
    function render($values) {
        $value = $this->get_value($values);
        return str_replace(',', ', ', $value);
    }
}
