<?php
/**
 * @file
 * t_ta_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function t_ta_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_and_skills|profile2|main|default';
  $field_group->group_name = 'group_background_and_skills';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background and skills',
    'weight' => '2',
    'children' => array(
      0 => 'field_resume',
      1 => 'field_bio',
      2 => 'field_content_expertise',
      3 => 'field_skill_areas',
      4 => 'field_populations_and_cultures',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background and skills',
      'instance_settings' => array(
        'classes' => 'field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_background_and_skills|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background_and_skills|profile2|main|form';
  $field_group->group_name = 'group_background_and_skills';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Background and skills',
    'weight' => '21',
    'children' => array(
      0 => 'field_resume',
      1 => 'field_bio',
      2 => 'field_content_expertise',
      3 => 'field_skill_areas',
      4 => 'field_populations_and_cultures',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-background-and-skills field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_background_and_skills|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basicinfo|profile2|main|default';
  $field_group->group_name = 'group_basicinfo';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic information',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_user_title',
      3 => 'field_hourly_rate',
      4 => 'field_type',
      5 => 'field_supervisor',
      6 => 'field_service_level',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Basic information',
      'instance_settings' => array(
        'classes' => 'group-basicinfo field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_basicinfo|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|node|service|default';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columns',
    'weight' => '3',
    'children' => array(
      0 => 'group_first_column',
      1 => 'group_second_column',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columns',
      'instance_settings' => array(
        'classes' => 'group-columns field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_columns|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|node|tracker|default';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columns',
    'weight' => '2',
    'children' => array(
      0 => 'group_first_column_2',
      1 => 'group_second_column_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columns',
      'instance_settings' => array(
        'classes' => 'group-columns field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_columns|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contract|node|vca|form';
  $field_group->group_name = 'group_contract';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vca';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'field_contract_dates',
      2 => 'field_task_to_charge',
      3 => 'field_related_user',
      4 => 'field_user_name_display',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contract',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-contract field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_contract|node|vca|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cost_breakouts|field_collection_item|field_individual_costs|form';
  $field_group->group_name = 'group_cost_breakouts';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_individual_costs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Labor Time',
    'weight' => '4',
    'children' => array(
      0 => 'field_total_time',
      1 => 'field_labor_cost_sub_total',
      2 => 'field_delivery_time',
      3 => 'field_prep_time',
      4 => 'field_travel_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Labor Time',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cost-breakouts field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cost_breakouts|field_collection_item|field_individual_costs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cost_overview|node|costs|default';
  $field_group->group_name = 'group_cost_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'costs';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Costs Overview',
    'weight' => '3',
    'children' => array(
      0 => 'field_estimated_staff_labor',
      1 => 'field_estimated_staff_travel',
      2 => 'field_estimated_consultant_labor',
      3 => 'field_estimated_consultant_trave',
      4 => 'field_total_estimated_cost',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Costs Overview',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cost_overview|node|costs|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_costsinformation|node|expense|default';
  $field_group->group_name = 'group_costsinformation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'expense';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Costs Information',
    'weight' => '4',
    'children' => array(
      0 => 'field_corresponding_vca',
      1 => 'field_international_travel',
      2 => 'field_date_received',
      3 => 'field_date_processed',
      4 => 'field_invoice',
      5 => 'field_related_user',
      6 => 'field_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Costs Information',
      'instance_settings' => array(
        'classes' => 'group-costsinformation field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_costsinformation|node|expense|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datesandapproval|node|tracker|default';
  $field_group->group_name = 'group_datesandapproval';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_second_column_2';
  $field_group->data = array(
    'label' => 'Dates and Approval',
    'weight' => '10',
    'children' => array(
      0 => 'field_date_approved_materials',
      1 => 'field_date_materials_will_be_sen',
      2 => 'field_po_approval_deadline',
      3 => 'field_tentative_dates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dates and Approval',
      'instance_settings' => array(
        'classes' => 'group-datesandapproval',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_datesandapproval|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datesandapproval|node|tracker|form';
  $field_group->group_name = 'group_datesandapproval';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates and Approval',
    'weight' => '9',
    'children' => array(
      0 => 'field_date_approved_materials',
      1 => 'field_date_materials_will_be_sen',
      2 => 'field_po_approval_deadline',
      3 => 'field_tentative_dates',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dates and Approval',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-datesandapproval field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_datesandapproval|node|tracker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|expense|form';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'expense';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_verticaltabs';
  $field_group->data = array(
    'label' => 'Received and Processed',
    'weight' => '7',
    'children' => array(
      0 => 'field_date_received',
      1 => 'field_date_processed',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Received and Processed',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_dates|node|expense|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|vca|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vca';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contract Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_contract_dates',
      1 => 'field_fixed_price',
      2 => 'field_source_source_justificatio',
      3 => 'field_labor_amount',
      4 => 'field_travel_amount_allowed',
      5 => 'field_original_statement_of_work',
      6 => 'field_amended_statement_of_work',
      7 => 'field_labor_hours_allowed',
      8 => 'field_travel_remaining',
      9 => 'field_labor_remaining',
      10 => 'field_labor_hours_remaining',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contract Details',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details|node|vca|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_docs|node|vca|form';
  $field_group->group_name = 'group_docs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vca';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documentation',
    'weight' => '5',
    'children' => array(
      0 => 'field_source_source_justificatio',
      1 => 'field_original_statement_of_work',
      2 => 'field_amended_statement_of_work',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Documentation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_docs|node|vca|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_effort|node|vca|form';
  $field_group->group_name = 'group_effort';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vca';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Effort',
    'weight' => '4',
    'children' => array(
      0 => 'field_fixed_price',
      1 => 'field_labor_amount',
      2 => 'field_travel_amount_allowed',
      3 => 'field_labor_hours_allowed',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Effort',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_effort|node|vca|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expensesoverview|node|expense|default';
  $field_group->group_name = 'group_expensesoverview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'expense';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expenses Overview',
    'weight' => '3',
    'children' => array(
      0 => 'field_hours_of_delivery',
      1 => 'field_airfare',
      2 => 'field_lodging',
      3 => 'field_meals',
      4 => 'field_shuttle_taxi',
      5 => 'field_mileage',
      6 => 'field_parking',
      7 => 'field_rental_vehicle',
      8 => 'field_other_travel',
      9 => 'field_total_travel_cost',
      10 => 'field_labor_expense',
      11 => 'field_total_expenses',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Expenses Overview',
      'instance_settings' => array(
        'classes' => 'group-expensesoverview field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_expensesoverview|node|expense|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_column_2|node|tracker|default';
  $field_group->group_name = 'group_first_column_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'First Column 2',
    'weight' => '3',
    'children' => array(
      0 => 'group_granteeandaudience',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'First Column 2',
      'instance_settings' => array(
        'classes' => 'group-first-column-2 field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_first_column_2|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_column|node|service|default';
  $field_group->group_name = 'group_first_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'First Column',
    'weight' => '3',
    'children' => array(
      0 => 'group_granteeandaudience',
      1 => 'group_planninganddelivery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'First Column',
      'instance_settings' => array(
        'classes' => 'group-first-column field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_first_column|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focusandproducts|node|service|default';
  $field_group->group_name = 'group_focusandproducts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus and Products',
    'weight' => '4',
    'children' => array(
      0 => 'field_cultural_competence',
      1 => 'field_literature_search',
      2 => 'field_sustainablity',
      3 => 'field_focus_areas',
      4 => 'field_ssi_focus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Focus and Products',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-focusandproducts field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_focusandproducts|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focusandproducts|node|service|form';
  $field_group->group_name = 'group_focusandproducts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus and Products',
    'weight' => '7',
    'children' => array(
      0 => 'field_cultural_competence',
      1 => 'field_literature_search',
      2 => 'field_sustainablity',
      3 => 'field_focus_areas',
      4 => 'field_ssi_focus',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Focus and Products',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_focusandproducts|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focusandproducts|node|service|word';
  $field_group->group_name = 'group_focusandproducts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'word';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus and Products',
    'weight' => '5',
    'children' => array(
      0 => 'field_cultural_competence',
      1 => 'field_literature_search',
      2 => 'field_sustainablity',
      3 => 'field_focus_areas',
      4 => 'field_ssi_focus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Focus and Products',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-focusandproducts field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_focusandproducts|node|service|word'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_granteeandaudience|node|service|default';
  $field_group->group_name = 'group_granteeandaudience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_first_column';
  $field_group->data = array(
    'label' => 'Grantee and Audience',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_t_j',
      1 => 'field_region_hhs',
      2 => 'field_grant_program_or_initiativ',
      3 => 'field_primary_audience_for_servi',
      4 => 'field_sub_audience_for_service',
      5 => 'field_other_grant_program_or_ini',
      6 => 'field_other_primary_audience_for',
      7 => 'field_other_sub_audience_for_s',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Grantee and Audience',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-granteeandaudience field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_granteeandaudience|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_granteeandaudience|node|service|form';
  $field_group->group_name = 'group_granteeandaudience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grantee and Audience',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_t_j',
      1 => 'field_grant_program_or_initiativ',
      2 => 'field_primary_audience_for_servi',
      3 => 'field_sub_audience_for_service',
      4 => 'field_other_grant_program_or_ini',
      5 => 'field_other_primary_audience_for',
      6 => 'field_other_sub_audience_for_s',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Grantee and Audience',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_granteeandaudience|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_granteeandaudience|node|service|word';
  $field_group->group_name = 'group_granteeandaudience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'word';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grantee and Audience',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_t_j',
      1 => 'field_region_hhs',
      2 => 'field_grant_program_or_initiativ',
      3 => 'field_primary_audience_for_servi',
      4 => 'field_sub_audience_for_service',
      5 => 'field_other_grant_program_or_ini',
      6 => 'field_other_primary_audience_for',
      7 => 'field_other_sub_audience_for_s',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Grantee and Audience',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-granteeandaudience field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_granteeandaudience|node|service|word'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_granteeandaudience|node|tracker|default';
  $field_group->group_name = 'group_granteeandaudience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_first_column_2';
  $field_group->data = array(
    'label' => 'Grantee and Audience',
    'weight' => '4',
    'children' => array(
      0 => 'field_cohort_number',
      1 => 'field_location_of_grantee_state',
      2 => 'field_stj_contact',
      3 => 'field_target_audience',
      4 => 'field_audiences_for_service',
      5 => 'field_state_project_officer',
      6 => 'field_grant_program_or_initiativ',
      7 => 'field_other_grant_program_or_ini',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Grantee and Audience',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-granteeandaudience field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_granteeandaudience|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_granteeandaudience|node|tracker|form';
  $field_group->group_name = 'group_granteeandaudience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grantee and Audience',
    'weight' => '6',
    'children' => array(
      0 => 'field_cohort_number',
      1 => 'field_location_of_grantee_state',
      2 => 'field_stj_contact',
      3 => 'field_target_audience',
      4 => 'field_audiences_for_service',
      5 => 'field_state_project_officer',
      6 => 'field_grant_program_or_initiativ',
      7 => 'field_other_grant_program_or_ini',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Grantee and Audience',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_granteeandaudience|node|tracker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_invoiceandnotes|node|expense|form';
  $field_group->group_name = 'group_invoiceandnotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'expense';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_verticaltabs';
  $field_group->data = array(
    'label' => 'Invoice and Notes',
    'weight' => '8',
    'children' => array(
      0 => 'field_invoice',
      1 => 'field_notes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Invoice and Notes',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-invoiceandnotes field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_invoiceandnotes|node|expense|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loading|node|resource_team|default';
  $field_group->group_name = 'group_loading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_team';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Financial Loading',
    'weight' => '3',
    'children' => array(
      0 => 'field_rate_multiplier',
      1 => 'field_overhead',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-loading field-group-fieldset ',
      ),
    ),
  );
  $export['group_loading|node|resource_team|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loading|node|resource_team|form';
  $field_group->group_name = 'group_loading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource_team';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Financial Loading',
    'weight' => '3',
    'children' => array(
      0 => 'field_rate_multiplier',
      1 => 'field_overhead',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-loading field-group-fieldset ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_loading|node|resource_team|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_miscellaneous|node|vca|form';
  $field_group->group_name = 'group_miscellaneous';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vca';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Miscellaneous',
    'weight' => '6',
    'children' => array(
      0 => 'field_travel_remaining',
      1 => 'field_labor_remaining',
      2 => 'field_related_expenses',
      3 => 'field_labor_hours_remaining',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-miscellaneous field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_miscellaneous|node|vca|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needandservice|node|service|default';
  $field_group->group_name = 'group_needandservice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_second_column';
  $field_group->data = array(
    'label' => 'Needs and Services',
    'weight' => '6',
    'children' => array(
      0 => 'field_need',
      1 => 'field_services',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Needs and Services',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-needandservice field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_needandservice|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needandservice|node|service|form';
  $field_group->group_name = 'group_needandservice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Needs and Services',
    'weight' => '5',
    'children' => array(
      0 => 'field_need',
      1 => 'field_services',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Needs and Services',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_needandservice|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needandservice|node|service|word';
  $field_group->group_name = 'group_needandservice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'word';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Needs and Services',
    'weight' => '3',
    'children' => array(
      0 => 'field_need',
      1 => 'field_services',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Needs and Services',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-needandservice field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_needandservice|node|service|word'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needandservice|node|tracker|default';
  $field_group->group_name = 'group_needandservice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_second_column_2';
  $field_group->data = array(
    'label' => 'Needs and Services',
    'weight' => '8',
    'children' => array(
      0 => 'field_problem_description',
      1 => 'field_service_purpose',
      2 => 'field_samhsa_ta_database_keyword',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Needs and Services',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-needandservice field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_needandservice|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_needandservice|node|tracker|form';
  $field_group->group_name = 'group_needandservice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Needs and Services',
    'weight' => '7',
    'children' => array(
      0 => 'field_problem_description',
      1 => 'field_service_purpose',
      2 => 'field_samhsa_ta_database_keyword',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Needs and Services',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_needandservice|node|tracker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|profile2|main|default';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes on performance',
    'weight' => '3',
    'children' => array(
      0 => 'field_programmatic',
      1 => 'field_administrative_financial',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Notes on performance',
      'instance_settings' => array(
        'classes' => 'field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_notes|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|profile2|main|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Notes on performance',
    'weight' => '22',
    'children' => array(
      0 => 'field_programmatic',
      1 => 'field_administrative_financial',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Notes on performance',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_notes|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|profile2|main|default';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '1',
    'children' => array(
      0 => 'field_organization',
      1 => 'field_small_business',
      2 => 'field_address',
      3 => 'field_city',
      4 => 'field_state',
      5 => 'field_zip',
      6 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'classes' => 'group-organization field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organization|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|profile2|main|form';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '20',
    'children' => array(
      0 => 'field_organization',
      1 => 'field_small_business',
      2 => 'field_address',
      3 => 'field_city',
      4 => 'field_state',
      5 => 'field_zip',
      6 => 'field_phone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organization field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organization|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person|field_collection_item|field_individual_costs|default';
  $field_group->group_name = 'group_person';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_individual_costs';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Person',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_email',
      1 => 'field_user_name_display',
      2 => 'field_user_title_display',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Person',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_person|field_collection_item|field_individual_costs|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_planninganddelivery|node|service|default';
  $field_group->group_name = 'group_planninganddelivery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_first_column';
  $field_group->data = array(
    'label' => 'Planning and Delivery',
    'weight' => '4',
    'children' => array(
      0 => 'field_related_services',
      1 => 'field_timeframe',
      2 => 'field_tta_method',
      3 => 'field_tentative_dates',
      4 => 'field_other_groups',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Planning and Delivery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-planninganddelivery field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_planninganddelivery|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_planninganddelivery|node|service|form';
  $field_group->group_name = 'group_planninganddelivery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Planning and Delivery',
    'weight' => '4',
    'children' => array(
      0 => 'field_related_services',
      1 => 'field_timeframe',
      2 => 'field_tta_method',
      3 => 'field_tentative_dates',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Planning and Delivery',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_planninganddelivery|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_planninganddelivery|node|service|word';
  $field_group->group_name = 'group_planninganddelivery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'word';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Planning and Delivery',
    'weight' => '2',
    'children' => array(
      0 => 'field_related_services',
      1 => 'field_timeframe',
      2 => 'field_tta_method',
      3 => 'field_other_resource_team',
      4 => 'field_tentative_dates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Planning and Delivery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-planninganddelivery field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_planninganddelivery|node|service|word'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_productsmaterials|node|tracker|default';
  $field_group->group_name = 'group_productsmaterials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Materials and Products',
    'weight' => '3',
    'children' => array(
      0 => 'field_materialsproducts_new',
      1 => 'field_materialsproducts_adapt',
      2 => 'field_materialsproducts_existing',
      3 => 'field_indicate_any_materials_or_',
      4 => 'field_other_indicate_any_materia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Materials and Products',
      'instance_settings' => array(
        'classes' => 'group-materialsandproducts',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_productsmaterials|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_productsmaterials|node|tracker|form';
  $field_group->group_name = 'group_productsmaterials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Products and Materials',
    'weight' => '10',
    'children' => array(
      0 => 'field_materialsproducts_new',
      1 => 'field_materialsproducts_adapt',
      2 => 'field_materialsproducts_existing',
      3 => 'field_indicate_any_materials_or_',
      4 => 'field_other_indicate_any_materia',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Products and Materials',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-productsmaterials field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_productsmaterials|node|tracker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|profile2|main|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Main profile',
    'weight' => '19',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_user_title',
      3 => 'field_hourly_rate',
      4 => 'field_type',
      5 => 'field_supervisor',
      6 => 'field_service_level',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile field-group-tab ',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_column_2|node|tracker|default';
  $field_group->group_name = 'group_second_column_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Second Column 2',
    'weight' => '4',
    'children' => array(
      0 => 'group_datesandapproval',
      1 => 'group_needandservice',
      2 => 'group_servicedelivery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Second Column 2',
      'instance_settings' => array(
        'classes' => 'group-second-column-2 field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_second_column_2|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_column|node|service|default';
  $field_group->group_name = 'group_second_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Second Column',
    'weight' => '4',
    'children' => array(
      0 => 'group_needandservice',
      1 => 'group_staffandconsultants',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Second Column',
      'instance_settings' => array(
        'classes' => 'group-second-column field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_second_column|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_servicedelivery|node|tracker|default';
  $field_group->group_name = 'group_servicedelivery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_second_column_2';
  $field_group->data = array(
    'label' => 'Service Delivery',
    'weight' => '9',
    'children' => array(
      0 => 'field_hours',
      1 => 'field_role',
      2 => 'field_special_requirements',
      3 => 'field_servicetype',
      4 => 'field_travel_requirements',
      5 => 'field_other_groups',
      6 => 'field_hours_for_service_planning',
      7 => 'field_brief_summary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Service Delivery',
      'instance_settings' => array(
        'classes' => 'group-servicedelivery field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_servicedelivery|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_servicedelivery|node|tracker|form';
  $field_group->group_name = 'group_servicedelivery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Service Delivery',
    'weight' => '8',
    'children' => array(
      0 => 'field_hours',
      1 => 'field_role',
      2 => 'field_special_requirements',
      3 => 'field_servicetype',
      4 => 'field_travel_requirements',
      5 => 'field_hours_for_service_planning',
      6 => 'field_brief_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Service Delivery',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-servicedelivery field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_servicedelivery|node|tracker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staffandconsultants|node|service|default';
  $field_group->group_name = 'group_staffandconsultants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_second_column';
  $field_group->data = array(
    'label' => 'Staff and Consultants',
    'weight' => '7',
    'children' => array(
      0 => 'field_managing_service',
      1 => 'field_planning_and_delivery',
      2 => 'field_stj_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Staff and Consultants',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_staffandconsultants|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staffandconsultants|node|service|form';
  $field_group->group_name = 'group_staffandconsultants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff and Consultants',
    'weight' => '6',
    'children' => array(
      0 => 'field_managing_service',
      1 => 'field_planning_and_delivery',
      2 => 'field_stj_contact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Staff and Consultants',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-staffandconsultants field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_staffandconsultants|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staffandconsultants|node|service|word';
  $field_group->group_name = 'group_staffandconsultants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'word';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff and Consultants',
    'weight' => '4',
    'children' => array(
      0 => 'field_managing_service',
      1 => 'field_planning_and_delivery',
      2 => 'field_stj_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Staff and Consultants',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_staffandconsultants|node|service|word'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|profile2|main|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_notes',
      1 => 'group_profile',
      2 => 'group_organization',
      3 => 'group_background_and_skills',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tabs|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|node|service|form';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CAPT Teams',
    'weight' => '2',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'field_other_groups',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'CAPT Teams',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-team field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_team|node|service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|node|tracker|form';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CAPT Teams',
    'weight' => '5',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'field_other_groups',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'CAPT Teams',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-team field-group-tab ',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_team|node|tracker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|user|user|default';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource, Functional, or Project Team',
    'weight' => '5',
    'children' => array(
      0 => 'og_user_node',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resource, Functional, or Project Team',
      'instance_settings' => array(
        'classes' => 'group-team field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_team|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_info|node|service|default';
  $field_group->group_name = 'group_top_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_service_year',
      1 => 'field_status',
      2 => 'og_group_ref',
      3 => 'submitted_by',
      4 => 'workflow_current_state',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top Info',
      'instance_settings' => array(
        'classes' => 'group-top-info field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top_info|node|service|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_info|node|service|word';
  $field_group->group_name = 'group_top_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'service';
  $field_group->mode = 'word';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_service_year',
      1 => 'field_rt',
      2 => 'field_status',
      3 => 'submitted_by',
      4 => 'workflow_current_state',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top Info',
      'instance_settings' => array(
        'classes' => 'group-top-info field-group-div ',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top_info|node|service|word'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_info|node|tracker|default';
  $field_group->group_name = 'group_top_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tracker';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_service',
      1 => 'field_service_year',
      2 => 'og_group_ref',
      3 => 'field_status',
      4 => 'field_tracking_number',
      5 => 'submitted_by',
      6 => 'workflow_current_state',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top Info',
      'instance_settings' => array(
        'classes' => 'group-top-info field-group-div ',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top_info|node|tracker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_travel_costs|field_collection_item|field_individual_costs|form';
  $field_group->group_name = 'group_travel_costs';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_individual_costs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Travel Costs',
    'weight' => '6',
    'children' => array(
      0 => 'field_total_travel_cost',
      1 => 'field_meals',
      2 => 'field_lodging',
      3 => 'field_mileage',
      4 => 'field_airfare',
      5 => 'field_rental_vehicle',
      6 => 'field_shuttle_taxi',
      7 => 'field_parking',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Travel Costs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-travel-costs field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_travel_costs|field_collection_item|field_individual_costs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_travelcosts|node|expense|form';
  $field_group->group_name = 'group_travelcosts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'expense';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_travel';
  $field_group->data = array(
    'label' => 'Travel costs',
    'weight' => '5',
    'children' => array(
      0 => 'field_airfare',
      1 => 'field_lodging',
      2 => 'field_meals',
      3 => 'field_shuttle_taxi',
      4 => 'field_mileage',
      5 => 'field_parking',
      6 => 'field_rental_vehicle',
      7 => 'field_other_travel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Travel costs',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_travelcosts|node|expense|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_travel|node|expense|form';
  $field_group->group_name = 'group_travel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'expense';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_verticaltabs';
  $field_group->data = array(
    'label' => 'Delivery and Travel',
    'weight' => '6',
    'children' => array(
      0 => 'field_hours_of_delivery',
      1 => 'field_international_travel',
      2 => 'group_travelcosts',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Delivery and Travel',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_travel|node|expense|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_verticaltabs|node|expense|form';
  $field_group->group_name = 'group_verticaltabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'expense';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vertical Tabs',
    'weight' => '3',
    'children' => array(
      0 => 'group_dates',
      1 => 'group_travel',
      2 => 'group_invoiceandnotes',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-verticaltabs field-group-tabs ',
      ),
    ),
  );
  $export['group_verticaltabs|node|expense|form'] = $field_group;

  return $export;
}
