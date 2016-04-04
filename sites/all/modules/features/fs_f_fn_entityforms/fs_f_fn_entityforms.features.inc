<?php
/**
 * @file
 * fs_f_fn_entityforms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_fn_entityforms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function fs_f_fn_entityforms_default_entityform_type() {
  $items = array();
  $items['contact_us'] = entity_import('entityform_type', '{
    "type" : "contact_us",
    "label" : "Contact Us",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "advanced_input" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank You",
      "submission_text" : {
        "value" : "\\u003Cp\\u003EThank you for contacting us! We\\u0027ll review your message and respond as soon as we\\u0027re able. Have a nice day.\\u003C\\/p\\u003E\\r\\n",
        "format" : "advanced_input"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "2" : "2",
        "1" : "1",
        "3" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "php_code" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/contact-us",
        "alias" : "contact-us",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/contact-us\\/confirm",
        "alias" : "thank-you",
        "language" : "und"
      }
    }
  }');
  return $items;
}
