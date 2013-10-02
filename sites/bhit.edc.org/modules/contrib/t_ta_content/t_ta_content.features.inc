<?php
/**
 * @file
 * t_ta_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function t_ta_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function t_ta_content_default_entityform_type() {
  $items = array();
  $items['email_views_services'] = entity_import('entityform_type', '{
    "type" : "email_views_services",
    "label" : "Email views - services",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submission_rules" : { "rules_email_content" : "rules_email_content" },
      "validation_rules" : [],
      "submit_button_text" : "Send message",
      "submission_page_title" : "",
      "submission_text" : { "value" : "\\u003Cnone\\u003E", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "2" : "2",
        "1" : 0,
        "3" : 0,
        "8" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "9" : 0
      },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "[current-page:url:path]",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  $items['email_views_trackers'] = entity_import('entityform_type', '{
    "type" : "email_views_trackers",
    "label" : "Email views - trackers",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submission_rules" : { "rules_email_content" : "rules_email_content" },
      "validation_rules" : [],
      "submit_button_text" : "Send message",
      "submission_page_title" : "",
      "submission_text" : { "value" : "\\u003Cnone\\u003E", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "2" : "2",
        "1" : 0,
        "3" : 0,
        "8" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "9" : 0
      },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "[current-page:url:path]",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function t_ta_content_node_info() {
  $items = array(
    'costs' => array(
      'name' => t('Costs'),
      'base' => 'node_content',
      'description' => t('This provide cost information for Tracker forms.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'expense' => array(
      'name' => t('Labor and Travel Expense'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Invoice number'),
      'help' => '',
    ),
    'resource_team' => array(
      'name' => t('Resource Team'),
      'base' => 'node_content',
      'description' => t('This defines which groups users and content may belong to.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('This is the STJ Service Planning root content.'),
      'has_title' => '1',
      'title_label' => t('Tagline'),
      'help' => '',
    ),
    'tracker' => array(
      'name' => t('Tracker Form'),
      'base' => 'node_content',
      'description' => t('CSAP Training and Technical Assistance Tracking form'),
      'has_title' => '1',
      'title_label' => t('Tagline'),
      'help' => '',
    ),
    'vca' => array(
      'name' => t('Vendor Consulting Agreement'),
      'base' => 'node_content',
      'description' => t('Provides information about vendors and consultant availability.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function t_ta_content_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
