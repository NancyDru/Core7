<?php
/**
 * @file
 * t_ta_content.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function t_ta_content_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*costs*field_tracker*node*tracker*field_related_costs';
  $cnr_obj->enabled = 1;
  $export['node*costs*field_tracker*node*tracker*field_related_costs'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*expense*field_corresponding_vca*node*vca*field_related_expenses';
  $cnr_obj->enabled = 1;
  $export['node*expense*field_corresponding_vca*node*vca*field_related_expenses'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*expense*field_related_user*user*user*field_expenses';
  $cnr_obj->enabled = 1;
  $export['node*expense*field_related_user*user*user*field_expenses'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*expense*field_user*user*user*field_expenses';
  $cnr_obj->enabled = 1;
  $export['node*expense*field_user*user*user*field_expenses'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*service*field_related_services*node*service*field_related_services';
  $cnr_obj->enabled = 1;
  $export['node*service*field_related_services*node*service*field_related_services'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*vca*field_related_user*user*user*field_vca';
  $cnr_obj->enabled = 1;
  $export['node*vca*field_related_user*user*user*field_vca'] = $cnr_obj;

  return $export;
}
