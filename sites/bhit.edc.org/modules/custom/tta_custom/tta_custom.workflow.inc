<?php
/**
 * Implements hook_workflow().
 *
 * @param $op
 *   The current workflow operation: 'transition choice', 'transition pre' or 'transition post'.
 * @param $old_state
 *   The state ID of the current state.
 * @param $new_state
 *   The state ID of the new state.
 * @param $node
 *   The node whose workflow state is changing.
 */
function tta_custom_workflow($op, $old_state, $new_state, $node) {
  switch ($op) {
    case 'transition permitted':
      // If user is special, get out now.
      if (user_access('bypass node access')) {
        return TRUE;
      }

      // Get the node's group value(s).
      $groups = field_get_items('node', $node, 'og_group_ref');

      // Add the Core group, because those users are magic.
      $core = variable_get('tta_custom_core_group', 0);
      $groups['core'] = array('target_id' => $core);

      foreach ($groups as $group) {
        // See if the current user is a member of the node's group.
        if (og_is_member('node', $group['target_id'], 'user')) {
          return TRUE;
        }
      }
      // Nope the user is not in any of the node's groups.
      return FALSE;

    // React to a transition.
    case 'transition post':
      switch ($node->type) {
        case 'tracker':
          // See if the new state is "completed".
          $complete_state = array_filter(variable_get('tta_custom_complete_service', array()));
          if (in_array($new_state, $complete_state)) {
            $status = variable_get('tta_custom_service_complete_status', NULL);
            $current = entity_metadata_wrapper('node', $node);

            // Go ahead and mark tracker complete.
            $current->field_status->set($status);
            $current->save();

            // Get the related service.
            $service = $current->field_service;

            // Get the list of related trackers.
            $all_done = TRUE;
            foreach ($current->field_service->field_related_trackers->getIterator() as $tracker) {
              // Get the tracker's current workflow state.
              $state = workflow_get_workflow_node_by_nid($tracker->nid->value());

              // Is the tracker complete?
              $all_done &= in_array($state->sid, $complete_state);
            }

            // If they are all complete, then get busy.
            if ($all_done) {
              // Set the service to complete.
              $current->field_service->field_status->set($status);
              $current->field_service->save();
              
              $service_link = l($current->field_service->label(), 'node/' . $current->field_service->nid->value());
              drupal_set_message(t('The Service "!service" is now complete.',
                array('!service' => $service_link)));
              watchdog('TTA Custom', '!service is now complete.', array('!service' => $service_link));
            }

          }
          break;
      }
      return;
  }
}
