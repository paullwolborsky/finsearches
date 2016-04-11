<?php
/**
 * @file
 * Feeds mapper for UUID module.
 */

/**
 * Implements hook_feeds_processor_targets_alter().
 *
 * Add UUID field target definition for entity types.
 */
function uuid_feeds_processor_targets_alter(&$targets, $entity_type, $bundle) {
  $info = entity_get_info($entity_type);
  if (isset($info['uuid']) && $info['uuid'] == TRUE && !empty($info['entity keys']['uuid'])) {
    $uuid_key = $info['entity keys']['uuid'];
    $targets['uuid:' . $uuid_key] = array(
      'name' => 'UUID',
      'callback' => 'uuid_feeds_set_target',
      'description' => t('The UUID property of the @type.', array('@type' => $info['label'])),
      'optional_unique' => TRUE,
      'unique_callbacks' => array('uuid_feeds_existing_entity_id'),
    );
  }
}

/**
 * Callback for UUID mapping.
 *
 * @param FeedsSource $source
 *   Field mapper source settings.
 * @param object $entity
 *   An entity object, for instance a node object.
 * @param string $target
 *   A string identifying the target on the node.
 * @param array $value
 *   The value to populate the target with.
 * @param array $mapping
 *  Associative array of the mapping settings from the per mapping
 *  configuration form.
 */
function uuid_feeds_set_target($source, $entity, $target, $value, $mapping) {
  if (empty($value)) {
    return;
  }

  // Only one value makes sense here, use the first one.
  if (is_array($value)) {
    $value = reset($value);
  }

  list( , $uuid_key) = explode(':', $target);
  if (uuid_is_valid($value)) {
    $entity->{$uuid_key} = $value;
  }
}

/**
 * Callback for returning unique entity_id from UUID value.
 *
 * @param FeedsSource $source
 *   The Feed source.
 * @param string $entity_type
 *   Entity type for the entity to be processed.
 * @param string $bundle
 *   Bundle name for the entity to be processed.
 * @param string $target
 *   A string identifying the unique target on the entity.
 * @param array $value
 *   The unique values to be checked.
 *
 * @return int|null
 *   The existing entity id, or NULL if no existing entity is found.
 *
 * @see hook_feeds_processor_targets()
 * @see FeedsProcessor::existingEntityId()
 */
function uuid_feeds_existing_entity_id($source, $entity_type, $bundle, $target, $value) {
  $info = entity_get_info($entity_type);
  if (isset($info['uuid']) && $info['uuid'] == TRUE && !empty($info['entity keys']['uuid'])) {
    $uuid_key = $info['entity keys']['uuid'];

    // Only one value makes sense here, use the first one.
    if (is_array($value)) {
      $value = reset($value);
    }

    if ($target == 'uuid:' . $uuid_key && uuid_is_valid($value)) {
      $entities = entity_uuid_load($entity_type, array($value));
      // If there is a value, return the first else return 0 to signal no entity
      // exists.
      if (!empty($entities)) {
        $entity = reset($entities);
        return $entity->{$info['entity keys']['id']};
      }
    }
  }
}
