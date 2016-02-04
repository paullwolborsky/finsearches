<?php

/**
 * @file
 * Definition of addressfield_address3_handler_field_address_address3_nr.
 */

/**
 * Provides diferent address 3 display options for addres entity(field).
 * @ingroup views_field_handlers
 */
class addressfield_address3_handler_field_address_address3_nr extends views_handler_field {

  /**
   * Option to address phone field.
   */
  public function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  /**
   * Render the addresfields phone field.
   */
  public function render($values) {
    $address3 = unserialize($this->get_value($values));
    $address3 = $address3['address3'];
    return $address3;
  }

}
