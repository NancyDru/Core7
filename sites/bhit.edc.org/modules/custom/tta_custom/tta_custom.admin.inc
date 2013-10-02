<?php
/**
 * @file
 * Admin stuff for TTA_Custom.
 */

/**
 * Settings form.
 */
function tta_custom_settings_form($form, $form_state) {
  $form = array();

  $form['tta_custom_max_name_len'] = array(
    '#title' => t('Username link length'),
    '#type' => 'textfield',
    '#size' => 6,
    '#default_value' => variable_get('tta_custom_max_name_len', 20),
    '#description' => t('This sets the maximum length of user name links.'),
    );

  $last = variable_get('tta_custom_cron_last', 0);
  $intervals = array(
    0 => t('Always')) +
    drupal_map_assoc(array(900, 3600, 10800, 21600, 43200, 86400, 172800, 604800), 'format_interval');
  $form['tta_custom_cron_interval'] = array(
    '#title' => t('Cron interval'),
    '#type' => 'radios',
    '#options' => $intervals,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_cron_interval', 86400),
    '#description' => t('How often the Cron feature runs. Last run @when ago.',
      array('@when' => format_interval(REQUEST_TIME - $last))),
    '#attributes' => array('class' => array('container-inline')),
    );

  $state_list = workflow_get_workflow_states_by_type('service');
  $states = array();
  foreach ($state_list as $state) {
    // Skip creation state.
    if (!$state->sysid) {
      $states[$state->sid] = $state->state;
    }
  }

  $form['tta_custom_isp_state'] = array(
    '#title' => t('Initial Service Planning State'),
    '#type' => 'select',
    '#options' => $states,
    '#default_value' => variable_get('tta_custom_isp_state', ''),
    '#description' => t('This is the ready workflow state for initial service planning.'),
    );

  $form['tta_custom_quarter_state'] = array(
    '#title' => t('Quarterly Service Planning State'),
    '#type' => 'select',
    '#options' => $states,
    '#default_value' => variable_get('tta_custom_quarter_state', ''),
    '#description' => t('This is the ready workflow state for quarterly service planning.'),
    );

  $tquery = "SELECT nid, title FROM {node} WHERE status=1 AND type='resource_team' ";
  $teams = db_query($tquery)->fetchAllKeyed();

  $form['tta_custom_staff_teams'] = array(
    '#title' => t('Resource Teams from which staff must come'),
    '#type' => 'checkboxes',
    '#options' => $teams,
    '#default_value' => variable_get('tta_custom_staff_teams', array()),
    '#description' => t('Not all teams may provide service as "staff", select the ones that do here.'),
    );

  $form['tta_custom_core_group'] = array(
    '#title' => t('Core Resource Team'),
    '#type' => 'radios',
    '#options' => $teams,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_core_group', 0),
    '#description' => t('The Core group has magic powers.'),
    );

  $state_list = workflow_get_workflow_states_by_type('tracker');
  $tracker_states = array();
  foreach ($state_list as $state) {
    // Skip creation state.
    if (!$state->sysid) {
      $tracker_states[$state->sid] = $state->state;
    }
  }

  $form['tta_custom_tracker_alert'] = array(
    '#title' => t('Tracker State Alerts'),
    '#type' => 'checkboxes',
    '#options' => $tracker_states,
    '#default_value' => variable_get('tta_custom_tracker_alert', array()),
    '#description' => t('This sets a message if the Tracker was ever in this state.'),
    );

  $form['tta_custom_clone_states'] = array(
    '#title' => t('Clone Service when Tracker is'),
    '#type' => 'checkboxes',
    '#options' => $tracker_states,
    '#default_value' => variable_get('tta_custom_clone_states', array()),
    '#description' => t('This limits a Service from being cloned unless it has at least one Tracker in the selected state(s).'),
    );

  $voc = taxonomy_vocabulary_machine_name_load('active_status');
  $terms = taxonomy_get_tree($voc->vid);
  $term_list = array();
  foreach ($terms as $term) {
    $term_list[$term->tid] = $term->name;
  }

  $form['tta_custom_child_nodes_status'] = array(
    '#title' => t('Show "Create xxx" button statuses'),
    '#type' => 'checkboxes',
    '#options' => $term_list,
    '#default_value' => variable_get('tta_custom_child_nodes_status', array()),
    '#description' => t('Select the statuses a Service or Tracker must be in to show the "Create child" button.'),
    );

  $form['tta_custom_complete_service'] = array(
    '#title' => t('Mark Service complete when all its Trackers are'),
    '#type' => 'checkboxes',
    '#options' => $tracker_states,
    '#default_value' => variable_get('tta_custom_complete_service', array()),
    '#description' => t('When a Tracker goes into the selected state(s), check its associated Service
      to see if all of its Trackers are in this state. If they are, then mark the Service as complete.'),
    );

  $form['tta_custom_service_complete_status'] = array(
    '#title' => t('Service complete status'),
    '#type' => 'radios',
    '#options' => $term_list,
    '#default_value' => variable_get('tta_custom_service_complete_status', NULL),
    '#description' => t('Select the status a Service will be set to when it is complete (see above).'),
    );

  $form['#theme'] = 'tta_custom_settings_form';

  return system_settings_form($form);
}

/**
 * Theme the Settings form.
 */
function theme_tta_custom_settings_form($variables) {
  $output = '';

  $form = $variables['form'];

  $rows = array();

  $style = 'vertical-align: top;';

  $rows[] = array(
    array('data' => drupal_render($form['tta_custom_max_name_len']), 'style' => $style),
    array('data' => drupal_render($form['tta_custom_cron_interval']), 'style' => $style),
    );

  $rows[] = array(
    array('data' => drupal_render($form['tta_custom_isp_state']), 'style' => $style),
    array('data' => drupal_render($form['tta_custom_quarter_state']), 'style' => $style),
    );

  $rows[] = array(
    array('data' => drupal_render($form['tta_custom_staff_teams']), 'style' => $style),
    array('data' => drupal_render($form['tta_custom_core_group']), 'style' => $style),
    );

  $rows[] = array(
    array('data' => drupal_render($form['tta_custom_child_nodes_status']), 'style' => $style),
    array('data' => drupal_render($form['tta_custom_clone_states']), 'style' => $style),
    );

  $rows[] = array(
    array('data' => drupal_render($form['tta_custom_complete_service']), 'style' => $style),
    array('data' => drupal_render($form['tta_custom_service_complete_status']), 'style' => $style),
    );

  $rows[] = array(
    array('data' => drupal_render($form['tta_custom_tracker_alert']), 'style' => $style),
    );

  $output .= theme('table', array('rows' => $rows, 'attributes' => array('id' => 'tta-custom-settings-form')));

  $output .= drupal_render_children($form);
  return $output;
}

/**
 * Threshhold settings form.
 */
function tta_custom_threshhold_form($form, $form_state) {
  $form = array();

  $form['threshholds'] = array(
    '#type' => 'fieldset',
    '#title' => t('Threshholds'),
    );

  $form['threshholds']['tta_custom_vca_threshholds'] = array(
    '#title' => t('VCA Threshholds'),
    '#type' => 'textfield',
    '#size' => 60,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_vca_threshholds', '2500 5000 25000'),
    '#description' => t("These threshholds trigger a message to the roles below when a
      user's VCAs reach any of them in a year. Enter whole dollar amounts, separated by spaces.
      Do not use commas tp separate thousands."),
    );

  $roles = user_roles(TRUE);
  natcasesort($roles);
  $form['threshholds']['tta_custom_threshhold_roles'] = array(
    '#title' => t('Send message to roles'),
    '#type' => 'checkboxes',
    '#options' => $roles,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_threshhold_roles', array()),
    '#description' => t("These roles receive a message when any threshhold above is exceeded."),
    );

  $form['threshholds']['exceeded'] = array(
    '#type' => 'fieldset',
    '#title' => t('Threshhold exceeded email'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#description' => t("This is the email message that will be sent when a consultant
      has exceeded the above threshholds."),
    );

  $form['threshholds']['exceeded']['tta_custom_email_threshhold_exceeded_subject'] = array(
    '#title' => t('Subject'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_email_threshhold_exceeded_subject',
      'VCA Threshhold Exceeded'),
    );

  $form['threshholds']['exceeded']['tta_custom_email_threshhold_exceeded_body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#rows' => 2,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_email_threshhold_exceeded_body',
      '!name has exceeded the @limit threshhold for @year.'),
    '#description' => t("You may include '@name' to show the consultant's name, '@limit' to show
      which threshhold has been reached, and '@year' to show for which year the threshhold has
      been exceeded."),
    );

  return system_settings_form($form);
}

/**
 * Message Texts settings form.
 */
function tta_custom_texts_form($form, $form_state) {
  $form = array();
  drupal_add_css(drupal_get_path('module', 'tta_custom') . '/tta_custom.admin.css');

  $form['tta_custom_person_overlap'] = array(
    '#title' => t('Person overlap'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_person_overlap',
      '@name is unavailable because the dates of the associated tracker form overlap with those of !other.'),
    '#description' => t("This message will occur when a tracker's dates overlap with another tracker involving
      the same person. You may include '@name' to show the consultant's name and '!other' to show a link
      to the other tracker."),
    );

  $form['tta_custom_vca_inactive'] = array(
    '#title' => t('No active VCA'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_vca_inactive', 'This VCA is not active.'),
    '#description' => t("This message will occur when an inactive VCA is displayed."),
    );

  $form['tta_custom_vca_not_started'] = array(
    '#title' => t('VCA not yet active'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_vca_not_started', 'This VCA is not yet active.'),
    '#description' => t("This message will occur when an active VCA is displayed but its start date is in the future."),
    );

  $form['tta_custom_vca_overlap'] = array(
    '#title' => t('VCA overlap'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_vca_overlap',
      'The dates of !this overlap with those of !other.'),
    '#description' => t("This message will occur when a VCA's dates overlap with another VCA for
      the same person. You may include '!other' to show a link to the other VCA
      and '!this' to show a link to the active VCA."),
    );

  $form['tta_custom_no_active_vca'] = array(
    '#title' => t('No active VCA'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_no_active_vca',
      '@name is unavailable because there is no active VCA.'),
    '#description' => t("This message will occur when a consultant is assigned to do work, but does not have
      an active VCA for the dates of the work. You may include '@name' to show the consultant's name."),
    );

  $form['tta_custom_cost_exceeds_vca'] = array(
    '#title' => t('Cost exceeds VCA'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_cost_exceeds_vca',
      '!name is unavailable because the proposed @field exceeds VCA !vca.'),
    '#description' => t("This message will occur when a consultant is assigned to do work, but the proposed costs
      exceed what's available in the active VCA. You may include '!vca' to show a link to the VCA;
      '!name' to show the person's name,; and '@field' to show which limit is exceeded."),
    );

  $form['tta_custom_vca_overspent'] = array(
    '#title' => t('VCA Field Overspent'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_vca_overspent',
      'The "@label" amount is overspent on VCA "!vca".'),
    '#description' => t("This message will occur when a consultant has done more work than the VCA allows.
      You may include '!vca' to show a link to the VCA and '@label' to show the field name."),
    );

  $form['tta_custom_tracker_state_alert'] = array(
    '#title' => t('Tracker State Alerts'),
    '#type' => 'textarea',
    '#rows' => 1,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_tracker_state_alert',
      'This @type has been in the @state state.'),
    '#description' => t("This message will occur when a has previously been in a chosen state.
      You may include '@type' to show the content type, @state to show the state name."),
    );

  $form['expired'] = array(
    '#type' => 'fieldset',
    '#title' => t('VCA Expired email'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#description' => t("This email message will be sent when a consultant's Vendor Consulting Agreement has expired."),
    '#attributes' => array('class' => array('clear-block')),
    );

  $form['expired']['tta_custom_email_vca_expired_subject'] = array(
    '#title' => t('Subject'),
    '#type' => 'textfield',
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_email_vca_expired_subject', 'VCA Expired'),
    );

  $form['expired']['tta_custom_email_vca_expired_body'] = array(
    '#title' => t('Body'),
    '#type' => 'textarea',
    '#rows' => 2,
    '#required' => TRUE,
    '#default_value' => variable_get('tta_custom_email_vca_expired_body',
      '!vca has reached its end date and is expired.'),
    '#description' => t("You may include '!vca' to show the VCA's title."),
    );

  return system_settings_form($form);
}

/**
 * Service Year form.
 */
function tta_custom_service_year_form($form, $form_state) {
  $form = array();
  $current = db_query("SELECT data FROM {field_config_instance}
    WHERE field_name = 'field_service_year' AND bundle = 'service' ")->fetchField();
  $current = unserialize($current);

  $form['#current'] = $current;

  $current_year = $current['default_value'][0]['value'];
  $options = drupal_map_assoc(range($current_year - 2, $current_year + 3));

  $form['tta_custom_service_year'] = array(
    '#title' => t('Service Year default value'),
    '#type' => 'radios',
    '#options' => $options,
    '#default_value' => $current_year,
    '#description' => t('Note: This changes the default for the Service Year field,
      which gets propagated all over the place.')
      . '<big><strong>'
      . t('Don\'t play with this.')
      . '</strong></big>',
    );

  $form['submit'] = array('#type' => 'submit', '#value' => t('Change the default year'));

  return $form;
}

/**
 * Service Year form submission handler.
 */
function tta_custom_service_year_form_submit($form, $form_state) {
  // Get the current values.
  $current = $form['#current'];

  // Replace the default year.
  $current['default_value'][0]['value'] = $form_state['values']['tta_custom_service_year'];

  // Update the database.
  $num_updated = db_update('field_config_instance')
    ->fields(array('data' => serialize($current)))
    ->condition('field_name', 'field_service_year')
    ->condition('bundle', 'service')
    ->execute();

  // Did it go okay?
  if ($num_updated) {
    drupal_set_message(t('Default year changed.'));
    field_cache_clear();
  }
  else {
    drupal_set_message(t('Default year change failed.'), 'error');
  }
}
