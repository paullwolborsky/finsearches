<?php

//function fin_utils_views_query_alter(&$view, &$query) {
function fin_utils_views_post_build(&$view) {
	//if ($view->current_display=="manager_plans" || $view->current_display=="block_1")  {
	// }
	//debugBreak();
}

function fin_utils_views_data_alter(&$data) {
//debugBreak();
}

/*
 * Implementation of hook_views_post_execute
 *
 * This hook grabs field collection managers hired major/minor values (or parent)
 * and stuff 2 other fields in the field collection, field_special_major_minor 1 & 2
 * These are hidden fields, set to a simple taxonomy select list and are added in
 * all view displays that display major/minor styles.
 */
function fin_utils_views_post_execute(&$view) {
/*
Content Lists / Mandates
Content Lists / RFPs
Reference Views / Plan - Managers Hired
x Reference Views / Manager - Mandates
x Reference Views / Manager - Plans
Reference Views / Potential Leads Mandates
Reference Views / New Leads Mandates
Reference Views / Ongoing Mandates
Reference Views / Completed Mandates
Reference Views / Closed Mandates

'manager_firms_list'
'mandates_list'
'rfps_list'
'att_plan_mandate_managers'
'manager_mandates'
'manager_plans'
'mandate_managers'
'mandate_plan_info'
'plan_contacts'
'plan_direct_consultants'
'plan_lead_contact'

	if ($view->current_display=="manager_plans"
		|| $view->current_display=="manager_mandates"
		|| $view->current_display=="plan_managers_hired"
		|| $view->current_display=="potential_leads_mandates"
		|| $view->current_display=="manager_plans"
		|| $view->current_display=="manager_plans"
		|| $view->current_display=="manager_plans"
		|| $view->current_display=="manager_plans"
		|| $view->current_display=="manager_plans"
		)  {
NOT NEEDED
eva_completed_mandates
eva_ongoing_mandates		
eva_closed_mandates
eva_new_leads_mandates
eva_potential_leads_mandates

		|| $view->current_display=='plan_lead_contact'

plan_lead_contact = plan managers hired

Sometimes, the Parent/Child terms work. Other times not.
They work in:
block_1 / Plan Managers Hired

mandate new lead (avengers plan, new lead mandate 2 had blank manager hired major/minor, used mandate 2 major/minor custodian n/a successfully

Manager Heroes for Hire mandates assigned mostly working. mandate-2 was blank, mandate-2 field collection major/minor was blank, mandate-2 own major/minor was custodian / n/a was not used, fallback failed, so I am adding this to the not working oclumn too

Not in:
att_plan_mandate_managers
mandate ongoing not working, avengers plan->mandate-3 field_managers_hired major/minor cash / na, but table shows record keeper / n/a
mandate completed not working, avengers plan->mandate-4 field_managers_hired major/minor real estate / debt but table shows consultant / outsourced cio
mandate closed not working, avengers plan->mandate-5 field_managers_hired major/minor shows hedge fund / global macro but table shows active fixed income / long term

Manager Heroes for Hire mandates assigned mostly working. mandate-2 was blank, mandate-2 field collection major/minor was blank, mandate-2 own major/minor was custodian / n/a was not used, fallback failed, so I am adding this to the not working oclumn too

Ongoing/Closed/Completed
Plan Avengers - Ongoing should say International, Cash / N/A. None shows right

Updated & Working
*/
	//$view->current_display=='eva_asset_allocation'
	if ($view->current_display=='eva_foia_history') {
		//debugBreak();
	}

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
		)  {
		
		if ($view->result) {
			$out = array();			
			foreach ($view->result as $row) {
				$major_minor = NULL;
				if (isset($row->_field_data)) {
					foreach ($row->_field_data as $somekey => $fdata) {
						if (isset($fdata['entity']->field_major_minor_style_tr['und'])) {
							$major_minor = $fdata['entity']->field_major_minor_style_tr['und'];
						}
					}
				}
				$major = "";
				$minor =- "";
				if (isset($major_minor[0]['tid'])) {
					$major = $major_minor[0]['tid'];
				}
				if (isset($major_minor[1]['tid'])) {
					$minor = $major_minor[1]['tid'];
				}
				$out[] = array('major'=>$major, 'minor'=>$minor);
			}
			// process view->result 
			for ($i=0; $i<count($out); $i++) {
//debugBreak();
				$major = $out[$i]['major'];
				$minor = $out[$i]['minor'];
				
				if (isset($view->result[$i]->field_field_special_major_minor_1)) {
					$major_term = taxonomy_term_load($major);
					$view->result[$i]->field_field_special_major_minor_1[0]['raw']['tid'] = $out[$i]['major'];
					$view->result[$i]->field_field_special_major_minor_1[0]['raw']['term_reference'] = $major_term;
					$view->result[$i]->field_field_special_major_minor_1[0]['rendered']['#href'] = 'taxonomy_term/'.$major_term->tid;
					$view->result[$i]->field_field_special_major_minor_1[0]['rendered']['#title'] = $major_term->name;
				}

				if (isset($view->result[$i]->field_field_special_major_minor_2)) {
					$minor_term = taxonomy_term_load($minor);
					$view->result[$i]->field_field_special_major_minor_2[0]['raw']['tid'] = $out[$i]['minor'];
					$view->result[$i]->field_field_special_major_minor_2[0]['raw']['term_reference'] = $minor_term;
					$view->result[$i]->field_field_special_major_minor_2[0]['rendered']['#href'] = 'taxonomy_term/'.$minor_term->tid;
					$view->result[$i]->field_field_special_major_minor_2[0]['rendered']['#title'] = $minor_term->name;
				}
			}
		}
	}
}
