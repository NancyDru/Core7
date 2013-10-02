<?php
/**
 * @file
 * t_ta_content.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function t_ta_content_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'tracking_number';
  $rule->name = 'tracking_number';
  $rule->field_name = 'field_tracking_number';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'tracker';
  $rule->validator = 'field_validation_pattern_validator';
  $rule->settings = array(
    'pattern' => 'CAPT-9999',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
      8 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'The tracking number must be in the following format: CAPT-####';
  $export['tracking_number'] = $rule;

  return $export;
}
