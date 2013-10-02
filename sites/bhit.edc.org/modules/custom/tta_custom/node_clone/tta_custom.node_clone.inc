<?php
/**
 * @file
 * TTA_Custom hooks for Node_Clone.
 */

/**
 * Implements hook_clone_access_alter().
 *
 * Show the clone link only on Services with at least one
 * Tracker that has been approved.
 */
function tta_custom_clone_access_alter(&$access, $node) {
  global $user;

  switch ($node->type) {
    case 'service':
      // Get all trackers attached to this service.
      $wrapper = entity_metadata_wrapper('node', $node);
      if ($node->field_related_trackers) {
        // On which states do we allow cloning?
        $states = array_filter(variable_get('tta_custom_clone_states', array()));

        // And let's assume that it will not be allowed.
        // @TODO: This is not site-friendly.
        $access = FALSE;

        // Check every tracker.
        foreach ($wrapper->field_related_trackers->getIterator() as $tracker) {
          // If any is in a selected state, allow the link.
          if (in_array($tracker->value()->workflow, $states)) {
            // Yes, then allow the link.
            $access = TRUE;
            return;
          }
        }
      }

    case 'tracker':
      $access = FALSE;
  }
}
