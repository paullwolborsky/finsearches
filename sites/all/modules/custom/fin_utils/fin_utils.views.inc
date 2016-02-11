<?php

/*
 * An assortment of custom view handlers for FinSearches.com V3
 * Eample: A function to display separate Major/Minor styles in 
 * Tables.
 */

/*
 * Implementation of hook_views_post_execute
 *
 * This hook grabs field collection managers hired major/minor values (or parent)
 * and stuff 2 other fields in the field collection, field_special_major_minor 1 & 2
 * These are hidden fields, set to a simple taxonomy select list and are added in
 * all view displays that display major/minor styles.
 */
function fin_utils_views_post_execute(&$view) {
	
	// Only invoked when certain view displays are being built	
	if ($view->current_display=='manager_plans' 
		|| $view->current_display=='manager_mandates'  
		|| $view->current_display=='plan_managers'
		|| $view->current_display=='mandates_list'
		|| $view->current_display=='rfps_list'
		|| $view->current_display=='block_1'
		|| $view->current_display=='att_plan_mandate_managers'
		|| $view->current_display=='eva_ongoing_mandates'
		|| $view->current_display=='eva_completed_mandates'
		|| $view->current_display=='eva_closed_mandates'
		|| $view->current_display=='eva_new_leads_mandates'		
		|| $view->current_display=='eva_potential_leads_mandates'	
		|| $view->current_display=='plan_ongoing_mandates'
		|| $view->current_display=='plan_potential_leads_mandates'
		|| $view->current_display=='plan_open_mandates'	
		|| $view->current_display=='plan_new_leads_mandates'
		|| $view->current_display=='plan_completed_mandates'
		|| $view->current_display=='mandates_list'
		)  {
		
		if ($view->result) {
			// the payload is buried deep, deep inside the Views Object
			$out = array();			
			foreach ($view->result as $row) {
				// For Each row of a table
				$major_minor = NULL;
				if (isset($row->_field_data['field_collection_item_field_data_field_managers_hired_item_i'])) {
					$major_minor = $row->_field_data['field_collection_item_field_data_field_managers_hired_item_i']['entity']->field_major_minor_style_tr;
				}
				
				// Now we have a complicated array with 2 tids in it, move to 
				//  simpler array.
				$major = 0;
				$minor =- 0;
				if (isset($major_minor['und'][0]['tid'])) {
					$major = $major_minor['und'][0]['tid'];
				}
				if (isset($major_minor['und'][1]['tid'])) {
					$minor = $major_minor['und'][1]['tid'];
				}
				$out[] = array('major'=>$major, 'minor'=>$minor);
			}

			// Now we stuff the values in various places, and rows of the View Object
			for ($i=0; $i<count($out); $i++) {
				
				// For each row of the Table.
				// Unpack the Major & Minor Tids
				$major = $out[$i]['major'];
				$minor = $out[$i]['minor'];
				
				if (isset($view->result[$i]->field_field_special_major_minor_1)) {
					// Get the Taxonomy data for the 2 tids, if we have 2 tids
					$major_term = taxonomy_term_load($major);
					$name='';
					$tid=0;
					if ($major_term) {
						$name = $major_term->name;
						$tid = $major_term->tid;
					}
					$view->result[$i]->field_field_special_major_minor_1[0]['raw']['tid'] = $out[$i]['major'];
					$view->result[$i]->field_field_special_major_minor_1[0]['raw']['term_reference'] = $major_term;
					$view->result[$i]->field_field_special_major_minor_1[0]['rendered']['#href'] = 'taxonomy_term/'.$tid;
					$view->result[$i]->field_field_special_major_minor_1[0]['rendered']['#title'] = $name;
				}

				if (isset($view->result[$i]->field_field_special_major_minor_2)) {
					$minor_term = taxonomy_term_load($minor);
					$name='';
					$tid=0;
					if ($minor_term) {
						$name = $minor_term->name;
						$tid = $minor_term->tid;
					}
					$view->result[$i]->field_field_special_major_minor_2[0]['raw']['tid'] = $out[$i]['minor'];
					$view->result[$i]->field_field_special_major_minor_2[0]['raw']['term_reference'] = $minor_term;
					$view->result[$i]->field_field_special_major_minor_2[0]['rendered']['#href'] = 'taxonomy_term/'.$tid;
					$view->result[$i]->field_field_special_major_minor_2[0]['rendered']['#title'] = $name;
				}
			}
		}
	}
}
