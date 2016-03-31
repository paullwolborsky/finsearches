<?php
/**
 * @file
 * fs_f_n_bt_manager_firm.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fs_f_n_bt_manager_firm_taxonomy_default_vocabularies() {
  return array(
    'content_type_human' => array(
      'name' => 'Content Type Human',
      'machine_name' => 'content_type_human',
      'description' => 'Human-readable content type designations.',
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
