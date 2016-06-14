<?php
/**
 * @file
 * fs_f_fn_search_api.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_f_fn_search_api_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fs_f_fn_search_api_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function fs_f_fn_search_api_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_page_solr_search_page'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_page_solr_search_page",
    "name" : "SOLR Search Page",
    "index_id" : "solr_index",
    "type" : "search_api_page",
    "enabled" : "0",
    "options" : {
      "custom" : { "page_id" : "solr_search_page" },
      "result count" : true,
      "fields" : [ "title" ],
      "results" : 1,
      "min_length" : "1",
      "submit_button_selector" : ":submit"
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function fs_f_fn_search_api_default_search_api_index() {
  $items = array();
  $items['solr_index'] = entity_import('search_api_index', '{
    "name" : "SOLR Index",
    "machine_name" : "solr_index",
    "description" : null,
    "server" : "solr_servere",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [
          "consultant_firm",
          "contact",
          "manager_firm",
          "mandate",
          "news",
          "office",
          "plan"
        ]
      },
      "index_directly" : 0,
      "cron_limit" : "100",
      "fields" : {
        "field_account_size" : { "type" : "integer" },
        "field_asset_allocation_history" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_consultant_firm_er" : { "type" : "integer", "entity_type" : "node" },
        "field_currency_tr" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_geographic_tr" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_major_minor_style_tr" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mandate_status_tr" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_news_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_office_type_tr" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_plan_er" : { "type" : "integer", "entity_type" : "node" },
        "field_plan_size" : { "type" : "decimal" },
        "field_plan_size_history" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_plan_type_tr" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "fields" : {
              "field_plan_size_history" : "field_plan_size_history",
              "field_major_minor_style_tr" : "field_major_minor_style_tr"
            }
          }
        },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_attachments_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_attachments_field_collections_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_attachments_entityreference_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_major_minor_style_tr:parent" : "field_major_minor_style_tr:parent",
              "field_major_minor_style_tr:parents_all" : "field_major_minor_style_tr:parents_all"
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function fs_f_fn_search_api_default_search_api_page() {
  $items = array();
  $items['solr_search_page'] = entity_import('search_api_page', '{
    "index_id" : "solr_index",
    "path" : "advanced-searching",
    "name" : "SOLR Search Page",
    "machine_name" : "solr_search_page",
    "description" : "",
    "options" : {
      "mode" : "single",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 1,
      "view_mode" : "search_api_page_result",
      "empty_behavior" : "blocks"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_saved_searches_settings().
 */
function fs_f_fn_search_api_default_search_api_saved_searches_settings() {
  $items = array();
  $items['solr_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "solr_index",
    "index_id" : "solr_index",
    "enabled" : "1",
    "options" : {
      "description" : "",
      "registered_choose_mail" : 1,
      "choose_name" : 1,
      "registered_user_delete_key" : 1,
      "show_empty_list" : 1,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 1,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "86400",
      "mail" : {
        "activate" : {
          "send" : 0,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\\u0027t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure your saved searches at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\u0022[search-api-saved-search:name]\\u0022:\\r\\n[search-api-saved-search:items]\\r\\n[search-api-saved-search:results-capped]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])",
          "max_results" : "0",
          "results_capped" : "\\u2026\\r\\nView all results: [search-api-saved-search:view-url]"
        }
      },
      "manual" : {
        "allow" : 1,
        "fulltext" : 1,
        "fields" : [
          "type",
          "title",
          "field_consultant_firm_er",
          "field_plan_type_tr",
          "field_plan_size_history",
          "field_asset_allocation_history",
          "field_currency_tr",
          "field_consultant_type_tr",
          "field_geographic_tr",
          "field_major_minor_style_tr",
          "field_plan_er",
          "field_plan_size",
          "field_account_size",
          "field_mandate_status_tr",
          "field_news_type",
          "field_office_type_tr",
          "search_api_language"
        ],
        "page" : {
          "path" : "\\/advanced-search",
          "fulltext" : "",
          "direct_filter_params" : "0"
        }
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function fs_f_fn_search_api_default_search_api_server() {
  $items = array();
  $items['solr_servere'] = entity_import('search_api_server', '{
    "name" : "SOLR Server",
    "machine_name" : "solr_servere",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8081",
      "path" : "\\/solr\\/Dev1",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
