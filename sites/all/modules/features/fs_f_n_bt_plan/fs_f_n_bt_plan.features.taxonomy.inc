<?php
/**
 * @file
 * fs_f_n_bt_plan.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fs_f_n_bt_plan_taxonomy_default_vocabularies() {
  return array(
    'placement_policies' => array(
      'name' => 'Placement Policies',
      'machine_name' => 'placement_policies',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}