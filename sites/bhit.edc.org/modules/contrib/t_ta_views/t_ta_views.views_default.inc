<?php
/**
 * @file
 * t_ta_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function t_ta_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'email_form_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform_type';
  $view->human_name = 'Email form block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Send by Email';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entityform Type: Rendered Entityform Type */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_entityform_type';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  /* Filter criterion: Entityform Type: Internal, numeric entityform type ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '1';

  /* Display: Email views block - services */
  $handler = $view->new_display('block', 'Email views block - services', 'block');
  $handler->display->display_options['block_description'] = 'Email views block - services';

  /* Display: Email views block - services */
  $handler = $view->new_display('block', 'Email views block - services', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Entityform Type: Internal, numeric entityform type ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['value']['value'] = '2';
  $handler->display->display_options['block_description'] = 'Email views block - trackers';
  $export['email_form_block'] = $view;

  $view = new view();
  $view->name = 'email_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Email views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'email views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="http://captservices.edc.org/node/!1">View this content in the CAPT Services Database</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['id'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['field'] = 'reverse_field_tracker_node';
  /* Relationship: Content: Individual Costs (field_individual_costs) */
  $handler->display->display_options['relationships']['field_individual_costs_value']['id'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['table'] = 'field_data_field_individual_costs';
  $handler->display->display_options['relationships']['field_individual_costs_value']['field'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_need']['id'] = 'field_need';
  $handler->display->display_options['fields']['field_need']['table'] = 'field_data_field_need';
  $handler->display->display_options['fields']['field_need']['field'] = 'field_need';
  $handler->display->display_options['fields']['field_need']['element_type'] = 'span';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['element_type'] = 'span';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: HHS region */
  $handler->display->display_options['fields']['field_region_hhs']['id'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['field'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region_hhs']['hide_empty'] = TRUE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['id'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['table'] = 'field_data_field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['field'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['label'] = '';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['element_label_colon'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['id'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['table'] = 'field_data_field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['field'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['label'] = '';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_label_colon'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_primary_audience_for']['id'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['table'] = 'field_data_field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['field'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['label'] = '';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['element_label_colon'] = FALSE;
  /* Field: Content: Primary audience for service */
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['id'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['table'] = 'field_data_field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['field'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['delta_offset'] = '0';
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Primary resource, functional, or project team responsible for service';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Quarters for service delivery */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_timeframe']['delta_offset'] = '0';
  /* Field: Content: Related services */
  $handler->display->display_options['fields']['field_related_services']['id'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['fields']['field_related_services']['field'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_related_services']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_services']['delta_offset'] = '0';
  /* Field: Content: SAMHSA's Strategic Initiatives focus areas */
  $handler->display->display_options['fields']['field_ssi_focus']['id'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['table'] = 'field_data_field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['field'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ssi_focus']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_ssi_focus']['delta_offset'] = '0';
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Service Year';
  $handler->display->display_options['fields']['field_service_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Staff responsible for managing the service */
  $handler->display->display_options['fields']['field_managing_service']['id'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['table'] = 'field_data_field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['field'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_managing_service']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_managing_service']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_managing_service']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_managing_service']['separator'] = '';
  /* Field: Content: Staff responsible for planning and delivery */
  $handler->display->display_options['fields']['field_planning_and_delivery']['id'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['table'] = 'field_data_field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['field'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_planning_and_delivery']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_planning_and_delivery']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_planning_and_delivery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_planning_and_delivery']['separator'] = '';
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_s_t_j']['id'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['field'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_s_t_j']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_s_t_j']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Strategic Prevention Framework focus areas */
  $handler->display->display_options['fields']['field_focus_areas']['id'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['table'] = 'field_data_field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['field'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_focus_areas']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_focus_areas']['delta_offset'] = '0';
  /* Field: Content: Sub-audience for service */
  $handler->display->display_options['fields']['field_sub_audience_for_service']['id'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['table'] = 'field_data_field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['field'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['delta_offset'] = '0';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_tta_method']['id'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['table'] = 'field_data_field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['field'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tta_method']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_tta_method']['delta_offset'] = '0';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: The primary focus of this service is cultural competence */
  $handler->display->display_options['fields']['field_cultural_competence']['id'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['table'] = 'field_data_field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['field'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['element_type'] = 'span';
  /* Field: Content: The primary focus of this service is sustainablity */
  $handler->display->display_options['fields']['field_sustainablity']['id'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['table'] = 'field_data_field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['field'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['element_type'] = 'span';
  /* Field: Content: The product of this service is a literature search or review */
  $handler->display->display_options['fields']['field_literature_search']['id'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['table'] = 'field_data_field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['field'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['element_type'] = 'span';
  /* Field: Content: Audience description */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = 'Audience (detail)';
  $handler->display->display_options['fields']['field_target_audience']['element_type'] = 'span';
  /* Field: Content: Audience for service */
  $handler->display->display_options['fields']['field_audiences_for_service']['id'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['table'] = 'field_data_field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['field'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_audiences_for_service']['delta_offset'] = '0';
  /* Field: Content: Cohort number */
  $handler->display->display_options['fields']['field_cohort_number']['id'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['table'] = 'field_data_field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['field'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['element_type'] = 'span';
  /* Field: Content: Date by which Core will approve materials */
  $handler->display->display_options['fields']['field_date_approved_materials']['id'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['table'] = 'field_data_field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['field'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_approved_materials']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date by which Core will receive draft materials */
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['id'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['table'] = 'field_data_field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['field'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Deadline for project officer approval */
  $handler->display->display_options['fields']['field_po_approval_deadline']['id'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['table'] = 'field_data_field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['field'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_po_approval_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_problem_description']['id'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['table'] = 'field_data_field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['field'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['element_type'] = 'span';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_service_purpose']['id'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['table'] = 'field_data_field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['field'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['element_type'] = 'span';
  /* Field: Content: Grantee involvement */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['label'] = 'Grantee involvement (if applicable)';
  $handler->display->display_options['fields']['field_role']['element_type'] = 'span';
  /* Field: Content: Indicate any materials or products you propose to develop */
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['id'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['table'] = 'field_data_field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['field'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['delta_offset'] = '0';
  /* Field: Content: List any existing materials or products you plan to use */
  $handler->display->display_options['fields']['field_materialsproducts_existing']['id'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['table'] = 'field_data_field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['field'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['element_type'] = 'span';
  /* Field: Content: List any materials or products you plan to adapt */
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['id'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['table'] = 'field_data_field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['field'] = 'field_materialsproducts_adapt';
  /* Field: Content: List any new materials or products you plan to develop and why */
  $handler->display->display_options['fields']['field_materialsproducts_new']['id'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['table'] = 'field_data_field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['field'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['element_type'] = 'span';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['id'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['table'] = 'field_data_field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['field'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['label'] = '';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_label_colon'] = FALSE;
  /* Field: Content: Related service */
  $handler->display->display_options['fields']['field_service']['id'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['table'] = 'field_data_field_service';
  $handler->display->display_options['fields']['field_service']['field'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Hours for service delivery */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = 'Service length (in hours)';
  $handler->display->display_options['fields']['field_hours']['element_type'] = 'span';
  /* Field: Content: Special requirements */
  $handler->display->display_options['fields']['field_special_requirements']['id'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['table'] = 'field_data_field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['field'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['element_type'] = 'span';
  /* Field: Content: State project officer */
  $handler->display->display_options['fields']['field_state_project_officer']['id'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['table'] = 'field_data_field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['field'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_state_project_officer']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_state_project_officer']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_servicetype']['id'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['field'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_servicetype']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_servicetype']['delta_offset'] = '0';
  /* Field: Content: Travel requirements */
  $handler->display->display_options['fields']['field_travel_requirements']['id'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['field'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['element_type'] = 'span';
  /* Field: Content: Estimated Consultant Labor */
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['id'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['table'] = 'field_data_field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['field'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Consultant Travel */
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['id'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['table'] = 'field_data_field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['field'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Labor */
  $handler->display->display_options['fields']['field_estimated_staff_labor']['id'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['table'] = 'field_data_field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['field'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Travel */
  $handler->display->display_options['fields']['field_estimated_staff_travel']['id'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['table'] = 'field_data_field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['field'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['element_type'] = 'span';
  /* Field: Content: Individual Costs */
  $handler->display->display_options['fields']['field_individual_costs']['id'] = 'field_individual_costs';
  $handler->display->display_options['fields']['field_individual_costs']['table'] = 'field_data_field_individual_costs';
  $handler->display->display_options['fields']['field_individual_costs']['field'] = 'field_individual_costs';
  $handler->display->display_options['fields']['field_individual_costs']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_individual_costs']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_individual_costs']['delta_offset'] = '0';
  /* Field: Content: Total Estimated Cost */
  $handler->display->display_options['fields']['field_total_estimated_cost']['id'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['table'] = 'field_data_field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['field'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_type'] = 'span';
  /* Field: Content: Tracker */
  $handler->display->display_options['fields']['field_tracker']['id'] = 'field_tracker';
  $handler->display->display_options['fields']['field_tracker']['table'] = 'field_data_field_tracker';
  $handler->display->display_options['fields']['field_tracker']['field'] = 'field_tracker';
  $handler->display->display_options['fields']['field_tracker']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tracker']['settings'] = array(
    'link' => 0,
  );
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'email_views_all');
  $handler->display->display_options['path'] = 'email-views/email-all-service-content';

  /* Display: All Service Content */
  $handler = $view->new_display('page', 'All Service Content', 'email_views_all_service_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'email views - all service content';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Service Year';
  $handler->display->display_options['fields']['field_service_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Grantee and Audience';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h2';
  /* Field: Content: HHS region */
  $handler->display->display_options['fields']['field_region_hhs']['id'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['field'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region_hhs']['hide_empty'] = TRUE;
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_s_t_j']['id'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['field'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_s_t_j']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_s_t_j']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['id'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['table'] = 'field_data_field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['field'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['label'] = '';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['hide_empty'] = TRUE;
  /* Field: Content: Primary audience for service */
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['id'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['table'] = 'field_data_field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['field'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_primary_audience_for']['id'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['table'] = 'field_data_field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['field'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['label'] = '';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_primary_audience_for']['hide_empty'] = TRUE;
  /* Field: Content: Sub-audience for service */
  $handler->display->display_options['fields']['field_sub_audience_for_service']['id'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['table'] = 'field_data_field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['field'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['id'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['table'] = 'field_data_field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['field'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['label'] = '';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Planning and Delivery';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'h2';
  /* Field: Content: Quarters for service delivery */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_timeframe']['delta_offset'] = '0';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_tta_method']['id'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['table'] = 'field_data_field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['field'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tta_method']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_tta_method']['delta_offset'] = '0';
  /* Field: Content: Related services */
  $handler->display->display_options['fields']['field_related_services']['id'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['fields']['field_related_services']['field'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_related_services']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_services']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Needs and Services';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'h2';
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_need']['id'] = 'field_need';
  $handler->display->display_options['fields']['field_need']['table'] = 'field_data_field_need';
  $handler->display->display_options['fields']['field_need']['field'] = 'field_need';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['element_type'] = 'span';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Staff and Consultants';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'h2';
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Staff responsible for planning and delivery */
  $handler->display->display_options['fields']['field_planning_and_delivery']['id'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['table'] = 'field_data_field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['field'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_planning_and_delivery']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_planning_and_delivery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_planning_and_delivery']['separator'] = '';
  /* Field: Content: Staff responsible for managing the service */
  $handler->display->display_options['fields']['field_managing_service']['id'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['table'] = 'field_data_field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['field'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_managing_service']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_managing_service']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_managing_service']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Focus and Products';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'h2';
  /* Field: Content: SAMHSA's Strategic Initiatives focus areas */
  $handler->display->display_options['fields']['field_ssi_focus']['id'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['table'] = 'field_data_field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['field'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ssi_focus']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_ssi_focus']['delta_offset'] = '0';
  /* Field: Content: Strategic Prevention Framework focus areas */
  $handler->display->display_options['fields']['field_focus_areas']['id'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['table'] = 'field_data_field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['field'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_focus_areas']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_focus_areas']['delta_offset'] = '0';
  /* Field: Content: The primary focus of this service is cultural competence */
  $handler->display->display_options['fields']['field_cultural_competence']['id'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['table'] = 'field_data_field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['field'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['element_type'] = 'span';
  /* Field: Content: The primary focus of this service is sustainablity */
  $handler->display->display_options['fields']['field_sustainablity']['id'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['table'] = 'field_data_field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['field'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['element_type'] = 'span';
  /* Field: Content: The product of this service is a literature search or review */
  $handler->display->display_options['fields']['field_literature_search']['id'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['table'] = 'field_data_field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['field'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['element_type'] = 'span';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Related Trackers';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'email_views';
  $handler->display->display_options['fields']['view']['display'] = 'page_1';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  $handler->display->display_options['path'] = 'email-views/email-views-all-service-content';

  /* Display: All Tracker Content */
  $handler = $view->new_display('page', 'All Tracker Content', 'email_views_all_tracker_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'email views - all tracker content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['element_type'] = 'span';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Service Year';
  $handler->display->display_options['fields']['field_service_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Primary CAPT team responsible for service';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Related service */
  $handler->display->display_options['fields']['field_service']['id'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['table'] = 'field_data_field_service';
  $handler->display->display_options['fields']['field_service']['field'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Grantee and Audience';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h2';
  /* Field: Content: HHS region */
  $handler->display->display_options['fields']['field_region_hhs']['id'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['field'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['element_type'] = 'span';
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Cohort number */
  $handler->display->display_options['fields']['field_cohort_number']['id'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['table'] = 'field_data_field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['field'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['element_type'] = 'span';
  /* Field: Content: State project officer */
  $handler->display->display_options['fields']['field_state_project_officer']['id'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['table'] = 'field_data_field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['field'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_state_project_officer']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_state_project_officer']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Audience for service */
  $handler->display->display_options['fields']['field_audiences_for_service']['id'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['table'] = 'field_data_field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['field'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_audiences_for_service']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['id'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['table'] = 'field_data_field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['field'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['label'] = '';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_label_colon'] = FALSE;
  /* Field: Content: Audience description */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['element_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Needs and Services';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'h2';
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_problem_description']['id'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['table'] = 'field_data_field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['field'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['element_type'] = 'div';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_service_purpose']['id'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['table'] = 'field_data_field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['field'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['element_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Service Delivery';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'h2';
  /* Field: Content: Hours for service delivery */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = 'Service length (in hours)';
  $handler->display->display_options['fields']['field_hours']['element_type'] = 'span';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_servicetype']['id'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['field'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_servicetype']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_servicetype']['delta_offset'] = '0';
  /* Field: Content: Travel requirements */
  $handler->display->display_options['fields']['field_travel_requirements']['id'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['field'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['element_type'] = 'span';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_other_resource_team']['id'] = 'field_other_resource_team';
  $handler->display->display_options['fields']['field_other_resource_team']['table'] = 'field_data_field_other_resource_team';
  $handler->display->display_options['fields']['field_other_resource_team']['field'] = 'field_other_resource_team';
  $handler->display->display_options['fields']['field_other_resource_team']['label'] = 'Other teams involved in service delivery';
  $handler->display->display_options['fields']['field_other_resource_team']['element_type'] = 'span';
  /* Field: Content: Grantee involvement */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['label'] = 'Grantee involvement (if applicable)';
  $handler->display->display_options['fields']['field_role']['element_type'] = 'div';
  /* Field: Content: Special requirements */
  $handler->display->display_options['fields']['field_special_requirements']['id'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['table'] = 'field_data_field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['field'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['element_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Dates and Approval';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'h2';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Deadline for project officer approval */
  $handler->display->display_options['fields']['field_po_approval_deadline']['id'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['table'] = 'field_data_field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['field'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_po_approval_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date by which Core will receive draft materials */
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['id'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['table'] = 'field_data_field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['field'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date by which Core will approve materials */
  $handler->display->display_options['fields']['field_date_approved_materials']['id'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['table'] = 'field_data_field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['field'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_approved_materials']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Materials and Products';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'h2';
  /* Field: Content: Indicate any materials or products you propose to develop */
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['id'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['table'] = 'field_data_field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['field'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['delta_offset'] = '0';
  /* Field: Content: List any new materials or products you plan to develop and why */
  $handler->display->display_options['fields']['field_materialsproducts_new']['id'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['table'] = 'field_data_field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['field'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['element_type'] = 'p';
  /* Field: Content: List any materials or products you plan to adapt */
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['id'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['table'] = 'field_data_field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['field'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['element_type'] = 'p';
  /* Field: Content: List any existing materials or products you plan to use */
  $handler->display->display_options['fields']['field_materialsproducts_existing']['id'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['table'] = 'field_data_field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['field'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['element_type'] = 'p';
  $handler->display->display_options['path'] = 'email-views/email-views-all-tracker-content';

  /* Display: All Costing Content */
  $handler = $view->new_display('page', 'All Costing Content', 'email_views_all_costing_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'email views - all costing content';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Summary and Individual Costs</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'CAPT team';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Estimated Consultant Labor */
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['id'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['table'] = 'field_data_field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['field'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Consultant Travel */
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['id'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['table'] = 'field_data_field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['field'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Labor */
  $handler->display->display_options['fields']['field_estimated_staff_labor']['id'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['table'] = 'field_data_field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['field'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Travel */
  $handler->display->display_options['fields']['field_estimated_staff_travel']['id'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['table'] = 'field_data_field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['field'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['element_type'] = 'span';
  /* Field: Content: Total Estimated Cost */
  $handler->display->display_options['fields']['field_total_estimated_cost']['id'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['table'] = 'field_data_field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['field'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_type'] = 'span';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'email_views';
  $handler->display->display_options['fields']['view']['display'] = 'email_views_individual_costing';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['path'] = 'email-views/email-views-all-costing-content';

  /* Display: Individual Costing */
  $handler = $view->new_display('page', 'Individual Costing', 'email_views_individual_costing');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'email views - individual costing';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_user_name_display']['id'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['table'] = 'field_data_field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['field'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_user_name_display']['label'] = '';
  $handler->display->display_options['fields']['field_user_name_display']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_user_name_display']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_name_display']['type'] = 'computed_field_unsanitized';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_user_title_display']['id'] = 'field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['table'] = 'field_data_field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['field'] = 'field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_user_title_display']['label'] = '';
  $handler->display->display_options['fields']['field_user_title_display']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Email */
  $handler->display->display_options['fields']['field_user_email']['id'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['fields']['field_user_email']['field'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_user_email']['label'] = '';
  $handler->display->display_options['fields']['field_user_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_email']['alter']['text'] = '[field_user_email-value]';
  $handler->display->display_options['fields']['field_user_email']['alter']['path'] = 'mailto:[field_user_email-value]';
  $handler->display->display_options['fields']['field_user_email']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_user_email']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Prep Time */
  $handler->display->display_options['fields']['field_prep_time']['id'] = 'field_prep_time';
  $handler->display->display_options['fields']['field_prep_time']['table'] = 'field_data_field_prep_time';
  $handler->display->display_options['fields']['field_prep_time']['field'] = 'field_prep_time';
  $handler->display->display_options['fields']['field_prep_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_prep_time']['label'] = '';
  $handler->display->display_options['fields']['field_prep_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prep_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prep_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Travel Time */
  $handler->display->display_options['fields']['field_travel_time']['id'] = 'field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['table'] = 'field_data_field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['field'] = 'field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_travel_time']['label'] = '';
  $handler->display->display_options['fields']['field_travel_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_travel_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_travel_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Delivery Time */
  $handler->display->display_options['fields']['field_delivery_time']['id'] = 'field_delivery_time';
  $handler->display->display_options['fields']['field_delivery_time']['table'] = 'field_data_field_delivery_time';
  $handler->display->display_options['fields']['field_delivery_time']['field'] = 'field_delivery_time';
  $handler->display->display_options['fields']['field_delivery_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_delivery_time']['label'] = '';
  $handler->display->display_options['fields']['field_delivery_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_delivery_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_delivery_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Total Time */
  $handler->display->display_options['fields']['field_total_time']['id'] = 'field_total_time';
  $handler->display->display_options['fields']['field_total_time']['table'] = 'field_data_field_total_time';
  $handler->display->display_options['fields']['field_total_time']['field'] = 'field_total_time';
  $handler->display->display_options['fields']['field_total_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_total_time']['label'] = '';
  $handler->display->display_options['fields']['field_total_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_time']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Labor Cost Sub-Total */
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['id'] = 'field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['table'] = 'field_data_field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['field'] = 'field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['label'] = '';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['element_label_colon'] = FALSE;
  /* Field: Field: Per Diem */
  $handler->display->display_options['fields']['field_meals']['id'] = 'field_meals';
  $handler->display->display_options['fields']['field_meals']['table'] = 'field_data_field_meals';
  $handler->display->display_options['fields']['field_meals']['field'] = 'field_meals';
  $handler->display->display_options['fields']['field_meals']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_meals']['label'] = '';
  $handler->display->display_options['fields']['field_meals']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meals']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Lodging */
  $handler->display->display_options['fields']['field_lodging']['id'] = 'field_lodging';
  $handler->display->display_options['fields']['field_lodging']['table'] = 'field_data_field_lodging';
  $handler->display->display_options['fields']['field_lodging']['field'] = 'field_lodging';
  $handler->display->display_options['fields']['field_lodging']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_lodging']['label'] = '';
  $handler->display->display_options['fields']['field_lodging']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lodging']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lodging']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Mileage */
  $handler->display->display_options['fields']['field_mileage']['id'] = 'field_mileage';
  $handler->display->display_options['fields']['field_mileage']['table'] = 'field_data_field_mileage';
  $handler->display->display_options['fields']['field_mileage']['field'] = 'field_mileage';
  $handler->display->display_options['fields']['field_mileage']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_mileage']['label'] = '';
  $handler->display->display_options['fields']['field_mileage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mileage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mileage']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Airfare */
  $handler->display->display_options['fields']['field_airfare']['id'] = 'field_airfare';
  $handler->display->display_options['fields']['field_airfare']['table'] = 'field_data_field_airfare';
  $handler->display->display_options['fields']['field_airfare']['field'] = 'field_airfare';
  $handler->display->display_options['fields']['field_airfare']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_airfare']['label'] = '';
  $handler->display->display_options['fields']['field_airfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_airfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_airfare']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Rental Vehicle */
  $handler->display->display_options['fields']['field_rental_vehicle']['id'] = 'field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['table'] = 'field_data_field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['field'] = 'field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_rental_vehicle']['label'] = '';
  $handler->display->display_options['fields']['field_rental_vehicle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rental_vehicle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rental_vehicle']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Shuttle/Taxi */
  $handler->display->display_options['fields']['field_shuttle_taxi']['id'] = 'field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['table'] = 'field_data_field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['field'] = 'field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_shuttle_taxi']['label'] = '';
  $handler->display->display_options['fields']['field_shuttle_taxi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_shuttle_taxi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shuttle_taxi']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Parking/Tolls */
  $handler->display->display_options['fields']['field_parking']['id'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['table'] = 'field_data_field_parking';
  $handler->display->display_options['fields']['field_parking']['field'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_parking']['label'] = '';
  $handler->display->display_options['fields']['field_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parking']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Travel */
  $handler->display->display_options['fields']['field_total_travel_cost']['id'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['table'] = 'field_data_field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['field'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_total_travel_cost']['label'] = '';
  $handler->display->display_options['fields']['field_total_travel_cost']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_travel_cost']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
<tbody>
<tr>
  <td class="category">Prep Time</td>
  <td class="number">[field_prep_time]</td>
</tr>
<tr>
  <td class="category">Travel Time</td>
  <td class="number">[field_travel_time]</td>
</tr>
<tr>
  <td class="category">Delivery Time</td>
  <td class="number">[field_delivery_time]</td>
</tr>
<tr>
  <td class="total-time category">Total Time</td>
  <td class="number">[field_total_time]</td>
</tr>
<tr class="sum-row first">
  <td class="category">Labor Cost Sub-Total</td>
  <td class="number">[field_labor_cost_sub_total]</td>
</tr>
<tr>
  <td class="category">Per Diem</td>
  <td class="number">[field_meals]</td>
</tr>
<tr>
  <td class="category">Lodging</td>
  <td class="number">[field_lodging]</td>
</tr>
<tr>
  <td class="category">Mileage</td>
  <td class="number">[field_mileage]</td>
</tr>
<tr>
  <td class="category">Airfare</td>
  <td class="number">[field_airfare]</td>
</tr>
<tr>
  <td class="category">Rental Vehicle</td>
  <td class="number">[field_rental_vehicle]</td>
</tr>
<tr>
  <td class="category">Shuttle/Taxi</td>
  <td class="number">[field_shuttle_taxi]</td>
</tr>
<tr>
  <td class="category">Parking</td>
  <td class="number">[field_parking]</td>
</tr>
<tr class="sum-row">
  <td class="category">Travel Cost Sub-Total</td>
  <td class="number">[field_total_travel_cost]</td>
</tr>
</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'email-views/email-views-individual-costing';

  /* Display: Summary Costing */
  $handler = $view->new_display('page', 'Summary Costing', 'email_views_summary_costing');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'email views - summary costing';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Summary Costs</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Primary CAPT team responsible for service';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Estimated Consultant Labor */
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['id'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['table'] = 'field_data_field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['field'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Consultant Travel */
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['id'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['table'] = 'field_data_field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['field'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Labor */
  $handler->display->display_options['fields']['field_estimated_staff_labor']['id'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['table'] = 'field_data_field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['field'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Travel */
  $handler->display->display_options['fields']['field_estimated_staff_travel']['id'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['table'] = 'field_data_field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['field'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['element_type'] = 'span';
  /* Field: Content: Total Estimated Cost */
  $handler->display->display_options['fields']['field_total_estimated_cost']['id'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['table'] = 'field_data_field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['field'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_type'] = 'span';
  $handler->display->display_options['path'] = 'email-views/email-views-summary-costing';

  /* Display: Related Trackers */
  $handler = $view->new_display('page', 'Related Trackers', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'email views - related trackers';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No related trackers';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_service_node']['id'] = 'reverse_field_service_node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['field'] = 'reverse_field_service_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_tracking_number']['label'] = '';
  $handler->display->display_options['fields']['field_tracking_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tracking_number']['alter']['text'] = 'Tracking Number: [field_tracking_number]';
  $handler->display->display_options['fields']['field_tracking_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tracking_number']['element_wrapper_type'] = 'h3';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['title']['label'] = 'Tagline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_servicetype']['id'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['field'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_servicetype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_servicetype']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_servicetype']['delta_offset'] = '0';
  /* Field: Content: Travel requirements */
  $handler->display->display_options['fields']['field_travel_requirements']['id'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['field'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_travel_requirements']['element_type'] = 'span';
  $handler->display->display_options['path'] = 'email-views/email-views-related-trackers';

  /* Display: All Service Content2 */
  $handler = $view->new_display('page', 'All Service Content2', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'email views - all service content';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Service Year';
  $handler->display->display_options['fields']['field_service_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Grantee and Audience';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h2';
  /* Field: Content: HHS region */
  $handler->display->display_options['fields']['field_region_hhs']['id'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['field'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region_hhs']['hide_empty'] = TRUE;
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_s_t_j']['id'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['field'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_s_t_j']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_s_t_j']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['id'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['table'] = 'field_data_field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['field'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['label'] = '';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['hide_empty'] = TRUE;
  /* Field: Content: Primary audience for service */
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['id'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['table'] = 'field_data_field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['field'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_primary_audience_for']['id'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['table'] = 'field_data_field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['field'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['label'] = '';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_primary_audience_for']['hide_empty'] = TRUE;
  /* Field: Content: Sub-audience for service */
  $handler->display->display_options['fields']['field_sub_audience_for_service']['id'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['table'] = 'field_data_field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['field'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['id'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['table'] = 'field_data_field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['field'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['label'] = '';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Planning and Delivery';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'h2';
  /* Field: Content: Quarters for service delivery */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_timeframe']['delta_offset'] = '0';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_tta_method']['id'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['table'] = 'field_data_field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['field'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tta_method']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_tta_method']['delta_offset'] = '0';
  /* Field: Content: Related services */
  $handler->display->display_options['fields']['field_related_services']['id'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['fields']['field_related_services']['field'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_related_services']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_services']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Needs and Services';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'h2';
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_need']['id'] = 'field_need';
  $handler->display->display_options['fields']['field_need']['table'] = 'field_data_field_need';
  $handler->display->display_options['fields']['field_need']['field'] = 'field_need';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['element_type'] = 'span';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Staff and Consultants';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'h2';
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Staff responsible for planning and delivery */
  $handler->display->display_options['fields']['field_planning_and_delivery']['id'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['table'] = 'field_data_field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['field'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_planning_and_delivery']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_planning_and_delivery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_planning_and_delivery']['separator'] = '';
  /* Field: Content: Staff responsible for managing the service */
  $handler->display->display_options['fields']['field_managing_service']['id'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['table'] = 'field_data_field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['field'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_managing_service']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_managing_service']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_managing_service']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Focus and Products';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'h2';
  /* Field: Content: SAMHSA's Strategic Initiatives focus areas */
  $handler->display->display_options['fields']['field_ssi_focus']['id'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['table'] = 'field_data_field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['field'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ssi_focus']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_ssi_focus']['delta_offset'] = '0';
  /* Field: Content: Strategic Prevention Framework focus areas */
  $handler->display->display_options['fields']['field_focus_areas']['id'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['table'] = 'field_data_field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['field'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_focus_areas']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_focus_areas']['delta_offset'] = '0';
  /* Field: Content: The primary focus of this service is cultural competence */
  $handler->display->display_options['fields']['field_cultural_competence']['id'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['table'] = 'field_data_field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['field'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['element_type'] = 'span';
  /* Field: Content: The primary focus of this service is sustainablity */
  $handler->display->display_options['fields']['field_sustainablity']['id'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['table'] = 'field_data_field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['field'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['element_type'] = 'span';
  /* Field: Content: The product of this service is a literature search or review */
  $handler->display->display_options['fields']['field_literature_search']['id'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['table'] = 'field_data_field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['field'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['element_type'] = 'span';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Related Trackers';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'email_views';
  $handler->display->display_options['fields']['view']['display'] = 'page_1';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  $handler->display->display_options['path'] = 'email-views/email-views-all-service-content2';
  $export['email_views'] = $view;

  $view = new view();
  $view->name = 'entityform_emails';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entityform Emails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SAMHSA\'s CAPT Training and Technical Assistance Request Form';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="http://captservices.edc.org/node/!1">View this content in the CAPT Services Database</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['id'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['field'] = 'reverse_field_tracker_node';
  /* Relationship: Content: Individual Costs (field_individual_costs) */
  $handler->display->display_options['relationships']['field_individual_costs_value']['id'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['table'] = 'field_data_field_individual_costs';
  $handler->display->display_options['relationships']['field_individual_costs_value']['field'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_need']['id'] = 'field_need';
  $handler->display->display_options['fields']['field_need']['table'] = 'field_data_field_need';
  $handler->display->display_options['fields']['field_need']['field'] = 'field_need';
  $handler->display->display_options['fields']['field_need']['element_type'] = 'span';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['element_type'] = 'span';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: HHS region */
  $handler->display->display_options['fields']['field_region_hhs']['id'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['field'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region_hhs']['hide_empty'] = TRUE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['id'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['table'] = 'field_data_field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['field'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['label'] = '';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['element_label_colon'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['id'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['table'] = 'field_data_field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['field'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['label'] = '';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_label_colon'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_primary_audience_for']['id'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['table'] = 'field_data_field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['field'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['label'] = '';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['element_label_colon'] = FALSE;
  /* Field: Content: Primary audience for service */
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['id'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['table'] = 'field_data_field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['field'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['delta_offset'] = '0';
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Primary resource, functional, or project team responsible for service';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Quarters for service delivery */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_timeframe']['delta_offset'] = '0';
  /* Field: Content: Related services */
  $handler->display->display_options['fields']['field_related_services']['id'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['fields']['field_related_services']['field'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_related_services']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_services']['delta_offset'] = '0';
  /* Field: Content: SAMHSA's Strategic Initiatives focus areas */
  $handler->display->display_options['fields']['field_ssi_focus']['id'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['table'] = 'field_data_field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['field'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ssi_focus']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_ssi_focus']['delta_offset'] = '0';
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Service Year';
  $handler->display->display_options['fields']['field_service_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Content: Staff responsible for managing the service */
  $handler->display->display_options['fields']['field_managing_service']['id'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['table'] = 'field_data_field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['field'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_managing_service']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_managing_service']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_managing_service']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_managing_service']['separator'] = '';
  /* Field: Content: Staff responsible for planning and delivery */
  $handler->display->display_options['fields']['field_planning_and_delivery']['id'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['table'] = 'field_data_field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['field'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_planning_and_delivery']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_planning_and_delivery']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_planning_and_delivery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_planning_and_delivery']['separator'] = '';
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_s_t_j']['id'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['field'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_s_t_j']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_s_t_j']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Strategic Prevention Framework focus areas */
  $handler->display->display_options['fields']['field_focus_areas']['id'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['table'] = 'field_data_field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['field'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_focus_areas']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_focus_areas']['delta_offset'] = '0';
  /* Field: Content: Sub-audience for service */
  $handler->display->display_options['fields']['field_sub_audience_for_service']['id'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['table'] = 'field_data_field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['field'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['delta_offset'] = '0';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_tta_method']['id'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['table'] = 'field_data_field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['field'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tta_method']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_tta_method']['delta_offset'] = '0';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: The primary focus of this service is cultural competence */
  $handler->display->display_options['fields']['field_cultural_competence']['id'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['table'] = 'field_data_field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['field'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['element_type'] = 'span';
  /* Field: Content: The primary focus of this service is sustainablity */
  $handler->display->display_options['fields']['field_sustainablity']['id'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['table'] = 'field_data_field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['field'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['element_type'] = 'span';
  /* Field: Content: The product of this service is a literature search or review */
  $handler->display->display_options['fields']['field_literature_search']['id'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['table'] = 'field_data_field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['field'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['element_type'] = 'span';
  /* Field: Content: Audience description */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = 'Audience (detail)';
  $handler->display->display_options['fields']['field_target_audience']['element_type'] = 'span';
  /* Field: Content: Audience for service */
  $handler->display->display_options['fields']['field_audiences_for_service']['id'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['table'] = 'field_data_field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['field'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_audiences_for_service']['delta_offset'] = '0';
  /* Field: Content: Cohort number */
  $handler->display->display_options['fields']['field_cohort_number']['id'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['table'] = 'field_data_field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['field'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['element_type'] = 'span';
  /* Field: Content: Date by which Core will approve materials */
  $handler->display->display_options['fields']['field_date_approved_materials']['id'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['table'] = 'field_data_field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['field'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_approved_materials']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date by which Core will receive draft materials */
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['id'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['table'] = 'field_data_field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['field'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Deadline for project officer approval */
  $handler->display->display_options['fields']['field_po_approval_deadline']['id'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['table'] = 'field_data_field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['field'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_po_approval_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_problem_description']['id'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['table'] = 'field_data_field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['field'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['element_type'] = 'span';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_service_purpose']['id'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['table'] = 'field_data_field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['field'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['element_type'] = 'span';
  /* Field: Content: Grantee involvement */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['label'] = 'Grantee involvement (if applicable)';
  $handler->display->display_options['fields']['field_role']['element_type'] = 'span';
  /* Field: Content: Indicate any materials or products you propose to develop */
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['id'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['table'] = 'field_data_field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['field'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['delta_offset'] = '0';
  /* Field: Content: List any existing materials or products you plan to use */
  $handler->display->display_options['fields']['field_materialsproducts_existing']['id'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['table'] = 'field_data_field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['field'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['element_type'] = 'span';
  /* Field: Content: List any materials or products you plan to adapt */
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['id'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['table'] = 'field_data_field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['field'] = 'field_materialsproducts_adapt';
  /* Field: Content: List any new materials or products you plan to develop and why */
  $handler->display->display_options['fields']['field_materialsproducts_new']['id'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['table'] = 'field_data_field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['field'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['element_type'] = 'span';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['id'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['table'] = 'field_data_field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['field'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['label'] = '';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_label_colon'] = FALSE;
  /* Field: Content: Related service */
  $handler->display->display_options['fields']['field_service']['id'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['table'] = 'field_data_field_service';
  $handler->display->display_options['fields']['field_service']['field'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Hours for service delivery */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = 'Service length (in hours)';
  $handler->display->display_options['fields']['field_hours']['element_type'] = 'span';
  /* Field: Content: Special requirements */
  $handler->display->display_options['fields']['field_special_requirements']['id'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['table'] = 'field_data_field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['field'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['element_type'] = 'span';
  /* Field: Content: State project officer */
  $handler->display->display_options['fields']['field_state_project_officer']['id'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['table'] = 'field_data_field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['field'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_state_project_officer']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_state_project_officer']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_servicetype']['id'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['field'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_servicetype']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_servicetype']['delta_offset'] = '0';
  /* Field: Content: Travel requirements */
  $handler->display->display_options['fields']['field_travel_requirements']['id'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['field'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['element_type'] = 'span';
  /* Field: Content: Estimated Consultant Labor */
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['id'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['table'] = 'field_data_field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['field'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Consultant Travel */
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['id'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['table'] = 'field_data_field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['field'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Labor */
  $handler->display->display_options['fields']['field_estimated_staff_labor']['id'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['table'] = 'field_data_field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['field'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Travel */
  $handler->display->display_options['fields']['field_estimated_staff_travel']['id'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['table'] = 'field_data_field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['field'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['element_type'] = 'span';
  /* Field: Content: Individual Costs */
  $handler->display->display_options['fields']['field_individual_costs']['id'] = 'field_individual_costs';
  $handler->display->display_options['fields']['field_individual_costs']['table'] = 'field_data_field_individual_costs';
  $handler->display->display_options['fields']['field_individual_costs']['field'] = 'field_individual_costs';
  $handler->display->display_options['fields']['field_individual_costs']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_individual_costs']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_individual_costs']['delta_offset'] = '0';
  /* Field: Content: Total Estimated Cost */
  $handler->display->display_options['fields']['field_total_estimated_cost']['id'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['table'] = 'field_data_field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['field'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_type'] = 'span';
  /* Field: Content: Tracker */
  $handler->display->display_options['fields']['field_tracker']['id'] = 'field_tracker';
  $handler->display->display_options['fields']['field_tracker']['table'] = 'field_data_field_tracker';
  $handler->display->display_options['fields']['field_tracker']['field'] = 'field_tracker';
  $handler->display->display_options['fields']['field_tracker']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tracker']['settings'] = array(
    'link' => 0,
  );
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'email_views_all');
  $handler->display->display_options['path'] = 'email-views/email-all-service-content';

  /* Display: All Service Content */
  $handler = $view->new_display('page', 'All Service Content', 'entityform_emails_all_service_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'all service content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Service Year';
  $handler->display->display_options['fields']['field_service_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Grantee and Audience';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h2';
  /* Field: Content: HHS region */
  $handler->display->display_options['fields']['field_region_hhs']['id'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['field'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_region_hhs']['hide_empty'] = TRUE;
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_s_t_j']['id'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['field'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_s_t_j']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_s_t_j']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['id'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['table'] = 'field_data_field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['field'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['label'] = '';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['hide_empty'] = TRUE;
  /* Field: Content: Primary audience for service */
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['id'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['table'] = 'field_data_field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['field'] = 'field_primary_audience_for_servi';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_primary_audience_for_servi']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_primary_audience_for']['id'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['table'] = 'field_data_field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['field'] = 'field_other_primary_audience_for';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['label'] = '';
  $handler->display->display_options['fields']['field_other_primary_audience_for']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_primary_audience_for']['hide_empty'] = TRUE;
  /* Field: Content: Sub-audience for service */
  $handler->display->display_options['fields']['field_sub_audience_for_service']['id'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['table'] = 'field_data_field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['field'] = 'field_sub_audience_for_service';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sub_audience_for_service']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['id'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['table'] = 'field_data_field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['field'] = 'field_other_sub_audience_for_s';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['label'] = '';
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_sub_audience_for_s']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Planning and Delivery';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'h2';
  /* Field: Content: Quarters for service delivery */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_timeframe']['delta_offset'] = '0';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_tta_method']['id'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['table'] = 'field_data_field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['field'] = 'field_tta_method';
  $handler->display->display_options['fields']['field_tta_method']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tta_method']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_tta_method']['delta_offset'] = '0';
  /* Field: Content: Related services */
  $handler->display->display_options['fields']['field_related_services']['id'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['fields']['field_related_services']['field'] = 'field_related_services';
  $handler->display->display_options['fields']['field_related_services']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_related_services']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_services']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Needs and Services';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'h2';
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_need']['id'] = 'field_need';
  $handler->display->display_options['fields']['field_need']['table'] = 'field_data_field_need';
  $handler->display->display_options['fields']['field_need']['field'] = 'field_need';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_services']['id'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['table'] = 'field_data_field_services';
  $handler->display->display_options['fields']['field_services']['field'] = 'field_services';
  $handler->display->display_options['fields']['field_services']['element_type'] = 'span';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Staff and Consultants';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'h2';
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Staff responsible for planning and delivery */
  $handler->display->display_options['fields']['field_planning_and_delivery']['id'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['table'] = 'field_data_field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['field'] = 'field_planning_and_delivery';
  $handler->display->display_options['fields']['field_planning_and_delivery']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_planning_and_delivery']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_planning_and_delivery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_planning_and_delivery']['separator'] = '';
  /* Field: Content: Staff responsible for managing the service */
  $handler->display->display_options['fields']['field_managing_service']['id'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['table'] = 'field_data_field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['field'] = 'field_managing_service';
  $handler->display->display_options['fields']['field_managing_service']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_managing_service']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_managing_service']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_managing_service']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Focus and Products';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'h2';
  /* Field: Content: SAMHSA's Strategic Initiatives focus areas */
  $handler->display->display_options['fields']['field_ssi_focus']['id'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['table'] = 'field_data_field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['field'] = 'field_ssi_focus';
  $handler->display->display_options['fields']['field_ssi_focus']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_ssi_focus']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_ssi_focus']['delta_offset'] = '0';
  /* Field: Content: Strategic Prevention Framework focus areas */
  $handler->display->display_options['fields']['field_focus_areas']['id'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['table'] = 'field_data_field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['field'] = 'field_focus_areas';
  $handler->display->display_options['fields']['field_focus_areas']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_focus_areas']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_focus_areas']['delta_offset'] = '0';
  /* Field: Content: The primary focus of this service is cultural competence */
  $handler->display->display_options['fields']['field_cultural_competence']['id'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['table'] = 'field_data_field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['field'] = 'field_cultural_competence';
  $handler->display->display_options['fields']['field_cultural_competence']['element_type'] = 'span';
  /* Field: Content: The primary focus of this service is sustainablity */
  $handler->display->display_options['fields']['field_sustainablity']['id'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['table'] = 'field_data_field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['field'] = 'field_sustainablity';
  $handler->display->display_options['fields']['field_sustainablity']['element_type'] = 'span';
  /* Field: Content: The product of this service is a literature search or review */
  $handler->display->display_options['fields']['field_literature_search']['id'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['table'] = 'field_data_field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['field'] = 'field_literature_search';
  $handler->display->display_options['fields']['field_literature_search']['element_type'] = 'span';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Related Trackers';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'email_views';
  $handler->display->display_options['fields']['view']['display'] = 'page_1';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  $handler->display->display_options['path'] = 'entityform-emails/all-service-content';

  /* Display: Related Trackers */
  $handler = $view->new_display('page', 'Related Trackers', 'entityform_emails_related_trackers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'related trackers';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No related trackers';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_service_node']['id'] = 'reverse_field_service_node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['field'] = 'reverse_field_service_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_tracking_number']['label'] = '';
  $handler->display->display_options['fields']['field_tracking_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tracking_number']['alter']['text'] = 'Tracking Number: [field_tracking_number]';
  $handler->display->display_options['fields']['field_tracking_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tracking_number']['element_wrapper_type'] = 'h3';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['title']['label'] = 'Tagline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_servicetype']['id'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['field'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_servicetype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_servicetype']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_servicetype']['delta_offset'] = '0';
  /* Field: Content: Travel requirements */
  $handler->display->display_options['fields']['field_travel_requirements']['id'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['field'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_travel_requirements']['element_type'] = 'span';
  $handler->display->display_options['path'] = 'entityform-emails/related-trackers';

  /* Display: All Tracker Content */
  $handler = $view->new_display('page', 'All Tracker Content', 'entityform_emails_all_tracker_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'all tracker content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['element_type'] = 'span';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Service Year';
  $handler->display->display_options['fields']['field_service_year']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['element_type'] = 'span';
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Primary CAPT team responsible for service';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Related service */
  $handler->display->display_options['fields']['field_service']['id'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['table'] = 'field_data_field_service';
  $handler->display->display_options['fields']['field_service']['field'] = 'field_service';
  $handler->display->display_options['fields']['field_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Grantee and Audience';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h2';
  /* Field: Content: HHS region */
  $handler->display->display_options['fields']['field_region_hhs']['id'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['field'] = 'field_region_hhs';
  $handler->display->display_options['fields']['field_region_hhs']['element_type'] = 'span';
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Cohort number */
  $handler->display->display_options['fields']['field_cohort_number']['id'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['table'] = 'field_data_field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['field'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['element_type'] = 'span';
  /* Field: Content: State project officer */
  $handler->display->display_options['fields']['field_state_project_officer']['id'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['table'] = 'field_data_field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['field'] = 'field_state_project_officer';
  $handler->display->display_options['fields']['field_state_project_officer']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_state_project_officer']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_state_project_officer']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Audience for service */
  $handler->display->display_options['fields']['field_audiences_for_service']['id'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['table'] = 'field_data_field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['field'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_audiences_for_service']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['id'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['table'] = 'field_data_field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['field'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['label'] = '';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_label_colon'] = FALSE;
  /* Field: Content: Audience description */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['element_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Needs and Services';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'h2';
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_problem_description']['id'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['table'] = 'field_data_field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['field'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['element_type'] = 'div';
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_service_purpose']['id'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['table'] = 'field_data_field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['field'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['element_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Service Delivery';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'h2';
  /* Field: Content: Hours for service delivery */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = 'Service length (in hours)';
  $handler->display->display_options['fields']['field_hours']['element_type'] = 'span';
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_servicetype']['id'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['field'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_servicetype']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_servicetype']['delta_offset'] = '0';
  /* Field: Content: Travel requirements */
  $handler->display->display_options['fields']['field_travel_requirements']['id'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['field'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['element_type'] = 'span';
  /* Field: Content: Grantee involvement */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['label'] = 'Grantee involvement (if applicable)';
  $handler->display->display_options['fields']['field_role']['element_type'] = 'div';
  /* Field: Content: Special requirements */
  $handler->display->display_options['fields']['field_special_requirements']['id'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['table'] = 'field_data_field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['field'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['element_type'] = 'div';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Dates and Approval';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'h2';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Deadline for project officer approval */
  $handler->display->display_options['fields']['field_po_approval_deadline']['id'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['table'] = 'field_data_field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['field'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_po_approval_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date by which Core will receive draft materials */
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['id'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['table'] = 'field_data_field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['field'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date by which Core will approve materials */
  $handler->display->display_options['fields']['field_date_approved_materials']['id'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['table'] = 'field_data_field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['field'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_approved_materials']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Materials and Products';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'h2';
  /* Field: Content: Indicate any materials or products you propose to develop */
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['id'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['table'] = 'field_data_field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['field'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['delta_offset'] = '0';
  /* Field: Content: List any new materials or products you plan to develop and why */
  $handler->display->display_options['fields']['field_materialsproducts_new']['id'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['table'] = 'field_data_field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['field'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['element_type'] = 'p';
  /* Field: Content: List any materials or products you plan to adapt */
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['id'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['table'] = 'field_data_field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['field'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['element_type'] = 'p';
  /* Field: Content: List any existing materials or products you plan to use */
  $handler->display->display_options['fields']['field_materialsproducts_existing']['id'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['table'] = 'field_data_field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['field'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['element_type'] = 'p';
  $handler->display->display_options['path'] = 'entityform-emails/all-tracker-content';

  /* Display: Individual Costing */
  $handler = $view->new_display('page', 'Individual Costing', 'entityform_emails_individual_costing');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'individual costing';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'og_group_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['id'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['field'] = 'reverse_field_tracker_node';
  /* Relationship: Content: Individual Costs (field_individual_costs) */
  $handler->display->display_options['relationships']['field_individual_costs_value']['id'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['table'] = 'field_data_field_individual_costs';
  $handler->display->display_options['relationships']['field_individual_costs_value']['field'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['field_individual_costs_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_user_name_display']['id'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['table'] = 'field_data_field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['field'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_user_name_display']['label'] = '';
  $handler->display->display_options['fields']['field_user_name_display']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_user_name_display']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_name_display']['type'] = 'computed_field_unsanitized';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_user_title_display']['id'] = 'field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['table'] = 'field_data_field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['field'] = 'field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_user_title_display']['label'] = '';
  $handler->display->display_options['fields']['field_user_title_display']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Email */
  $handler->display->display_options['fields']['field_user_email']['id'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['fields']['field_user_email']['field'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_user_email']['label'] = '';
  $handler->display->display_options['fields']['field_user_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_email']['alter']['text'] = '[field_user_email-value]';
  $handler->display->display_options['fields']['field_user_email']['alter']['path'] = 'mailto:[field_user_email-value]';
  $handler->display->display_options['fields']['field_user_email']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_user_email']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Prep Time */
  $handler->display->display_options['fields']['field_prep_time']['id'] = 'field_prep_time';
  $handler->display->display_options['fields']['field_prep_time']['table'] = 'field_data_field_prep_time';
  $handler->display->display_options['fields']['field_prep_time']['field'] = 'field_prep_time';
  $handler->display->display_options['fields']['field_prep_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_prep_time']['label'] = '';
  $handler->display->display_options['fields']['field_prep_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prep_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prep_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Travel Time */
  $handler->display->display_options['fields']['field_travel_time']['id'] = 'field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['table'] = 'field_data_field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['field'] = 'field_travel_time';
  $handler->display->display_options['fields']['field_travel_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_travel_time']['label'] = '';
  $handler->display->display_options['fields']['field_travel_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_travel_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_travel_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Delivery Time */
  $handler->display->display_options['fields']['field_delivery_time']['id'] = 'field_delivery_time';
  $handler->display->display_options['fields']['field_delivery_time']['table'] = 'field_data_field_delivery_time';
  $handler->display->display_options['fields']['field_delivery_time']['field'] = 'field_delivery_time';
  $handler->display->display_options['fields']['field_delivery_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_delivery_time']['label'] = '';
  $handler->display->display_options['fields']['field_delivery_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_delivery_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_delivery_time']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Total Time */
  $handler->display->display_options['fields']['field_total_time']['id'] = 'field_total_time';
  $handler->display->display_options['fields']['field_total_time']['table'] = 'field_data_field_total_time';
  $handler->display->display_options['fields']['field_total_time']['field'] = 'field_total_time';
  $handler->display->display_options['fields']['field_total_time']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_total_time']['label'] = '';
  $handler->display->display_options['fields']['field_total_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_time']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Labor Cost Sub-Total */
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['id'] = 'field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['table'] = 'field_data_field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['field'] = 'field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['label'] = '';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['element_label_colon'] = FALSE;
  /* Field: Field: Per Diem */
  $handler->display->display_options['fields']['field_meals']['id'] = 'field_meals';
  $handler->display->display_options['fields']['field_meals']['table'] = 'field_data_field_meals';
  $handler->display->display_options['fields']['field_meals']['field'] = 'field_meals';
  $handler->display->display_options['fields']['field_meals']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_meals']['label'] = '';
  $handler->display->display_options['fields']['field_meals']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meals']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Lodging */
  $handler->display->display_options['fields']['field_lodging']['id'] = 'field_lodging';
  $handler->display->display_options['fields']['field_lodging']['table'] = 'field_data_field_lodging';
  $handler->display->display_options['fields']['field_lodging']['field'] = 'field_lodging';
  $handler->display->display_options['fields']['field_lodging']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_lodging']['label'] = '';
  $handler->display->display_options['fields']['field_lodging']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lodging']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lodging']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Mileage */
  $handler->display->display_options['fields']['field_mileage']['id'] = 'field_mileage';
  $handler->display->display_options['fields']['field_mileage']['table'] = 'field_data_field_mileage';
  $handler->display->display_options['fields']['field_mileage']['field'] = 'field_mileage';
  $handler->display->display_options['fields']['field_mileage']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_mileage']['label'] = '';
  $handler->display->display_options['fields']['field_mileage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mileage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mileage']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Airfare */
  $handler->display->display_options['fields']['field_airfare']['id'] = 'field_airfare';
  $handler->display->display_options['fields']['field_airfare']['table'] = 'field_data_field_airfare';
  $handler->display->display_options['fields']['field_airfare']['field'] = 'field_airfare';
  $handler->display->display_options['fields']['field_airfare']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_airfare']['label'] = '';
  $handler->display->display_options['fields']['field_airfare']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_airfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_airfare']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Rental Vehicle */
  $handler->display->display_options['fields']['field_rental_vehicle']['id'] = 'field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['table'] = 'field_data_field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['field'] = 'field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_rental_vehicle']['label'] = '';
  $handler->display->display_options['fields']['field_rental_vehicle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rental_vehicle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rental_vehicle']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Shuttle/Taxi */
  $handler->display->display_options['fields']['field_shuttle_taxi']['id'] = 'field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['table'] = 'field_data_field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['field'] = 'field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_shuttle_taxi']['label'] = '';
  $handler->display->display_options['fields']['field_shuttle_taxi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_shuttle_taxi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shuttle_taxi']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Parking/Tolls */
  $handler->display->display_options['fields']['field_parking']['id'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['table'] = 'field_data_field_parking';
  $handler->display->display_options['fields']['field_parking']['field'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_parking']['label'] = '';
  $handler->display->display_options['fields']['field_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parking']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Travel */
  $handler->display->display_options['fields']['field_total_travel_cost']['id'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['table'] = 'field_data_field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['field'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_total_travel_cost']['label'] = '';
  $handler->display->display_options['fields']['field_total_travel_cost']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_travel_cost']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
<tbody>
<tr>
  <td class="category">Prep Time</td>
  <td class="number">[field_prep_time]</td>
</tr>
<tr>
  <td class="category">Travel Time</td>
  <td class="number">[field_travel_time]</td>
</tr>
<tr>
  <td class="category">Delivery Time</td>
  <td class="number">[field_delivery_time]</td>
</tr>
<tr>
  <td class="total-time category">Total Time</td>
  <td class="number">[field_total_time]</td>
</tr>
<tr class="sum-row first">
  <td class="category">Labor Cost Sub-Total</td>
  <td class="number">[field_labor_cost_sub_total]</td>
</tr>
<tr>
  <td class="category">Per Diem</td>
  <td class="number">[field_meals]</td>
</tr>
<tr>
  <td class="category">Lodging</td>
  <td class="number">[field_lodging]</td>
</tr>
<tr>
  <td class="category">Mileage</td>
  <td class="number">[field_mileage]</td>
</tr>
<tr>
  <td class="category">Airfare</td>
  <td class="number">[field_airfare]</td>
</tr>
<tr>
  <td class="category">Rental Vehicle</td>
  <td class="number">[field_rental_vehicle]</td>
</tr>
<tr>
  <td class="category">Shuttle/Taxi</td>
  <td class="number">[field_shuttle_taxi]</td>
</tr>
<tr>
  <td class="category">Parking</td>
  <td class="number">[field_parking]</td>
</tr>
<tr class="sum-row">
  <td class="category">Travel Cost Sub-Total</td>
  <td class="number">[field_total_travel_cost]</td>
</tr>
</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'entityform-emails/individual-costing';

  /* Display: Summary Costing */
  $handler = $view->new_display('page', 'Summary Costing', 'entityform_emails_summary_costing');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'summary costing';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Summary Costs</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Primary CAPT team responsible for service';
  $handler->display->display_options['fields']['og_group_ref']['element_type'] = 'span';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Estimated Consultant Labor */
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['id'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['table'] = 'field_data_field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['field'] = 'field_estimated_consultant_labor';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_consultant_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Consultant Travel */
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['id'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['table'] = 'field_data_field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['field'] = 'field_estimated_consultant_trave';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_consultant_trave']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Labor */
  $handler->display->display_options['fields']['field_estimated_staff_labor']['id'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['table'] = 'field_data_field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['field'] = 'field_estimated_staff_labor';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_staff_labor']['element_type'] = 'span';
  /* Field: Content: Estimated Staff Travel */
  $handler->display->display_options['fields']['field_estimated_staff_travel']['id'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['table'] = 'field_data_field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['field'] = 'field_estimated_staff_travel';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_estimated_staff_travel']['element_type'] = 'span';
  /* Field: Content: Total Estimated Cost */
  $handler->display->display_options['fields']['field_total_estimated_cost']['id'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['table'] = 'field_data_field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['field'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_type'] = 'span';
  $handler->display->display_options['path'] = 'entityform-emails/summary-costing';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'tracker_display');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['id'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['field'] = 'reverse_field_tracker_node';
  /* Relationship: Content: Individual Costs (field_individual_costs) */
  $handler->display->display_options['relationships']['field_individual_costs_value']['id'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['table'] = 'field_data_field_individual_costs';
  $handler->display->display_options['relationships']['field_individual_costs_value']['field'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['delta'] = '-1';
  /* Relationship: Content: State, tribe, or jurisdiction liaison (field_stj_contact) */
  $handler->display->display_options['relationships']['field_stj_contact_value']['id'] = 'field_stj_contact_value';
  $handler->display->display_options['relationships']['field_stj_contact_value']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['relationships']['field_stj_contact_value']['field'] = 'field_stj_contact_value';
  $handler->display->display_options['relationships']['field_stj_contact_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_staff_member_target_id']['id'] = 'field_staff_member_target_id';
  $handler->display->display_options['relationships']['field_staff_member_target_id']['table'] = 'field_data_field_staff_member';
  $handler->display->display_options['relationships']['field_staff_member_target_id']['field'] = 'field_staff_member_target_id';
  $handler->display->display_options['relationships']['field_staff_member_target_id']['relationship'] = 'field_stj_contact_value';
  /* Relationship: Content: State project officer (field_state_project_officer) */
  $handler->display->display_options['relationships']['field_state_project_officer_value']['id'] = 'field_state_project_officer_value';
  $handler->display->display_options['relationships']['field_state_project_officer_value']['table'] = 'field_data_field_state_project_officer';
  $handler->display->display_options['relationships']['field_state_project_officer_value']['field'] = 'field_state_project_officer_value';
  $handler->display->display_options['relationships']['field_state_project_officer_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_project_officer_target_id']['id'] = 'field_project_officer_target_id';
  $handler->display->display_options['relationships']['field_project_officer_target_id']['table'] = 'field_data_field_project_officer';
  $handler->display->display_options['relationships']['field_project_officer_target_id']['field'] = 'field_project_officer_target_id';
  $handler->display->display_options['relationships']['field_project_officer_target_id']['relationship'] = 'field_state_project_officer_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['label'] = '';
  $handler->display->display_options['fields']['field_tracking_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tracking_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tracking_number']['element_label_colon'] = FALSE;
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'hs_taxonomy_term_reference_last_text_only';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['label'] = '';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['id'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['table'] = 'field_data_field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['field'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['label'] = '';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_grant_program_or_ini']['element_label_colon'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['id'] = 'field_other_grant_program_or_ini_1';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['table'] = 'field_data_field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['field'] = 'field_other_grant_program_or_ini';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['label'] = '';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['alter']['text'] = 'hide-other';
  $handler->display->display_options['fields']['field_other_grant_program_or_ini_1']['element_label_colon'] = FALSE;
  /* Field: Content: Cohort number */
  $handler->display->display_options['fields']['field_cohort_number']['id'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['table'] = 'field_data_field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['field'] = 'field_cohort_number';
  $handler->display->display_options['fields']['field_cohort_number']['label'] = '';
  $handler->display->display_options['fields']['field_cohort_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cohort_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cohort_number']['element_label_colon'] = FALSE;
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_user_name_display_1']['id'] = 'field_user_name_display_1';
  $handler->display->display_options['fields']['field_user_name_display_1']['table'] = 'field_data_field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display_1']['field'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display_1']['relationship'] = 'field_state_project_officer_value';
  $handler->display->display_options['fields']['field_user_name_display_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_name_display_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_name_display_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_user_name_display_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_name_display_1']['type'] = 'computed_field_computed_value';
  /* Field: Field collection item: Email */
  $handler->display->display_options['fields']['field_user_email_1']['id'] = 'field_user_email_1';
  $handler->display->display_options['fields']['field_user_email_1']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['fields']['field_user_email_1']['field'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email_1']['relationship'] = 'field_state_project_officer_value';
  $handler->display->display_options['fields']['field_user_email_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_email_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_email_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_email_1']['type'] = 'computed_field_computed_value';
  /* Field: Content: Deadline for project officer approval */
  $handler->display->display_options['fields']['field_po_approval_deadline']['id'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['table'] = 'field_data_field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['field'] = 'field_po_approval_deadline';
  $handler->display->display_options['fields']['field_po_approval_deadline']['label'] = '';
  $handler->display->display_options['fields']['field_po_approval_deadline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_po_approval_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_po_approval_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_po_approval_deadline']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: T/TA methods */
  $handler->display->display_options['fields']['field_servicetype']['id'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['field'] = 'field_servicetype';
  $handler->display->display_options['fields']['field_servicetype']['label'] = '';
  $handler->display->display_options['fields']['field_servicetype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_servicetype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_servicetype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_servicetype']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_servicetype']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_servicetype']['separator'] = '<br>';
  /* Field: Content: Travel requirements */
  $handler->display->display_options['fields']['field_travel_requirements']['id'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['field'] = 'field_travel_requirements';
  $handler->display->display_options['fields']['field_travel_requirements']['label'] = '';
  $handler->display->display_options['fields']['field_travel_requirements']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_travel_requirements']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_travel_requirements']['element_label_colon'] = FALSE;
  /* Field: Content: Description of need or problem */
  $handler->display->display_options['fields']['field_problem_description']['id'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['table'] = 'field_data_field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['field'] = 'field_problem_description';
  $handler->display->display_options['fields']['field_problem_description']['label'] = '';
  $handler->display->display_options['fields']['field_problem_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_problem_description']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_problem_description']['element_label_colon'] = FALSE;
  /* Field: Content: Description of service to be delivered */
  $handler->display->display_options['fields']['field_service_purpose']['id'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['table'] = 'field_data_field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['field'] = 'field_service_purpose';
  $handler->display->display_options['fields']['field_service_purpose']['label'] = '';
  $handler->display->display_options['fields']['field_service_purpose']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_purpose']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_purpose']['element_label_colon'] = FALSE;
  /* Field: Content: Audience for service */
  $handler->display->display_options['fields']['field_audiences_for_service']['id'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['table'] = 'field_data_field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['field'] = 'field_audiences_for_service';
  $handler->display->display_options['fields']['field_audiences_for_service']['label'] = '';
  $handler->display->display_options['fields']['field_audiences_for_service']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_audiences_for_service']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_audiences_for_service']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audiences_for_service']['delta_offset'] = '0';
  /* Field: Content: Audience description */
  $handler->display->display_options['fields']['field_target_audience']['id'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['field'] = 'field_target_audience';
  $handler->display->display_options['fields']['field_target_audience']['label'] = '';
  $handler->display->display_options['fields']['field_target_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_target_audience']['alter']['text'] = '[field_audiences_for_service]<br>
[field_target_audience]';
  $handler->display->display_options['fields']['field_target_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Hours for service delivery */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['label'] = '';
  $handler->display->display_options['fields']['field_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hours']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_hours']['element_label_colon'] = FALSE;
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['label'] = '';
  $handler->display->display_options['fields']['field_tentative_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tentative_dates']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_tentative_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: State, tribe, or jurisdiction liaison */
  $handler->display->display_options['fields']['field_stj_contact']['id'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['table'] = 'field_data_field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['field'] = 'field_stj_contact';
  $handler->display->display_options['fields']['field_stj_contact']['label'] = '';
  $handler->display->display_options['fields']['field_stj_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stj_contact']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_stj_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stj_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_stj_contact']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_stj_contact']['delta_offset'] = '0';
  /* Field: Content: Grantee involvement */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['label'] = '';
  $handler->display->display_options['fields']['field_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_role']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_role']['element_label_colon'] = FALSE;
  /* Field: Content: Special requirements */
  $handler->display->display_options['fields']['field_special_requirements']['id'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['table'] = 'field_data_field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['field'] = 'field_special_requirements';
  $handler->display->display_options['fields']['field_special_requirements']['label'] = '';
  $handler->display->display_options['fields']['field_special_requirements']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_special_requirements']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_special_requirements']['element_label_colon'] = FALSE;
  /* Field: Content: Date by which Core will receive draft materials */
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['id'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['table'] = 'field_data_field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['field'] = 'field_date_materials_will_be_sen';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['label'] = '';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_materials_will_be_sen']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date by which Core will approve materials */
  $handler->display->display_options['fields']['field_date_approved_materials']['id'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['table'] = 'field_data_field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['field'] = 'field_date_approved_materials';
  $handler->display->display_options['fields']['field_date_approved_materials']['label'] = '';
  $handler->display->display_options['fields']['field_date_approved_materials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_approved_materials']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_approved_materials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_approved_materials']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Indicate any materials or products you propose to develop */
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['id'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['table'] = 'field_data_field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['field'] = 'field_indicate_any_materials_or_';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['label'] = '';
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_indicate_any_materials_or_']['delta_offset'] = '0';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['id'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['table'] = 'field_data_field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['field'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['label'] = '';
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_indicate_any_materia']['element_label_colon'] = FALSE;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['id'] = 'field_other_indicate_any_materia_1';
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['table'] = 'field_data_field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['field'] = 'field_other_indicate_any_materia';
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['label'] = '';
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['alter']['text'] = 'hide-other';
  $handler->display->display_options['fields']['field_other_indicate_any_materia_1']['element_label_colon'] = FALSE;
  /* Field: Content: List any existing materials or products you plan to use */
  $handler->display->display_options['fields']['field_materialsproducts_existing']['id'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['table'] = 'field_data_field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['field'] = 'field_materialsproducts_existing';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['label'] = '';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_materialsproducts_existing']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_materialsproducts_existing']['element_label_colon'] = FALSE;
  /* Field: Content: List any materials or products you plan to adapt */
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['id'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['table'] = 'field_data_field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['field'] = 'field_materialsproducts_adapt';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['label'] = '';
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_materialsproducts_adapt']['element_label_colon'] = FALSE;
  /* Field: Content: List any new materials or products you plan to develop and why */
  $handler->display->display_options['fields']['field_materialsproducts_new']['id'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['table'] = 'field_data_field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['field'] = 'field_materialsproducts_new';
  $handler->display->display_options['fields']['field_materialsproducts_new']['label'] = '';
  $handler->display->display_options['fields']['field_materialsproducts_new']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_materialsproducts_new']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_materialsproducts_new']['element_label_colon'] = FALSE;
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_user_name_display']['id'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['table'] = 'field_data_field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['field'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['relationship'] = 'field_stj_contact_value';
  $handler->display->display_options['fields']['field_user_name_display']['label'] = '';
  $handler->display->display_options['fields']['field_user_name_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_name_display']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_user_name_display']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_name_display']['type'] = 'computed_field_computed_value';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_user_title_display']['id'] = 'field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['table'] = 'field_data_field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['field'] = 'field_user_title_display';
  $handler->display->display_options['fields']['field_user_title_display']['relationship'] = 'field_stj_contact_value';
  $handler->display->display_options['fields']['field_user_title_display']['label'] = '';
  $handler->display->display_options['fields']['field_user_title_display']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title_display']['element_label_colon'] = FALSE;
  /* Field: User: CAPT Team Membership */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['relationship'] = 'field_staff_member_target_id';
  $handler->display->display_options['fields']['og_user_node']['label'] = '';
  $handler->display->display_options['fields']['og_user_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_user_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Field: Field collection item: Email */
  $handler->display->display_options['fields']['field_user_email']['id'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['fields']['field_user_email']['field'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['relationship'] = 'field_stj_contact_value';
  $handler->display->display_options['fields']['field_user_email']['type'] = 'computed_field_computed_value';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="tracker-title">SAMHSA\'s CAPT Training and Technical Assistance Request Form</p>
<p class="tracker-number">CAPT Tracking ID: <span>[field_tracking_number]</span></p>
<table border="0" cellspacing="0" cellpadding="0">
    <tbody>
        <tr>
            <td colspan="2" valign="top" class="tracker-part">
                <p>
                    <strong>PART I </strong>
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2" valign="top">
                <p>
                    <em>1. Grantee Information</em>
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p class="tracker-red">
                    A. Grantee Name/Location
                </p>
            </td>
            <td>
                <p>
                    [field_location_of_grantee_state]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p class="tracker-red">
                    B. Grantee Program
                </p>
            </td>
            <td>
                <p>
                    <span class="[field_other_grant_program_or_ini_1]">[field_grant_program_or_initiativ]</span><br>[field_other_grant_program_or_ini]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    C. Cohort Number (if applicable):
                </p>
            </td>
            <td>
                <p>
                    [field_cohort_number]
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2" valign="top">
                <p>
                    <em>2. CSAP Approval Information</em>
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    A. CAPT, Contracting Officer\'s Representative (COR) Name and Email:
                </p>
            </td>
            <td>
                <p>
                    Carol McHale, CAPT, COR; <a href="mailto:Carol.McHale@samhsa.hhs.gov">Carol.McHale@samhsa.hhs.gov</a>;<br>
                    Richard Carmi, CAPT, Alternate COR; <a href="mailto:Richard.Carmi@samhsa.hhs.gov">Richard.Carmi@samhsa.hhs.gov</a>
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    B. State Project Officer Name and Email:
                </p>
            </td>
            <td>
                <p>
                    [field_user_name_display_1]<br>
                    [field_user_email_1]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p class="tracker-red">
                    C. Deadline for Final CAPT, COR and State Project Officer Approval
                </p>
            </td>
            <td>
                <p>
                    [field_po_approval_deadline]
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2" valign="top">
                <p>
                    <em>3. Description of T/TA Services Requested</em>
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p class="tracker-red">
                    A. Type of Service
                </p>
            </td>
            <td>
                <p>
                    [field_servicetype]<br>
                    [field_travel_requirements]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    B. Description of problem or need to be addressed through T/TA services
                </p>
            </td>
            <td>
                <p>
                    [field_problem_description]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    C. Purpose and description of T/TA services requested
                </p>
            </td>
            <td>
                <p>
                    [field_service_purpose]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    D. Who is the target audience? How many participants will attend?
                </p>
            </td>
            <td>
                <p>
                    [field_audiences_for_service]<br>[field_target_audience]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    E. Brief summary description of service <em>(200 characters max)</em>
                </p>
            </td>
            <td>
                <p>
                    
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    F. Number of T/TA service days/hours
                </p>
            </td>
            <td>
                <p>
                    [field_hours]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    G. Tentative dates of T/TA service
                </p>
            </td>
            <td>
                <p>
                    [field_tentative_dates]
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2" valign="top">
                <p>
                    <em>4. CAPT Regional Resource Team Representative Contact Information</em>
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    A. Name
                </p>
            </td>
            <td>
                <p>
                    [field_user_name_display]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    B. Title and CAPT Resource Team
                </p>
            </td>
            <td>
                <p>
                    [field_user_title_display]<br>
                    [og_user_node]
                </p>
            </td>
        </tr>
        <tr>
            <td width="200" valign="top">
                <p>
                    C. Email
                </p>
            </td>
            <td>
                <p>
                    [field_user_email]
                </p>
            </td>
        </tr>
    </tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<table border="0" cellspacing="0" cellpadding="0">
    <tbody>
        <tr>
            <td colspan="2" valign="top" class="tracker-part">
                <p>
                    <strong>PART II </strong>
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2">
                <p>
                    <strong>1. PRELIMINARY ESTIMATED COSTS</strong>
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2">
                <p>
                    A. Staff Name(s) and Time:
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2">
                <p>
                    B. Total Estimated Travel Expenses for Staff (airfare, mileage, hotel, meals): 
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2">
                <p>
                    C. Consultant Name(s) and Time: 
                </p>
            </td>
        </tr>
        <tr>
            <td colspan="2">
                <p>
                    D. Total Estimated Travel Expenses for Consultants (airfare, mileage, hotel, meals): 
                </p>
            </td>
        </tr>
    </tbody>
</table>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<table border="0" cellspacing="0" cellpadding="0">
    <tbody>
        <tr>
            <td colspan="2">
                <p>
                    <strong><em>Travel Costs</em></strong>
                </p>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    A. Lodging
                </p>
            </td>
            <td>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    B. Mileage
                </p>
            </td>
            <td>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    C. Meals
                </p>
            </td>
            <td>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    D. Air Fare/Rental Vehicle
                </p>
            </td>
            <td>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    E. Shuttle/Taxi
                </p>
            </td>
            <td>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    F. Parking
                </p>
            </td>
            <td>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    <strong>3. TOTAL ESTIMATED COST:</strong>
                </p>
            </td>
            <td>
            </td>
        </tr>
    </tbody>
</table>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<table border="0" cellspacing="0" cellpadding="0">
    <tbody>
        <tr>
            <td>
                <p>
                    4. If this request is for multiple grantees, include the names and type of staff receiving the T/TA:
                </p>
            </td>
            <td>
                <p>
                    
                </p>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    5. Role, involvement and contribution of state/grantee:
                </p>
            </td>
            <td>
                <p>
                    [field_role]
                </p>
            </td>
        </tr>
        <tr>
            <td>
                <p>
                    6. Special requirements for the delivery of the T/TA such as A/V equipment, supplies needed, etc:
                </p>
            </td>
            <td>
                <p>
                    [field_special_requirements]
                </p>
            </td>
        </tr>
        <tr>
            <td width="262">
                <p>
                    7. List materials or products you plan to use or develop:
                </p>
            </td>
            <td>
                <p>
                    <span class="[field_other_indicate_any_materia_1]">[field_indicate_any_materials_or_]</span><br>
                    [field_other_indicate_any_materia]
                </p>
            </td>
        </tr>
        <tr>
            <td valign="top">
                <p>
                    8. Date materials will be sent to the Core for review <em>(must be at least 8 work days before #9, below)</em>
                </p>
            </td>
            <td>
                <p>
                    [field_date_materials_will_be_sen]
                </p>
            </td>
        </tr>
        <tr>
            <td valign="top">
                <p>
                    9. Date approved materials to be sent back to RT
                </p>
            </td>
            <td>
                <p>
                    [field_date_approved_materials]
                </p>
            </td>
        </tr> 
    </tbody>
</table>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'tracker-form-email-output';
  $export['entityform_emails'] = $view;

  $view = new view();
  $view->name = 'expense_detail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expense Detail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expense Detail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Delivery Hours */
  $handler->display->display_options['fields']['field_hours_of_delivery']['id'] = 'field_hours_of_delivery';
  $handler->display->display_options['fields']['field_hours_of_delivery']['table'] = 'field_data_field_hours_of_delivery';
  $handler->display->display_options['fields']['field_hours_of_delivery']['field'] = 'field_hours_of_delivery';
  $handler->display->display_options['fields']['field_hours_of_delivery']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Labor */
  $handler->display->display_options['fields']['field_labor_expense']['id'] = 'field_labor_expense';
  $handler->display->display_options['fields']['field_labor_expense']['table'] = 'field_data_field_labor_expense';
  $handler->display->display_options['fields']['field_labor_expense']['field'] = 'field_labor_expense';
  /* Field: Field: Airfare */
  $handler->display->display_options['fields']['field_airfare']['id'] = 'field_airfare';
  $handler->display->display_options['fields']['field_airfare']['table'] = 'field_data_field_airfare';
  $handler->display->display_options['fields']['field_airfare']['field'] = 'field_airfare';
  $handler->display->display_options['fields']['field_airfare']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Lodging */
  $handler->display->display_options['fields']['field_lodging']['id'] = 'field_lodging';
  $handler->display->display_options['fields']['field_lodging']['table'] = 'field_data_field_lodging';
  $handler->display->display_options['fields']['field_lodging']['field'] = 'field_lodging';
  $handler->display->display_options['fields']['field_lodging']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Per Diem */
  $handler->display->display_options['fields']['field_meals']['id'] = 'field_meals';
  $handler->display->display_options['fields']['field_meals']['table'] = 'field_data_field_meals';
  $handler->display->display_options['fields']['field_meals']['field'] = 'field_meals';
  $handler->display->display_options['fields']['field_meals']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Shuttle/Taxi */
  $handler->display->display_options['fields']['field_shuttle_taxi']['id'] = 'field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['table'] = 'field_data_field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['field'] = 'field_shuttle_taxi';
  $handler->display->display_options['fields']['field_shuttle_taxi']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Mileage */
  $handler->display->display_options['fields']['field_mileage']['id'] = 'field_mileage';
  $handler->display->display_options['fields']['field_mileage']['table'] = 'field_data_field_mileage';
  $handler->display->display_options['fields']['field_mileage']['field'] = 'field_mileage';
  $handler->display->display_options['fields']['field_mileage']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Parking/Tolls */
  $handler->display->display_options['fields']['field_parking']['id'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['table'] = 'field_data_field_parking';
  $handler->display->display_options['fields']['field_parking']['field'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['label'] = 'Parking and Tolls';
  $handler->display->display_options['fields']['field_parking']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Rental Vehicle */
  $handler->display->display_options['fields']['field_rental_vehicle']['id'] = 'field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['table'] = 'field_data_field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['field'] = 'field_rental_vehicle';
  $handler->display->display_options['fields']['field_rental_vehicle']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Other Travel */
  $handler->display->display_options['fields']['field_other_travel']['id'] = 'field_other_travel';
  $handler->display->display_options['fields']['field_other_travel']['table'] = 'field_data_field_other_travel';
  $handler->display->display_options['fields']['field_other_travel']['field'] = 'field_other_travel';
  $handler->display->display_options['fields']['field_other_travel']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Travel */
  $handler->display->display_options['fields']['field_total_travel_cost']['id'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['table'] = 'field_data_field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['field'] = 'field_total_travel_cost';
  /* Field: Content: Total */
  $handler->display->display_options['fields']['field_total_expenses']['id'] = 'field_total_expenses';
  $handler->display->display_options['fields']['field_total_expenses']['table'] = 'field_data_field_total_expenses';
  $handler->display->display_options['fields']['field_total_expenses']['field'] = 'field_total_expenses';
  /* Field: Content: Scanned invoice or reimbursement form */
  $handler->display->display_options['fields']['field_invoice']['id'] = 'field_invoice';
  $handler->display->display_options['fields']['field_invoice']['table'] = 'field_data_field_invoice';
  $handler->display->display_options['fields']['field_invoice']['field'] = 'field_invoice';
  $handler->display->display_options['fields']['field_invoice']['label'] = '';
  $handler->display->display_options['fields']['field_invoice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_invoice']['click_sort_column'] = 'fid';
  /* Field: Content: Date processed */
  $handler->display->display_options['fields']['field_date_processed']['id'] = 'field_date_processed';
  $handler->display->display_options['fields']['field_date_processed']['table'] = 'field_data_field_date_processed';
  $handler->display->display_options['fields']['field_date_processed']['field'] = 'field_date_processed';
  $handler->display->display_options['fields']['field_date_processed']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date received */
  $handler->display->display_options['fields']['field_date_received']['id'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['fields']['field_date_received']['field'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: International travel */
  $handler->display->display_options['fields']['field_international_travel']['id'] = 'field_international_travel';
  $handler->display->display_options['fields']['field_international_travel']['table'] = 'field_data_field_international_travel';
  $handler->display->display_options['fields']['field_international_travel']['field'] = 'field_international_travel';
  /* Field: Field: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Expense: %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'if (isset($_GET[\'expense\'])) {
    return ($_GET[\'expense\']);
}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense' => 'expense',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['expense_detail'] = $view;

  $view = new view();
  $view->name = 'matt_s_vbo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Matt\'s VBO';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Matt\'s VBO';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::tta_custom_isp_state_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'pretty_short';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'matts-vbo';
  $export['matt_s_vbo'] = $view;

  $view = new view();
  $view->name = 'personnel_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Personnel Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personnel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_city' => 'field_city',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'name' => 'name',
    'field_user_title' => 'field_user_title',
    'field_type' => 'field_type',
    'field_service_level' => 'field_service_level',
    'field_hourly_rate' => 'field_hourly_rate',
    'field_state' => 'field_state',
    'og_user_node' => 'og_user_node',
    'rid' => 'rid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'field_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_level' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hourly_rate' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_user_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_last_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name], [field_first_name]';
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Profile: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['text'] = '[field_city], ';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Profile: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_user_title']['type'] = 'hs_taxonomy_term_reference_last_text_only';
  $handler->display->display_options['fields']['field_user_title']['delta_offset'] = '0';
  /* Field: Profile: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['relationship'] = 'profile';
  /* Field: Profile: Service Level */
  $handler->display->display_options['fields']['field_service_level']['id'] = 'field_service_level';
  $handler->display->display_options['fields']['field_service_level']['table'] = 'field_data_field_service_level';
  $handler->display->display_options['fields']['field_service_level']['field'] = 'field_service_level';
  $handler->display->display_options['fields']['field_service_level']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_service_level']['label'] = 'Level';
  /* Field: Profile: Hourly Rate */
  $handler->display->display_options['fields']['field_hourly_rate']['id'] = 'field_hourly_rate';
  $handler->display->display_options['fields']['field_hourly_rate']['table'] = 'field_data_field_hourly_rate';
  $handler->display->display_options['fields']['field_hourly_rate']['field'] = 'field_hourly_rate';
  $handler->display->display_options['fields']['field_hourly_rate']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_hourly_rate']['label'] = 'Rate';
  $handler->display->display_options['fields']['field_hourly_rate']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Profile: State or Territory */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_state']['label'] = 'City, State';
  $handler->display->display_options['fields']['field_state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_state']['alter']['text'] = '[field_city][field_state]';
  $handler->display->display_options['fields']['field_state']['type'] = 'hs_taxonomy_term_reference_last_text_only';
  /* Field: User: CAPT Team Membership */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['label'] = 'CAPT Team';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = 'Role';
  /* Sort criterion: Profile: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'profile';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: CAPT Team Membership (og_user_node) */
  $handler->display->display_options['filters']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator_id'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['label'] = 'Group membership (og_user_node)';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['operator'] = 'og_user_node_target_id_op';
  $handler->display->display_options['filters']['og_user_node_target_id']['expose']['identifier'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['og_user_node_target_id']['group_info']['label'] = 'CAPT Team';
  $handler->display->display_options['filters']['og_user_node_target_id']['group_info']['identifier'] = 'og_user_node_target_id';
  $handler->display->display_options['filters']['og_user_node_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Central Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Northeast Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Southeast Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Southwest Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'West Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'Epidemiology Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '92',
        'min' => '',
        'max' => '',
      ),
    ),
    7 => array(
      'title' => 'Evaluation Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '93',
        'min' => '',
        'max' => '',
      ),
    ),
    8 => array(
      'title' => 'T/TA Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '94',
        'min' => '',
        'max' => '',
      ),
    ),
    9 => array(
      'title' => 'Service to Science Project Team',
      'operator' => '=',
      'value' => array(
        'value' => '95',
        'min' => '',
        'max' => '',
      ),
    ),
    10 => array(
      'title' => 'Core',
      'operator' => '=',
      'value' => array(
        'value' => '107',
        'min' => '',
        'max' => '',
      ),
    ),
    11 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Profile: Service Level (field_service_level) */
  $handler->display->display_options['filters']['field_service_level_value']['id'] = 'field_service_level_value';
  $handler->display->display_options['filters']['field_service_level_value']['table'] = 'field_data_field_service_level';
  $handler->display->display_options['filters']['field_service_level_value']['field'] = 'field_service_level_value';
  $handler->display->display_options['filters']['field_service_level_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_service_level_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_level_value']['expose']['operator_id'] = 'field_service_level_value_op';
  $handler->display->display_options['filters']['field_service_level_value']['expose']['label'] = 'Service Level';
  $handler->display->display_options['filters']['field_service_level_value']['expose']['operator'] = 'field_service_level_value_op';
  $handler->display->display_options['filters']['field_service_level_value']['expose']['identifier'] = 'field_service_level_value';
  $handler->display->display_options['filters']['field_service_level_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  /* Filter criterion: Profile: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_value']['expose']['operator_id'] = 'field_type_value_op';
  $handler->display->display_options['filters']['field_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_type_value']['expose']['operator'] = 'field_type_value_op';
  $handler->display->display_options['filters']['field_type_value']['expose']['identifier'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Role';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['rid']['group_info']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['group_info']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['rid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'personnel';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Personnel';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['personnel_listing'] = $view;

  $view = new view();
  $view->name = 'related_labor_travel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Labor & Travel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Labor and Travel Invoices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_expenses_target_id']['id'] = 'field_related_expenses_target_id';
  $handler->display->display_options['relationships']['field_related_expenses_target_id']['table'] = 'field_data_field_related_expenses';
  $handler->display->display_options['relationships']['field_related_expenses_target_id']['field'] = 'field_related_expenses_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Number';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]?expense=[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date received */
  $handler->display->display_options['fields']['field_date_received']['id'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['fields']['field_date_received']['field'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['field_date_received']['label'] = 'Received';
  $handler->display->display_options['fields']['field_date_received']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_received']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date processed */
  $handler->display->display_options['fields']['field_date_processed']['id'] = 'field_date_processed';
  $handler->display->display_options['fields']['field_date_processed']['table'] = 'field_data_field_date_processed';
  $handler->display->display_options['fields']['field_date_processed']['field'] = 'field_date_processed';
  $handler->display->display_options['fields']['field_date_processed']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['field_date_processed']['label'] = 'Processed';
  $handler->display->display_options['fields']['field_date_processed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_processed']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Delivery Hours */
  $handler->display->display_options['fields']['field_hours_of_delivery']['id'] = 'field_hours_of_delivery';
  $handler->display->display_options['fields']['field_hours_of_delivery']['table'] = 'field_data_field_hours_of_delivery';
  $handler->display->display_options['fields']['field_hours_of_delivery']['field'] = 'field_hours_of_delivery';
  $handler->display->display_options['fields']['field_hours_of_delivery']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['field_hours_of_delivery']['label'] = 'Hours';
  $handler->display->display_options['fields']['field_hours_of_delivery']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Labor */
  $handler->display->display_options['fields']['field_labor_expense']['id'] = 'field_labor_expense';
  $handler->display->display_options['fields']['field_labor_expense']['table'] = 'field_data_field_labor_expense';
  $handler->display->display_options['fields']['field_labor_expense']['field'] = 'field_labor_expense';
  $handler->display->display_options['fields']['field_labor_expense']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['field_labor_expense']['element_label_colon'] = FALSE;
  /* Field: Field: Travel */
  $handler->display->display_options['fields']['field_total_travel_cost']['id'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['table'] = 'field_data_field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['field'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['field_total_travel_cost']['element_label_colon'] = FALSE;
  /* Field: Content: Total */
  $handler->display->display_options['fields']['field_total_expenses']['id'] = 'field_total_expenses';
  $handler->display->display_options['fields']['field_total_expenses']['table'] = 'field_data_field_total_expenses';
  $handler->display->display_options['fields']['field_total_expenses']['field'] = 'field_total_expenses';
  $handler->display->display_options['fields']['field_total_expenses']['relationship'] = 'field_related_expenses_target_id';
  /* Field: Content: Scanned invoice or reimbursement form */
  $handler->display->display_options['fields']['field_invoice']['id'] = 'field_invoice';
  $handler->display->display_options['fields']['field_invoice']['table'] = 'field_data_field_invoice';
  $handler->display->display_options['fields']['field_invoice']['field'] = 'field_invoice';
  $handler->display->display_options['fields']['field_invoice']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['fields']['field_invoice']['label'] = 'Documentation';
  $handler->display->display_options['fields']['field_invoice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_invoice']['alter']['text'] = 'Documentation';
  $handler->display->display_options['fields']['field_invoice']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_invoice']['alter']['path'] = '[field_invoice]';
  $handler->display->display_options['fields']['field_invoice']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_invoice']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_invoice']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_invoice']['type'] = 'file_url_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'vca' => 'vca',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_related_expenses_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'expense' => 'expense',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Related Expenses';
  $export['related_labor_travel'] = $view;

  $view = new view();
  $view->name = 'services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nothing' => 'nothing',
    'og_group_ref' => 'og_group_ref',
    'title' => 'title',
    'field_service_year' => 'field_service_year',
    'field_s_t_j' => 'field_s_t_j',
    'field_timeframe' => 'field_timeframe',
    'state' => 'state',
    'field_status' => 'field_status',
    'view' => 'view',
    'field_grant_program_or_initiativ' => 'field_grant_program_or_initiativ',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_t_j' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_timeframe' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grant_program_or_initiativ' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>&nbsp;</p>
<p>&nbsp;</p>
<div style="text-align:center;font-style:italic">No services found.</div>
<p>&nbsp;</p>
<p>&nbsp;</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_class'] = '[state] [field_status]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Team';
  $handler->display->display_options['fields']['og_group_ref']['alter']['max_length'] = '13';
  $handler->display->display_options['fields']['og_group_ref']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['empty'] = 'Core';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tagline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Year';
  $handler->display->display_options['fields']['field_service_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_s_t_j']['id'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['field'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['label'] = 'STJs';
  $handler->display->display_options['fields']['field_s_t_j']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_t_j']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_t_j']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['label'] = 'Grant';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Quarters for service delivery */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['label'] = 'Quarter';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow';
  $handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Trackers';
  $handler->display->display_options['fields']['view']['view'] = 'services';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: Services List */
  $handler = $view->new_display('page', 'Services List', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Service year (field_service_year) */
  $handler->display->display_options['filters']['field_service_year_value']['id'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['filters']['field_service_year_value']['field'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_service_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_year_value']['expose']['operator_id'] = 'field_service_year_value_op';
  $handler->display->display_options['filters']['field_service_year_value']['expose']['label'] = 'Service Year (field_service_year)';
  $handler->display->display_options['filters']['field_service_year_value']['expose']['operator'] = 'field_service_year_value_op';
  $handler->display->display_options['filters']['field_service_year_value']['expose']['identifier'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_service_year_value']['group_info']['label'] = 'Year';
  $handler->display->display_options['filters']['field_service_year_value']['group_info']['identifier'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '2013',
      'operator' => '=',
      'value' => '2013',
    ),
    2 => array(
      'title' => '2012',
      'operator' => '=',
      'value' => '2012',
    ),
    3 => array(
      'title' => '2011',
      'operator' => '=',
      'value' => '2011',
    ),
    4 => array(
      'title' => '2010',
      'operator' => '=',
      'value' => '2010',
    ),
  );
  /* Filter criterion: OG membership: Group ID */
  $handler->display->display_options['filters']['gid']['id'] = 'gid';
  $handler->display->display_options['filters']['gid']['table'] = 'og_membership';
  $handler->display->display_options['filters']['gid']['field'] = 'gid';
  $handler->display->display_options['filters']['gid']['group'] = 1;
  $handler->display->display_options['filters']['gid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['gid']['expose']['operator_id'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['label'] = 'Group ID';
  $handler->display->display_options['filters']['gid']['expose']['operator'] = 'gid_op';
  $handler->display->display_options['filters']['gid']['expose']['identifier'] = 'gid';
  $handler->display->display_options['filters']['gid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['gid']['group_info']['label'] = 'Primary CAPT team';
  $handler->display->display_options['filters']['gid']['group_info']['identifier'] = 'gid';
  $handler->display->display_options['filters']['gid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Central Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Northeast Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Southeast Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Southwest Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'West Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'Epidemiology Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '92',
        'min' => '',
        'max' => '',
      ),
    ),
    7 => array(
      'title' => 'Evaluation Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '93',
        'min' => '',
        'max' => '',
      ),
    ),
    8 => array(
      'title' => 'T/TA Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '94',
        'min' => '',
        'max' => '',
      ),
    ),
    9 => array(
      'title' => 'Service to Science Project Team',
      'operator' => '=',
      'value' => array(
        'value' => '95',
        'min' => '',
        'max' => '',
      ),
    ),
    10 => array(
      'title' => 'Core',
      'operator' => '=',
      'value' => array(
        'value' => '107',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: States, tribes, or jurisdictions (field_s_t_j) */
  $handler->display->display_options['filters']['field_s_t_j_tid']['id'] = 'field_s_t_j_tid';
  $handler->display->display_options['filters']['field_s_t_j_tid']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['filters']['field_s_t_j_tid']['field'] = 'field_s_t_j_tid';
  $handler->display->display_options['filters']['field_s_t_j_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_s_t_j_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_t_j_tid']['expose']['operator_id'] = 'field_s_t_j_tid_op';
  $handler->display->display_options['filters']['field_s_t_j_tid']['expose']['label'] = 'State, tribe, or jurisdiction';
  $handler->display->display_options['filters']['field_s_t_j_tid']['expose']['operator'] = 'field_s_t_j_tid_op';
  $handler->display->display_options['filters']['field_s_t_j_tid']['expose']['identifier'] = 'field_s_t_j_tid';
  $handler->display->display_options['filters']['field_s_t_j_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_s_t_j_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_s_t_j_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_t_j_tid']['vocabulary'] = 'geography';
  $handler->display->display_options['filters']['field_s_t_j_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Grant program or initiative (field_grant_program_or_initiativ) */
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['id'] = 'field_grant_program_or_initiativ_value';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['field'] = 'field_grant_program_or_initiativ_value';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['value'] = array(
    'SPF SIG' => 'SPF SIG',
    'SPF TIG' => 'SPF TIG',
    'PFS I' => 'PFS I',
    'PFS II' => 'PFS II',
    'SEW/SEOW' => 'SEW/SEOW',
    'SAPT Block Grant' => 'SAPT Block Grant',
    'Service to Science' => 'Service to Science',
  );
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['group'] = 1;
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['operator_id'] = 'field_grant_program_or_initiativ_value_op';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['label'] = 'Grant or initiative';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['operator'] = 'field_grant_program_or_initiativ_value_op';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['identifier'] = 'field_grant_program_or_initiativ_value';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: HHS region (field_region_hhs) */
  $handler->display->display_options['filters']['field_region_hhs_value']['id'] = 'field_region_hhs_value';
  $handler->display->display_options['filters']['field_region_hhs_value']['table'] = 'field_data_field_region_hhs';
  $handler->display->display_options['filters']['field_region_hhs_value']['field'] = 'field_region_hhs_value';
  $handler->display->display_options['filters']['field_region_hhs_value']['group'] = 1;
  $handler->display->display_options['filters']['field_region_hhs_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_hhs_value']['expose']['operator_id'] = 'field_region_hhs_value_op';
  $handler->display->display_options['filters']['field_region_hhs_value']['expose']['label'] = 'HHS region (field_region_hhs)';
  $handler->display->display_options['filters']['field_region_hhs_value']['expose']['operator'] = 'field_region_hhs_value_op';
  $handler->display->display_options['filters']['field_region_hhs_value']['expose']['identifier'] = 'field_region_hhs_value';
  $handler->display->display_options['filters']['field_region_hhs_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_region_hhs_value']['group_info']['label'] = 'HHS region';
  $handler->display->display_options['filters']['field_region_hhs_value']['group_info']['identifier'] = 'field_region_hhs_value';
  $handler->display->display_options['filters']['field_region_hhs_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1',
      'operator' => '=',
      'value' => '1',
    ),
    2 => array(
      'title' => '2',
      'operator' => '=',
      'value' => '2',
    ),
    3 => array(
      'title' => '3',
      'operator' => '=',
      'value' => '3',
    ),
    4 => array(
      'title' => '4',
      'operator' => '=',
      'value' => '4',
    ),
    5 => array(
      'title' => '5',
      'operator' => '=',
      'value' => '5',
    ),
    6 => array(
      'title' => '6',
      'operator' => '=',
      'value' => '6',
    ),
    7 => array(
      'title' => '7',
      'operator' => '=',
      'value' => '7',
    ),
    8 => array(
      'title' => '8',
      'operator' => '=',
      'value' => '8',
    ),
    9 => array(
      'title' => '9',
      'operator' => '=',
      'value' => '9',
    ),
    10 => array(
      'title' => '10',
      'operator' => '=',
      'value' => '10',
    ),
  );
  /* Filter criterion: Content: Quarters for service delivery (field_timeframe) */
  $handler->display->display_options['filters']['field_timeframe_value']['id'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['filters']['field_timeframe_value']['field'] = 'field_timeframe_value';
  $handler->display->display_options['filters']['field_timeframe_value']['group'] = 1;
  $handler->display->display_options['filters']['field_timeframe_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['operator_id'] = 'field_timeframe_value_op';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['label'] = 'Timeframe';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['operator'] = 'field_timeframe_value_op';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['identifier'] = 'quarter';
  $handler->display->display_options['filters']['field_timeframe_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: T/TA methods (field_tta_method) */
  $handler->display->display_options['filters']['field_tta_method_tid']['id'] = 'field_tta_method_tid';
  $handler->display->display_options['filters']['field_tta_method_tid']['table'] = 'field_data_field_tta_method';
  $handler->display->display_options['filters']['field_tta_method_tid']['field'] = 'field_tta_method_tid';
  $handler->display->display_options['filters']['field_tta_method_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tta_method_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tta_method_tid']['expose']['operator_id'] = 'field_tta_method_tid_op';
  $handler->display->display_options['filters']['field_tta_method_tid']['expose']['label'] = 'T/TA methods';
  $handler->display->display_options['filters']['field_tta_method_tid']['expose']['operator'] = 'field_tta_method_tid_op';
  $handler->display->display_options['filters']['field_tta_method_tid']['expose']['identifier'] = 'field_tta_method_tid';
  $handler->display->display_options['filters']['field_tta_method_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_tta_method_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tta_method_tid']['vocabulary'] = 't_ta_methods';
  $handler->display->display_options['filters']['field_tta_method_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Strategic Prevention Framework focus areas (field_focus_areas) */
  $handler->display->display_options['filters']['field_focus_areas_tid']['id'] = 'field_focus_areas_tid';
  $handler->display->display_options['filters']['field_focus_areas_tid']['table'] = 'field_data_field_focus_areas';
  $handler->display->display_options['filters']['field_focus_areas_tid']['field'] = 'field_focus_areas_tid';
  $handler->display->display_options['filters']['field_focus_areas_tid']['value'] = array(
    131 => '131',
    132 => '132',
    133 => '133',
    134 => '134',
    135 => '135',
  );
  $handler->display->display_options['filters']['field_focus_areas_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_focus_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_focus_areas_tid']['expose']['operator_id'] = 'field_focus_areas_tid_op';
  $handler->display->display_options['filters']['field_focus_areas_tid']['expose']['label'] = 'SPF focus area';
  $handler->display->display_options['filters']['field_focus_areas_tid']['expose']['operator'] = 'field_focus_areas_tid_op';
  $handler->display->display_options['filters']['field_focus_areas_tid']['expose']['identifier'] = 'field_focus_areas_tid';
  $handler->display->display_options['filters']['field_focus_areas_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_focus_areas_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_focus_areas_tid']['group_info']['label'] = 'SPF step';
  $handler->display->display_options['filters']['field_focus_areas_tid']['group_info']['identifier'] = 'field_focus_areas_tid';
  $handler->display->display_options['filters']['field_focus_areas_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Assessment',
      'operator' => 'or',
      'value' => array(
        87 => '87',
        88 => '88',
        89 => '89',
        90 => '90',
        91 => '91',
        92 => '92',
        93 => '93',
        94 => '94',
        95 => '95',
      ),
    ),
    2 => array(
      'title' => 'Building Capacity',
      'operator' => 'or',
      'value' => array(
        138 => '138',
        142 => '142',
        136 => '136',
        137 => '137',
        139 => '139',
        141 => '141',
        140 => '140',
        144 => '144',
        143 => '143',
      ),
    ),
    3 => array(
      'title' => 'Strategic Planning',
      'operator' => 'or',
      'value' => array(
        151 => '151',
        145 => '145',
        146 => '146',
        150 => '150',
        152 => '152',
        149 => '149',
        147 => '147',
        148 => '148',
      ),
    ),
    4 => array(
      'title' => 'Implementation',
      'operator' => 'or',
      'value' => array(
        153 => '153',
        156 => '156',
        157 => '157',
        155 => '155',
        159 => '159',
        158 => '158',
        154 => '154',
      ),
    ),
    5 => array(
      'title' => 'Evaluation',
      'operator' => 'or',
      'value' => array(
        168 => '168',
        161 => '161',
        164 => '164',
        163 => '163',
        167 => '167',
        165 => '165',
        162 => '162',
        169 => '169',
        160 => '160',
        166 => '166',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_focus_areas_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_focus_areas_tid']['vocabulary'] = 'focus_areas';
  $handler->display->display_options['filters']['field_focus_areas_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Primary audience for service (field_primary_audience_for_servi) */
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['id'] = 'field_primary_audience_for_servi_value';
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['table'] = 'field_data_field_primary_audience_for_servi';
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['field'] = 'field_primary_audience_for_servi_value';
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['value'] = array(
    'State' => 'State',
    'Tribe' => 'Tribe',
    'Jurisdiction' => 'Jurisdiction',
    'Region' => 'Region',
    'Community' => 'Community',
    'Service to Science Program' => 'Service to Science Program',
    'Service to Science Subcontractors' => 'Service to Science Subcontractors',
    'Air Force Reserve Command' => 'Air Force Reserve Command',
  );
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['group'] = 1;
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['expose']['operator_id'] = 'field_primary_audience_for_servi_value_op';
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['expose']['label'] = 'Primary audience';
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['expose']['operator'] = 'field_primary_audience_for_servi_value_op';
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['expose']['identifier'] = 'field_primary_audience_for_servi_value';
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_primary_audience_for_servi_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Sub-audience for service (field_sub_audience_for_service) */
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['id'] = 'field_sub_audience_for_service_value';
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['table'] = 'field_data_field_sub_audience_for_service';
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['field'] = 'field_sub_audience_for_service_value';
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['value'] = array(
    'Local Sub-Recipient (e.g. Community Coalition)' => 'Local Sub-Recipient (e.g. Community Coalition)',
    'T/TA Providers' => 'T/TA Providers',
    'State Staff Members' => 'State Staff Members',
    'Prevention Planning Entity (e.g. SPF Advisory Council)' => 'Prevention Planning Entity (e.g. SPF Advisory Council)',
    'SEW/SEOW' => 'SEW/SEOW',
    'Evidence-Based Workgroup' => 'Evidence-Based Workgroup',
  );
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['expose']['operator_id'] = 'field_sub_audience_for_service_value_op';
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['expose']['label'] = 'Sub-audience';
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['expose']['operator'] = 'field_sub_audience_for_service_value_op';
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['expose']['identifier'] = 'field_sub_audience_for_service_value';
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_sub_audience_for_service_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    16 => '16',
    15 => '15',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['sid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['sid']['group_info']['label'] = 'Workflow state';
  $handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'New',
      'operator' => 'in',
      'value' => array(
        16 => '16',
      ),
    ),
    2 => array(
      'title' => 'Ready for RT Coordinator Review',
      'operator' => 'in',
      'value' => array(
        15 => '15',
      ),
    ),
    3 => array(
      'title' => 'Revisions Needed by T/TA Specialist',
      'operator' => 'in',
      'value' => array(
        2 => '2',
      ),
    ),
    4 => array(
      'title' => 'Revisions Needed by RT Coordinator',
      'operator' => 'in',
      'value' => array(
        18 => '18',
      ),
    ),
    5 => array(
      'title' => 'Ready for Core Preliminary Review',
      'operator' => 'in',
      'value' => array(
        3 => '3',
      ),
    ),
    6 => array(
      'title' => 'Ready for Service Plan Review',
      'operator' => 'in',
      'value' => array(
        4 => '4',
      ),
    ),
    7 => array(
      'title' => 'Ready for Tracker',
      'operator' => 'in',
      'value' => array(
        6 => '6',
      ),
    ),
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    222 => '222',
    223 => '223',
    224 => '224',
    225 => '225',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'active_status';
  $handler->display->display_options['path'] = 'services';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Related Trackers */
  $handler = $view->new_display('block', 'Related Trackers', 'related_tracker');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['link_url'] = 'node/!1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_tracker_status' => 'field_tracker_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tracker_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p style="font-style: italic; text-align: center">No related trackers</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_service_node']['id'] = 'reverse_field_service_node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['field'] = 'reverse_field_service_node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_class'] = '[state] [field_status]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_tracking_number']['label'] = '#';
  $handler->display->display_options['fields']['field_tracking_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tracking_number']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_tracking_number']['empty'] = '[title]';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_tentative_dates']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['state']['label'] = 'State';
  $handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'service' => 'service',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Related Trackers';

  /* Display: Simple Trackers List */
  $handler = $view->new_display('block', 'Simple Trackers List', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['link_url'] = 'node/!1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_service_node']['id'] = 'reverse_field_service_node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['field'] = 'reverse_field_service_node';
  $handler->display->display_options['relationships']['reverse_field_service_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['relationship'] = 'reverse_field_service_node';
  $handler->display->display_options['fields']['field_tracking_number']['label'] = '';
  $handler->display->display_options['fields']['field_tracking_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tracking_number']['alter']['path'] = 'node/!1';
  $handler->display->display_options['fields']['field_tracking_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'service' => 'service',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'Related Trackers';

  /* Display: Service Planning */
  $handler = $view->new_display('page', 'Service Planning', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Service Planning';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_emails_on_services_workflow_change' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_emails_on_trackers_workflow_change' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::tta_custom_isp_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_class'] = '[state] [field_status]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Team';
  $handler->display->display_options['fields']['og_group_ref']['alter']['max_length'] = '13';
  $handler->display->display_options['fields']['og_group_ref']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tagline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Year';
  $handler->display->display_options['fields']['field_service_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_s_t_j']['id'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['table'] = 'field_data_field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['field'] = 'field_s_t_j';
  $handler->display->display_options['fields']['field_s_t_j']['label'] = 'STJs';
  $handler->display->display_options['fields']['field_s_t_j']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_t_j']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_t_j']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['label'] = 'Grant';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Quarters for service delivery */
  $handler->display->display_options['fields']['field_timeframe']['id'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['table'] = 'field_data_field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['field'] = 'field_timeframe';
  $handler->display->display_options['fields']['field_timeframe']['label'] = 'Quarter';
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow';
  $handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Trackers';
  $handler->display->display_options['fields']['view']['view'] = 'services';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    16 => '16',
    15 => '15',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['sid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['sid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['sid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Initial Service Planning',
      'operator' => 'in',
      'value' => array(
        3 => '3',
      ),
    ),
    2 => array(
      'title' => 'Quarterly Planning',
      'operator' => 'in',
      'value' => array(
        3 => '3',
        6 => '6',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'planning';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Planning';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['services'] = $view;

  $view = new view();
  $view->name = 'tracker_forms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tracker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tracker';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_total_estimated_cost',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'og_group_ref' => 'og_group_ref',
    'path' => 'path',
    'field_total_estimated_cost' => 'field_total_estimated_cost',
    'field_user_name_display' => 'field_user_name_display',
    'field_labor_cost_sub_total' => 'field_labor_cost_sub_total',
    'field_total_travel_cost' => 'field_total_travel_cost',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'og_group_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_estimated_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_name_display' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_labor_cost_sub_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_travel_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_tracker_target_id']['id'] = 'field_tracker_target_id';
  $handler->display->display_options['relationships']['field_tracker_target_id']['table'] = 'field_data_field_tracker';
  $handler->display->display_options['relationships']['field_tracker_target_id']['field'] = 'field_tracker_target_id';
  $handler->display->display_options['relationships']['field_tracker_target_id']['required'] = TRUE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['og_group_ref']['label'] = '';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['max_length'] = '13';
  $handler->display->display_options['fields']['og_group_ref']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['empty'] = 'Costing (no group)';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Total Estimated Cost */
  $handler->display->display_options['fields']['field_total_estimated_cost']['id'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['table'] = 'field_data_field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['field'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_total_estimated_cost']['label'] = '';
  $handler->display->display_options['fields']['field_total_estimated_cost']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_estimated_cost']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_total_estimated_cost']['alter']['text'] = '<strong><a href="[path]">[og_group_ref]</a>:&nbsp;&nbsp; [field_total_estimated_cost]</strong>';
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_label_colon'] = FALSE;
  /* Field: Field: Name */
  $handler->display->display_options['fields']['field_user_name_display']['id'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['table'] = 'field_data_field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['field'] = 'field_user_name_display';
  $handler->display->display_options['fields']['field_user_name_display']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_user_name_display']['label'] = 'Person';
  $handler->display->display_options['fields']['field_user_name_display']['type'] = 'computed_field_unsanitized';
  /* Field: Field collection item: Labor Cost Sub-Total */
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['id'] = 'field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['table'] = 'field_data_field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['field'] = 'field_labor_cost_sub_total';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['relationship'] = 'field_individual_costs_value';
  $handler->display->display_options['fields']['field_labor_cost_sub_total']['label'] = 'Labor';
  /* Field: Field: Travel */
  $handler->display->display_options['fields']['field_total_travel_cost']['id'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['table'] = 'field_data_field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['field'] = 'field_total_travel_cost';
  $handler->display->display_options['fields']['field_total_travel_cost']['relationship'] = 'field_individual_costs_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'tracker' => 'tracker',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'costs' => 'costs',
  );

  /* Display: Related Costs */
  $handler = $view->new_display('block', 'Related Costs', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Cost Information';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['id'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['field'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['required'] = TRUE;
  /* Relationship: Content: Individual Costs (field_individual_costs) */
  $handler->display->display_options['relationships']['field_individual_costs_value']['id'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['table'] = 'field_data_field_individual_costs';
  $handler->display->display_options['relationships']['field_individual_costs_value']['field'] = 'field_individual_costs_value';
  $handler->display->display_options['relationships']['field_individual_costs_value']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['field_individual_costs_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'tracker' => 'tracker',
  );
  $handler->display->display_options['block_description'] = 'Related Costs';
  $export['tracker_forms'] = $view;

  $view = new view();
  $view->name = 'trackers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Trackers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trackers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nothing' => 'nothing',
    'og_group_ref' => 'og_group_ref',
    'title' => 'title',
    'field_service_year' => 'field_service_year',
    'field_location_of_grantee_state' => 'field_location_of_grantee_state',
    'field_grant_program_or_initiativ' => 'field_grant_program_or_initiativ',
    'field_tentative_dates' => 'field_tentative_dates',
    'state' => 'state',
    'field_status' => 'field_status',
    'view' => 'view',
  );
  $handler->display->display_options['style_options']['default'] = 'field_tentative_dates';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_of_grantee_state' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grant_program_or_initiativ' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tentative_dates' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>&nbsp;</p>
<p>&nbsp;</p>
<div style="text-align:center;font-style:italic">No services found.</div>
<p>&nbsp;</p>
<p>&nbsp;</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_class'] = '[state] [field_status]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Primary CAPT team */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Team';
  $handler->display->display_options['fields']['og_group_ref']['alter']['max_length'] = '13';
  $handler->display->display_options['fields']['og_group_ref']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Field: Content: Tracking number */
  $handler->display->display_options['fields']['field_tracking_number']['id'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['table'] = 'field_data_field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['field'] = 'field_tracking_number';
  $handler->display->display_options['fields']['field_tracking_number']['label'] = 'Number';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tagline';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Service year */
  $handler->display->display_options['fields']['field_service_year']['id'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['fields']['field_service_year']['field'] = 'field_service_year';
  $handler->display->display_options['fields']['field_service_year']['label'] = 'Year';
  $handler->display->display_options['fields']['field_service_year']['type'] = 'field_hidden_text_plain';
  /* Field: Content: States, tribes, or jurisdictions */
  $handler->display->display_options['fields']['field_location_of_grantee_state']['id'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['field'] = 'field_location_of_grantee_state';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['label'] = 'STJs';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_of_grantee_state']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_location_of_grantee_state']['delta_offset'] = '0';
  /* Field: Content: Grant program or initiative */
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['id'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['field'] = 'field_grant_program_or_initiativ';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['label'] = 'Grant';
  $handler->display->display_options['fields']['field_grant_program_or_initiativ']['delta_offset'] = '0';
  /* Field: Content: Tentative dates for service */
  $handler->display->display_options['fields']['field_tentative_dates']['id'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['field'] = 'field_tentative_dates';
  $handler->display->display_options['fields']['field_tentative_dates']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_tentative_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tentative_dates']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Workflow: Current state name */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workflow_states';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['label'] = 'Workflow';
  $handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Costs';
  $handler->display->display_options['fields']['view']['view'] = 'trackers';
  $handler->display->display_options['fields']['view']['display'] = 'page_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tracker' => 'tracker',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Service year (field_service_year) */
  $handler->display->display_options['filters']['field_service_year_value']['id'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['table'] = 'field_data_field_service_year';
  $handler->display->display_options['filters']['field_service_year_value']['field'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['group'] = 1;
  $handler->display->display_options['filters']['field_service_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_year_value']['expose']['operator_id'] = 'field_service_year_value_op';
  $handler->display->display_options['filters']['field_service_year_value']['expose']['label'] = 'Service Year (field_service_year)';
  $handler->display->display_options['filters']['field_service_year_value']['expose']['operator'] = 'field_service_year_value_op';
  $handler->display->display_options['filters']['field_service_year_value']['expose']['identifier'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_service_year_value']['group_info']['label'] = 'Year';
  $handler->display->display_options['filters']['field_service_year_value']['group_info']['identifier'] = 'field_service_year_value';
  $handler->display->display_options['filters']['field_service_year_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '2013',
      'operator' => '=',
      'value' => '2013',
    ),
    2 => array(
      'title' => '2012',
      'operator' => '=',
      'value' => '2012',
    ),
    3 => array(
      'title' => '2011',
      'operator' => '=',
      'value' => '2011',
    ),
    4 => array(
      'title' => '2010',
      'operator' => '=',
      'value' => '2010',
    ),
  );
  /* Filter criterion: Content: Primary CAPT team (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Primary resource, functional, or project team responsible for service (og_group_ref)';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['group_info']['label'] = 'Primary CAPT team';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group_info']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Central Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Northeast Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Southeast Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Southwest Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    5 => array(
      'title' => 'West Resource Team',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
    6 => array(
      'title' => 'Epidemiology Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '92',
        'min' => '',
        'max' => '',
      ),
    ),
    7 => array(
      'title' => 'Evaluation Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '93',
        'min' => '',
        'max' => '',
      ),
    ),
    8 => array(
      'title' => 'T/TA Functional Group',
      'operator' => '=',
      'value' => array(
        'value' => '94',
        'min' => '',
        'max' => '',
      ),
    ),
    9 => array(
      'title' => 'Service to Science Project Team',
      'operator' => '=',
      'value' => array(
        'value' => '95',
        'min' => '',
        'max' => '',
      ),
    ),
    10 => array(
      'title' => 'Core',
      'operator' => '=',
      'value' => array(
        'value' => '107',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Content: States, tribes, or jurisdictions (field_location_of_grantee_state) */
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['id'] = 'field_location_of_grantee_state_tid';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['table'] = 'field_data_field_location_of_grantee_state';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['field'] = 'field_location_of_grantee_state_tid';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['expose']['operator_id'] = 'field_location_of_grantee_state_tid_op';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['expose']['label'] = 'State, tribe, or jurisdiction';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['expose']['operator'] = 'field_location_of_grantee_state_tid_op';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['expose']['identifier'] = 'field_location_of_grantee_state_tid';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['vocabulary'] = 'geography';
  $handler->display->display_options['filters']['field_location_of_grantee_state_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Grant program or initiative (field_grant_program_or_initiativ) */
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['id'] = 'field_grant_program_or_initiativ_value';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['table'] = 'field_data_field_grant_program_or_initiativ';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['field'] = 'field_grant_program_or_initiativ_value';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['group'] = 1;
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['operator_id'] = 'field_grant_program_or_initiativ_value_op';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['label'] = 'Grant or initiative';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['operator'] = 'field_grant_program_or_initiativ_value_op';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['identifier'] = 'field_grant_program_or_initiativ_value';
  $handler->display->display_options['filters']['field_grant_program_or_initiativ_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Cohort number (field_cohort_number) */
  $handler->display->display_options['filters']['field_cohort_number_value']['id'] = 'field_cohort_number_value';
  $handler->display->display_options['filters']['field_cohort_number_value']['table'] = 'field_data_field_cohort_number';
  $handler->display->display_options['filters']['field_cohort_number_value']['field'] = 'field_cohort_number_value';
  $handler->display->display_options['filters']['field_cohort_number_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cohort_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cohort_number_value']['expose']['operator_id'] = 'field_cohort_number_value_op';
  $handler->display->display_options['filters']['field_cohort_number_value']['expose']['label'] = 'Cohort number (field_cohort_number)';
  $handler->display->display_options['filters']['field_cohort_number_value']['expose']['operator'] = 'field_cohort_number_value_op';
  $handler->display->display_options['filters']['field_cohort_number_value']['expose']['identifier'] = 'field_cohort_number_value';
  $handler->display->display_options['filters']['field_cohort_number_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_cohort_number_value']['group_info']['label'] = 'Cohort';
  $handler->display->display_options['filters']['field_cohort_number_value']['group_info']['identifier'] = 'field_cohort_number_value';
  $handler->display->display_options['filters']['field_cohort_number_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '1',
      'operator' => '=',
      'value' => '1',
    ),
    2 => array(
      'title' => '2',
      'operator' => '=',
      'value' => '2',
    ),
    3 => array(
      'title' => '3',
      'operator' => '=',
      'value' => '3',
    ),
    4 => array(
      'title' => '4',
      'operator' => '=',
      'value' => '4',
    ),
    5 => array(
      'title' => '5',
      'operator' => '=',
      'value' => '5',
    ),
    6 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
    7 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  /* Filter criterion: Content: Tentative dates for service -  start date (field_tentative_dates) */
  $handler->display->display_options['filters']['field_tentative_dates_value']['id'] = 'field_tentative_dates_value';
  $handler->display->display_options['filters']['field_tentative_dates_value']['table'] = 'field_data_field_tentative_dates';
  $handler->display->display_options['filters']['field_tentative_dates_value']['field'] = 'field_tentative_dates_value';
  $handler->display->display_options['filters']['field_tentative_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tentative_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tentative_dates_value']['expose']['operator_id'] = 'field_tentative_dates_value_op';
  $handler->display->display_options['filters']['field_tentative_dates_value']['expose']['label'] = 'Tentative start date';
  $handler->display->display_options['filters']['field_tentative_dates_value']['expose']['operator'] = 'field_tentative_dates_value_op';
  $handler->display->display_options['filters']['field_tentative_dates_value']['expose']['identifier'] = 'field_tentative_dates_value';
  $handler->display->display_options['filters']['field_tentative_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_tentative_dates_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_tentative_dates_value']['year_range'] = '-1:+1';
  /* Filter criterion: Content: T/TA methods (field_servicetype) */
  $handler->display->display_options['filters']['field_servicetype_tid']['id'] = 'field_servicetype_tid';
  $handler->display->display_options['filters']['field_servicetype_tid']['table'] = 'field_data_field_servicetype';
  $handler->display->display_options['filters']['field_servicetype_tid']['field'] = 'field_servicetype_tid';
  $handler->display->display_options['filters']['field_servicetype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_servicetype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_servicetype_tid']['expose']['operator_id'] = 'field_servicetype_tid_op';
  $handler->display->display_options['filters']['field_servicetype_tid']['expose']['label'] = 'T/TA methods';
  $handler->display->display_options['filters']['field_servicetype_tid']['expose']['operator'] = 'field_servicetype_tid_op';
  $handler->display->display_options['filters']['field_servicetype_tid']['expose']['identifier'] = 'field_servicetype_tid';
  $handler->display->display_options['filters']['field_servicetype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_servicetype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_servicetype_tid']['vocabulary'] = 't_ta_methods';
  $handler->display->display_options['filters']['field_servicetype_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Audience for service (field_audiences_for_service) */
  $handler->display->display_options['filters']['field_audiences_for_service_value']['id'] = 'field_audiences_for_service_value';
  $handler->display->display_options['filters']['field_audiences_for_service_value']['table'] = 'field_data_field_audiences_for_service';
  $handler->display->display_options['filters']['field_audiences_for_service_value']['field'] = 'field_audiences_for_service_value';
  $handler->display->display_options['filters']['field_audiences_for_service_value']['group'] = 1;
  $handler->display->display_options['filters']['field_audiences_for_service_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audiences_for_service_value']['expose']['operator_id'] = 'field_audiences_for_service_value_op';
  $handler->display->display_options['filters']['field_audiences_for_service_value']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audiences_for_service_value']['expose']['operator'] = 'field_audiences_for_service_value_op';
  $handler->display->display_options['filters']['field_audiences_for_service_value']['expose']['identifier'] = 'field_audiences_for_service_value';
  $handler->display->display_options['filters']['field_audiences_for_service_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Travel requirements (field_travel_requirements) */
  $handler->display->display_options['filters']['field_travel_requirements_value']['id'] = 'field_travel_requirements_value';
  $handler->display->display_options['filters']['field_travel_requirements_value']['table'] = 'field_data_field_travel_requirements';
  $handler->display->display_options['filters']['field_travel_requirements_value']['field'] = 'field_travel_requirements_value';
  $handler->display->display_options['filters']['field_travel_requirements_value']['group'] = 1;
  $handler->display->display_options['filters']['field_travel_requirements_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_travel_requirements_value']['expose']['operator_id'] = 'field_travel_requirements_value_op';
  $handler->display->display_options['filters']['field_travel_requirements_value']['expose']['label'] = 'Travel';
  $handler->display->display_options['filters']['field_travel_requirements_value']['expose']['operator'] = 'field_travel_requirements_value_op';
  $handler->display->display_options['filters']['field_travel_requirements_value']['expose']['identifier'] = 'field_travel_requirements_value';
  $handler->display->display_options['filters']['field_travel_requirements_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
    17 => '17',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    14 => '14',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['sid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['sid']['group_info']['label'] = 'Workflow state';
  $handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'New',
      'operator' => 'in',
      'value' => array(
        17 => '17',
      ),
    ),
    2 => array(
      'title' => 'Ready for RT Coordinator Review',
      'operator' => 'in',
      'value' => array(
        24 => '24',
      ),
    ),
    3 => array(
      'title' => 'Revisions Needed by T/TA Specialist',
      'operator' => 'in',
      'value' => array(
        20 => '20',
      ),
    ),
    4 => array(
      'title' => 'Revisions Needed by RT Coordinator',
      'operator' => 'in',
      'value' => array(
        8 => '8',
      ),
    ),
    5 => array(
      'title' => 'Needs Core Costing',
      'operator' => 'in',
      'value' => array(
        10 => '10',
      ),
    ),
    6 => array(
      'title' => 'Ready for Core Preliminary Review',
      'operator' => 'in',
      'value' => array(
        13 => '13',
      ),
    ),
    7 => array(
      'title' => 'Ready for Core Director Review',
      'operator' => 'in',
      'value' => array(
        9 => '9',
      ),
    ),
    8 => array(
      'title' => 'Not Approved',
      'operator' => 'in',
      'value' => array(
        25 => '25',
      ),
    ),
    9 => array(
      'title' => 'Approved',
      'operator' => 'in',
      'value' => array(
        11 => '11',
      ),
    ),
    10 => array(
      'title' => 'Completed',
      'operator' => 'in',
      'value' => array(
        26 => '26',
      ),
    ),
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    222 => '222',
    223 => '223',
    224 => '224',
    225 => '225',
  );
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'active_status';

  /* Display: Trackers Listing */
  $handler = $view->new_display('page', 'Trackers Listing', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'trackers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Trackers';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Related Costing */
  $handler = $view->new_display('page', 'Related Costing', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Costing';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['id'] = 'reverse_field_tracker_node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_tracker_node']['field'] = 'reverse_field_tracker_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Total Estimated Cost */
  $handler->display->display_options['fields']['field_total_estimated_cost']['id'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['table'] = 'field_data_field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['field'] = 'field_total_estimated_cost';
  $handler->display->display_options['fields']['field_total_estimated_cost']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['fields']['field_total_estimated_cost']['label'] = '';
  $handler->display->display_options['fields']['field_total_estimated_cost']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_total_estimated_cost']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_estimated_cost']['element_wrapper_class'] = 'nowrap-contents';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'tracker' => 'tracker',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'reverse_field_tracker_node';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['path'] = 'relatedcosting';
  $export['trackers'] = $view;

  $view = new view();
  $view->name = 'user_list';
  $view->description = 'For user lookups';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name], [field_first_name]';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'profile';
  /* Sort criterion: Profile: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['relationship'] = 'profile';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Omit admin */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['ui_name'] = 'Omit admin';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filter criterion: Profile: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'Staff' => 'Staff',
    'Casual' => 'Casual',
    'Consultant' => 'Consultant',
    'Vendor' => 'Vendor',
  );

  /* Display: All Users */
  $handler = $view->new_display('entityreference', 'All Users', 'user_reference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
    'uid' => 0,
    'field_first_name' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '- ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: State Project Officers */
  $handler = $view->new_display('entityreference', 'State Project Officers', 'state_project_officer');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
    'uid' => 0,
    'field_first_name' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '- ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'profile';
  /* Sort criterion: Profile: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Omit admin */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['ui_name'] = 'Omit admin';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filter criterion: Profile: Title (field_user_title) */
  $handler->display->display_options['filters']['field_user_title_tid']['id'] = 'field_user_title_tid';
  $handler->display->display_options['filters']['field_user_title_tid']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['filters']['field_user_title_tid']['field'] = 'field_user_title_tid';
  $handler->display->display_options['filters']['field_user_title_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_user_title_tid']['value'] = array(
    203 => '203',
  );
  $handler->display->display_options['filters']['field_user_title_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_title_tid']['vocabulary'] = 'user_titles';

  /* Display: Not State Officers */
  $handler = $view->new_display('entityreference', 'Not State Officers', 'not_state_officers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Person';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
    'uid' => 0,
    'field_first_name' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '- ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'profile';
  /* Sort criterion: Profile: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Omit admin */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['ui_name'] = 'Omit admin';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filter criterion: Profile: Title (field_user_title) */
  $handler->display->display_options['filters']['field_user_title_tid']['id'] = 'field_user_title_tid';
  $handler->display->display_options['filters']['field_user_title_tid']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['filters']['field_user_title_tid']['field'] = 'field_user_title_tid';
  $handler->display->display_options['filters']['field_user_title_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_user_title_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_user_title_tid']['value'] = array(
    203 => '203',
  );
  $handler->display->display_options['filters']['field_user_title_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_title_tid']['vocabulary'] = 'user_titles';

  /* Display: CAPT Staff */
  $handler = $view->new_display('entityreference', 'CAPT Staff', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
    'uid' => 0,
    'field_first_name' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '- ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'profile';
  /* Sort criterion: Profile: First Name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['relationship'] = 'profile';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'Staff' => 'Staff',
  );
  $export['user_list'] = $view;

  $view = new view();
  $view->name = 'users_and_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users and Groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Users and Groups';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'gid' => 'gid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'gid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Bulk operations: OG membership */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'og_membership';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Group membership';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Group';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Profile: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_type']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'users-and-groups';
  $export['users_and_groups'] = $view;

  $view = new view();
  $view->name = 'vbo_users_for_workflow_emails';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'VBO Users for Workflow Emails';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
    'og_user_node' => 'og_user_node',
    'rid' => 'rid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_user_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: CAPT Team Membership */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['label'] = 'Group membership';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Contextual filter: User: Roles */
  $handler->display->display_options['arguments']['rid']['id'] = 'rid';
  $handler->display->display_options['arguments']['rid']['table'] = 'users_roles';
  $handler->display->display_options['arguments']['rid']['field'] = 'rid';
  $handler->display->display_options['arguments']['rid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['rid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['rid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['rid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Primary CAPT team (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: With Group */
  $handler = $view->new_display('page', 'With Group', 'page_1');
  $handler->display->display_options['path'] = 'vbo-users-1';

  /* Display: Without Group */
  $handler = $view->new_display('page', 'Without Group', 'page_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Roles */
  $handler->display->display_options['arguments']['rid']['id'] = 'rid';
  $handler->display->display_options['arguments']['rid']['table'] = 'users_roles';
  $handler->display->display_options['arguments']['rid']['field'] = 'rid';
  $handler->display->display_options['arguments']['rid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['rid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['rid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['rid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'vbo-users-2';
  $export['vbo_users_for_workflow_emails'] = $view;

  $view = new view();
  $view->name = 'vca_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VCA List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'VCA List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: VCA number */
  $handler->display->display_options['fields']['field_vca_number']['id'] = 'field_vca_number';
  $handler->display->display_options['fields']['field_vca_number']['table'] = 'field_data_field_vca_number';
  $handler->display->display_options['fields']['field_vca_number']['field'] = 'field_vca_number';
  $handler->display->display_options['fields']['field_vca_number']['label'] = 'VCA Number';
  $handler->display->display_options['fields']['field_vca_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_vca_number']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_vca_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vca_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_vca_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Related user */
  $handler->display->display_options['fields']['field_related_user']['id'] = 'field_related_user';
  $handler->display->display_options['fields']['field_related_user']['table'] = 'field_data_field_related_user';
  $handler->display->display_options['fields']['field_related_user']['field'] = 'field_related_user';
  $handler->display->display_options['fields']['field_related_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_user']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Contract dates */
  $handler->display->display_options['fields']['field_contract_dates']['id'] = 'field_contract_dates';
  $handler->display->display_options['fields']['field_contract_dates']['table'] = 'field_data_field_contract_dates';
  $handler->display->display_options['fields']['field_contract_dates']['field'] = 'field_contract_dates';
  $handler->display->display_options['fields']['field_contract_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contract_dates']['settings'] = array(
    'format_type' => 'pretty_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Labor amount allowed */
  $handler->display->display_options['fields']['field_labor_amount']['id'] = 'field_labor_amount';
  $handler->display->display_options['fields']['field_labor_amount']['table'] = 'field_data_field_labor_amount';
  $handler->display->display_options['fields']['field_labor_amount']['field'] = 'field_labor_amount';
  $handler->display->display_options['fields']['field_labor_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_labor_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Labor hours allowed */
  $handler->display->display_options['fields']['field_labor_hours_allowed']['id'] = 'field_labor_hours_allowed';
  $handler->display->display_options['fields']['field_labor_hours_allowed']['table'] = 'field_data_field_labor_hours_allowed';
  $handler->display->display_options['fields']['field_labor_hours_allowed']['field'] = 'field_labor_hours_allowed';
  /* Field: Content: Labor amount remaining */
  $handler->display->display_options['fields']['field_labor_remaining']['id'] = 'field_labor_remaining';
  $handler->display->display_options['fields']['field_labor_remaining']['table'] = 'field_data_field_labor_remaining';
  $handler->display->display_options['fields']['field_labor_remaining']['field'] = 'field_labor_remaining';
  $handler->display->display_options['fields']['field_labor_remaining']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_labor_remaining']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Travel amount allowed */
  $handler->display->display_options['fields']['field_travel_amount_allowed']['id'] = 'field_travel_amount_allowed';
  $handler->display->display_options['fields']['field_travel_amount_allowed']['table'] = 'field_data_field_travel_amount_allowed';
  $handler->display->display_options['fields']['field_travel_amount_allowed']['field'] = 'field_travel_amount_allowed';
  $handler->display->display_options['fields']['field_travel_amount_allowed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_travel_amount_allowed']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Travel amount remaining */
  $handler->display->display_options['fields']['field_travel_remaining']['id'] = 'field_travel_remaining';
  $handler->display->display_options['fields']['field_travel_remaining']['table'] = 'field_data_field_travel_remaining';
  $handler->display->display_options['fields']['field_travel_remaining']['field'] = 'field_travel_remaining';
  $handler->display->display_options['fields']['field_travel_remaining']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_travel_remaining']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vca' => 'vca',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'vca-list';
  $export['vca_list'] = $view;

  $view = new view();
  $view->name = 'vca_list_for_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'VCA List for Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'VCA List for Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vca' => 'vca',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'VCA List for Users';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['vca_list_for_users'] = $view;

  return $export;
}
