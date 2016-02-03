<?php

/*
	This file is part of myTinyTodo.
	(C) Copyright 2009-2010 Max Pozdeev <maxpozdeev@gmail.com>
	Licensed under the GNU GPL v2+ license. See file COPYRIGHT for details.
*/ 

set_error_handler('myErrorHandler');
set_exception_handler('myExceptionHandler');

global $user;

$db = DBConnection::instance();
//dd($_GET, "_GET In ajax.php");
if(isset($_GET['loadLists']))
{
	$t = array();
	$field_id = (int)$_GET['fid'];
	$t['total'] = 0;
	$q = $db->dq("SELECT * FROM {mytinytodo_lists} WHERE field_id = ? ORDER BY ow ASC, id ASC", array($field_id));
	while($r = $q->fetch_assoc($q))
	{
		$t['total']++;
		$t['list'][] = prepareList($r);
	}
	jsonExit($t);
}
elseif(isset($_GET['loadTasks']))
{
	stop_gpc($_GET);
	$listId = (int)_get('list');

	$sqlWhere = $inner = '';
	if($listId == -1) {
		$userLists = getUserListsSimple();
		foreach ($userLists as $userList) {
			check_read_access($userList);
		}
		$sqlWhere .= " AND {mytinytodo_todos}.list_id IN (". implode(array_keys($userLists), ','). ") ";
	}
	else {
		check_read_access($listId);
		$sqlWhere .= " AND {mytinytodo_todos}.list_id=". $listId;
	}

	if(_get('compl') == 0) $sqlWhere .= ' AND compl=0';
	
	$tag = trim(_get('t'));
	if($tag != '')
	{
		$at = explode(',', $tag);
		$tagIds = array();
		$tagExIds = array();
		foreach($at as $i=>$atv) {
			$atv = trim($atv);
			if($atv == '' || $atv == '^') continue;
			if(substr($atv,0,1) == '^') {
				$tagExIds[] = getTagId(substr($atv,1));
			} else {
				$tagIds[] = getTagId($atv);
			}
		}

		if(sizeof($tagIds) > 1) {
			$inner .= "INNER JOIN (SELECT task_id, COUNT(tag_id) AS c FROM {mytinytodo_tag2task} WHERE list_id=$listId AND tag_id IN (".
						implode(',',$tagIds). ") GROUP BY task_id) AS t2t ON id=t2t.task_id";
			$sqlWhere = " AND c=". sizeof($tagIds); //overwrite sqlWhere!
		}
		elseif($tagIds) {
			$inner .= "INNER JOIN {mytinytodo_tag2task} ON id=task_id";
			$sqlWhere .= " AND tag_id = ". $tagIds[0];
		}
		
		if($tagExIds) {
			$sqlWhere .= " AND id NOT IN (SELECT DISTINCT task_id FROM {mytinytodo_tag2task} WHERE list_id=$listId AND tag_id IN (".
						implode(',',$tagExIds). "))"; //DISTINCT ?
		}
	}

	$s = trim(_get('s'));
	if($s != '') $sqlWhere .= " AND (title LIKE ". $db->quoteForLike("%%%s%%",$s). " OR note LIKE ". $db->quoteForLike("%%%s%%",$s). ")";
	$sort = (int)_get('sort');
	$sqlSort = "ORDER BY compl ASC, ";
	if($sort == 1) $sqlSort .= "prio DESC, ddn ASC, duedate ASC, ow ASC";		// byPrio
	elseif($sort == 101) $sqlSort .= "prio ASC, ddn DESC, duedate DESC, ow DESC";	// byPrio (reverse)
	elseif($sort == 2) $sqlSort .= "ddn ASC, duedate ASC, prio DESC, ow ASC";	// byDueDate
	elseif($sort == 102) $sqlSort .= "ddn DESC, duedate DESC, prio ASC, ow DESC";// byDueDate (reverse)
	elseif($sort == 3) $sqlSort .= "d_created ASC, prio DESC, ow ASC";			// byDateCreated
	elseif($sort == 103) $sqlSort .= "d_created DESC, prio ASC, ow DESC";		// byDateCreated (reverse)
	elseif($sort == 4) $sqlSort .= "d_edited ASC, prio DESC, ow ASC";			// byDateModified
	elseif($sort == 104) $sqlSort .= "d_edited DESC, prio ASC, ow DESC";		// byDateModified (reverse)
	else $sqlSort .= "ow ASC";

	$t = array();
	$t['total'] = 0;
	$t['list'] = array();
	$q = $db->dq("SELECT *, duedate IS NULL AS ddn FROM {mytinytodo_todos} $inner WHERE 1=1 $sqlWhere $sqlSort");
	while($r = $q->fetch_assoc($q))
	{
		$t['total']++;
		$t['list'][] = prepareTaskRow($r);
	}
	jsonExit($t);
}
elseif(isset($_GET['newTask']))
{
	stop_gpc($_POST);
	$listId = (int)_post('list');
	check_write_access($listId);
	$t = array();
	$t['total'] = 0;
	$title = trim(_post('title'));
	$prio = 0;
	$tags = '';
	if(Config::get('smartsyntax') != 0)
	{
		$a = parse_smartsyntax($title);
		if($a === false) {
			jsonExit($t);
		}
		$title = $a['title'];
		$prio = $a['prio'];
		$tags = $a['tags'];
	}
	if($title == '') {
		jsonExit($t);
	}
	if(Config::get('autotag')) $tags .= ','._post('tag');
	$ow = 1 + (int)$db->sq("SELECT MAX(ow) FROM {mytinytodo_todos} WHERE list_id=$listId AND compl=0");
	$db->ex("BEGIN");
	$id = db_insert('mytinytodo_todos')
		->fields(array(
		    'uuid' => mytinytodo_generateUUID(),
		    'list_id' => $listId,
		    'title' => $title,
		    'd_created' => time(),
		    'd_edited' => time(),
	            'tags' => '',
	            'tags_ids' => '',
		    'ow' => $ow,
		    'prio' => $prio))
               ->execute();

	if($tags != '')
	{
		$aTags = prepareTags($tags);
		if($aTags) {
			addTaskTags($id, $aTags['ids'], $listId);
			$db->ex("UPDATE {mytinytodo_todos} SET tags=?,tags_ids=? WHERE id=$id", array(implode(',',$aTags['tags']), implode(',',$aTags['ids'])));
		}
	}
	$db->ex("COMMIT");

	$r = prepareTaskRow($db->sqa("SELECT * FROM {mytinytodo_todos} WHERE id=$id"));
        module_invoke_all('mytinytodo_new_task', $r);

	$t['list'][] = $r;
	$t['total'] = 1;
	jsonExit($t);
}
elseif(isset($_GET['fullNewTask']))
{
	stop_gpc($_POST);
	$listId = (int)_post('list');
	check_write_access($listId);
	$title = trim(_post('title'));
	$note = str_replace("\r\n", "\n", trim(_post('note')));
	$prio = (int)_post('prio');
	if($prio < -1000000) $prio = -1000000;
	elseif($prio > 1000000) $prio = 1000000;
	$duedate = parse_duedate(trim(_post('duedate')));
	$t = array();
	$t['total'] = 0;
	if($title == '') {
		jsonExit($t);
	}
	
	//Added new fields
	$contact = trim(_post('contact'));
	$contactdate =   parse_duedate(trim(_post('contactdate')));
	$contacttypes = $_POST['contacttypes'];
	$reminderdate = strtotime($_POST['reminderdate']);
	$reminderemail = trim(_post('reminderemail'));
	$remindernote = str_replace("\r\n", "\n", trim(_post('remindernote')));
	$tags = trim(_post('tags'));
	if(Config::get('autotag')) $tags .= ','._post('tag');
	$ow = 1 + (int)$db->sq("SELECT MAX(ow) FROM {mytinytodo_todos} WHERE list_id=$listId AND compl=0");
	$db->ex("BEGIN");
	$id = db_insert('mytinytodo_todos')
		->fields(array(
			 'uuid' => mytinytodo_generateUUID(),
			 'uid' => $user->uid,
			 'list_id' => $listId,
			 'title' => $title,
			 'd_created' => time(),
			 'd_edited' => time(),
			 'ow' => $ow,
			 'prio' => $prio,
			 'c_contact' => $contact,
			 'c_date' => $contactdate,
			 'c_type' => $contacttypes,
			 'r_date' => '',
			 'r_email' => '',
			 'r_note' => '',
			 'note' => $note,
			 'tags' => '',
			 'tags_ids' => '',
			 'duedate' => $duedate))
		->execute();

	if ($reminderdate != '') {
		$db->ex("UPDATE {mytinytodo_todos} SET r_date=?,r_email=?, r_note=? WHERE id=$id", array($reminderdate, $reminderemail, $remindernote));
	}

	if($tags != '')
	{
		$aTags = prepareTags($tags);
		if($aTags) {
			addTaskTags($id, $aTags['ids'], $listId);
			$db->ex("UPDATE {mytinytodo_todos} SET tags=?,tags_ids=? WHERE id=$id", array(implode(',',$aTags['tags']), implode(',',$aTags['ids'])));
		}
	}
	$db->ex("COMMIT");
	$r = prepareTaskRow($db->sqa("SELECT * FROM {mytinytodo_todos} WHERE id=$id"));
        module_invoke_all('mytinytodo_new_task', $r);

	$t['list'][] = $r;
	$t['total'] = 1;
	jsonExit($t);
}
elseif(isset($_GET['deleteTask']))
{
	$id = (int)_post('id');
	$deleted = deleteTask($id);
        module_invoke_all('mytinytodo_delete_task', $id);

	$t = array();
	$t['total'] = $deleted;
	$t['list'][] = array('id'=>$id);
	jsonExit($t);
}
elseif(isset($_GET['completeTask']))
{
	check_write_access();
	$id = (int)_post('id');
	$compl = _post('compl') ? 1 : 0;
	$listId = (int)$db->sq("SELECT list_id FROM {mytinytodo_todos} WHERE id=$id");
	if($compl) 	$ow = 1 + (int)$db->sq("SELECT MAX(ow) FROM {mytinytodo_todos} WHERE list_id=$listId AND compl=1");
	else $ow = 1 + (int)$db->sq("SELECT MAX(ow) FROM {mytinytodo_todos} WHERE list_id=$listId AND compl=0");
	$dateCompleted = $compl ? time() : 0;
	$db->dq("UPDATE {mytinytodo_todos} SET compl=$compl,ow=$ow,d_completed=?,d_edited=? WHERE id=$id",
				array($dateCompleted, time()) );

        module_invoke_all('mytinytodo_completed_task', array('list' => $listId, 'task' => $id));

	$t = array();
	$t['total'] = 1;
	$r = $db->sqa("SELECT * FROM {mytinytodo_todos} WHERE id=$id");
	$t['list'][] = prepareTaskRow($r);
	jsonExit($t);
}
elseif(isset($_GET['editNote']))
{
	check_write_access();
	$id = (int)_post('id');
	stop_gpc($_POST);
	$note = str_replace("\r\n", "\n", trim(_post('note')));
	$db->dq("UPDATE {mytinytodo_todos} SET note=?,d_edited=? WHERE id=$id", array($note, time()) );
	$t = array();
	$t['total'] = 1;
        $note = array('id'=>$id, 'note'=>nl2br(escapeTags($note)), 'noteText'=>(string)$note);
        module_invoke_all('mytinytodo_edit_note', $note);
	$t['list'][] = $note;

	jsonExit($t);
}
elseif(isset($_GET['editTask']))
{
	check_write_access();
	$id = (int)_post('id');
	stop_gpc($_POST);
	$title = trim(_post('title'));
	//New Fields
	$contact = trim(_post('contact'));
	$contactdate =   parse_duedate(trim(_post('contactdate')));
	$contacttypes = $_POST['contacttypes'];
	$reminderdate = strtotime($_POST['reminderdate']);
	$reminderemail = trim(_post('reminderemail'));
	$remindernote = str_replace("\r\n", "\n", trim(_post('remindernote')));
	$note = str_replace("\r\n", "\n", trim(_post('note')));
	$prio = (int)_post('prio');
	if($prio < -1000000) $prio = -1000000;
	elseif($prio > 1000000) $prio = 1000000;
	$duedate = parse_duedate(trim(_post('duedate')));
	$t = array();
	$t['total'] = 0;
	if($title == '') {
		jsonExit($t);
	}
	$listId = $db->sq("SELECT list_id FROM {mytinytodo_todos} WHERE id=$id");
	$tags = trim(_post('tags'));
	$db->ex("BEGIN");
	$db->ex("DELETE FROM {mytinytodo_tag2task} WHERE task_id=$id");
	$aTags = prepareTags($tags);
	if($aTags) {
		$tags = implode(',', $aTags['tags']);
		$tags_ids = implode(',',$aTags['ids']);
		addTaskTags($id, $aTags['ids'], $listId);
	}
	$num_affected = db_update('mytinytodo_todos')
		->fields(array(
			 'title' => $title,
			 'd_edited' => time(),
			 'prio' => $prio,
			 'c_contact' => $contact,
			 'c_date' => $contactdate,
			 'c_type' => $contacttypes,
			 'r_date' => '',
			 'r_email' => '',
			 'r_note' => '',
			 'note' => $note,
			 'tags' => $tags,
			 'tags_ids' => $tags_ids,
			 'duedate' => $duedate))
		->condition('id', $id, '=')
		->execute();

	if ($reminderdate != '') {
		$db->ex("UPDATE {mytinytodo_todos} SET r_date=?,r_email=?, r_note=? WHERE id=$id", array($reminderdate, $reminderemail, $remindernote));
	}
	
	/*
	$db->dq("UPDATE {mytinytodo_todos} SET title=?, c_contact=?, c_date=?, c_type=?, note=?,prio=?,tags=?,tags_ids=?,duedate=?,d_edited=? WHERE id=$id",
			array($title, $contact, $contactdate, $contacttypes, $note, $prio, $tags, $tags_ids, $duedate, time()) );
	*/
	$db->ex("COMMIT");
	$r = $db->sqa("SELECT * FROM {mytinytodo_todos} WHERE id=$id");
	if($r) {
                $r = prepareTaskRow($r);
                module_invoke_all('mytinytodo_edit_task', $r);
		$t['list'][] = $r;
		$t['total'] = 1;
	}
	jsonExit($t);
}
elseif(isset($_GET['changeOrder']))
{
	check_write_access();
	stop_gpc($_POST);
	$s = _post('order');
	parse_str($s, $order);
	$t = array();
	$t['total'] = 0;
	if($order)
	{
		$ad = array();
		foreach($order as $id=>$diff) {
			$ad[(int)$diff][] = (int)$id;
		}
		$db->ex("BEGIN");
		foreach($ad as $diff=>$ids) {
			if($diff >=0) $set = "ow=ow+".$diff;
			else $set = "ow=ow-".abs($diff);
			$db->dq("UPDATE {mytinytodo_todos} SET $set,d_edited=? WHERE id IN (".implode(',',$ids).")", array(time()) );
		}
		$db->ex("COMMIT");
                module_invoke_all('mytinytodo_change_order', $ids);
		$t['total'] = 1;
	}
	jsonExit($t);
}
elseif(isset($_GET['suggestTags']))
{
	$listId = (int)_get('list');
	check_read_access($listId);
	$begin = trim(_get('qq'));
	$limit = (int)_get('limit');
	if($limit<1) $limit = 8;
	$q = $db->dq("SELECT name,id FROM {mytinytodo_tags} INNER JOIN {mytinytodo_tag2task} ON id=tag_id WHERE list_id=$listId AND name LIKE ".
					$db->quoteForLike('%s%%',$begin) ." GROUP BY tag_id ORDER BY name LIMIT $limit");
	$s = '';
	while($r = $q->fetch_row()) {
		$s .= "$r[0]|$r[1]\n";
	}
	echo htmlarray($s);
	exit; 
}
elseif(isset($_GET['setPrio']))
{
	check_write_access();
	$id = (int)_get('setPrio');
	$prio = (int)_post('prio');
	if($prio < -1000000) $prio = -1000000;
	elseif($prio > 1000000) $prio = 1000000;
	$db->ex("UPDATE {mytinytodo_todos} SET prio=$prio,d_edited=? WHERE id=$id", array(time()) );

	$t = array();
	$t['total'] = 1;
        $r = array('id' => $id, 'prio' => $prio);
        module_invoke_all('mytinytodo_set_prio', $r);
	$t['list'][] = $r;
	jsonExit($t);
}
elseif(isset($_GET['tagCloud']))
{
	$listId = (int)_get('list');
	check_read_access($listId);

	$q = $db->dq("SELECT name,tag_id,COUNT(tag_id) AS tags_count FROM {mytinytodo_tag2task} INNER JOIN {mytinytodo_tags} ON tag_id=id ".
						"WHERE list_id=$listId GROUP BY (tag_id) ORDER BY tags_count ASC");
	$at = array();
	$ac = array();
	while($r = $q->fetch_assoc()) {
		$at[] = array('name'=>$r['name'], 'id'=>$r['tag_id']);
		$ac[] = $r['tags_count'];
	}

	$t = array();
	$t['total'] = 0;
	$count = sizeof($at);
	if(!$count) {
		jsonExit($t);
	}

	$qmax = max($ac);
	$qmin = min($ac);
	if($count >= 10) $grades = 10;
	else $grades = $count;
	$step = ($qmax - $qmin)/$grades;
	foreach($at as $i=>$tag)
	{
		$t['cloud'][] = array('tag'=>htmlarray($tag['name']), 'id'=>(int)$tag['id'], 'w'=> tag_size($qmin,$ac[$i],$step) );
	}
	$t['total'] = $count;
	jsonExit($t);
}
elseif(isset($_GET['addList']))
{
	check_write_access();
	stop_gpc($_POST);
	$t = array();
	$t['total'] = 0;
	$name = str_replace(array('"',"'",'<','>','&'),array('','','','',''),trim(_post('name')));
	$ow = 1 + (int)$db->sq("SELECT MAX(ow) FROM {mytinytodo_lists}");
	$field_id = trim(_post('fid'));
	$id = db_insert('mytinytodo_lists')
		->fields(array(
		  'uuid' => mytinytodo_generateUUID(),
		  'field_id' => $field_id,
		  'name' => $name,
		  'ow' => $ow,
                  'd_created' => time(),
		  'd_edited' => time()))
                ->execute();

	$t['total'] = 1;
	$r = $db->sqa("SELECT * FROM {mytinytodo_lists} WHERE id = $id");
        module_invoke_all('mytinytodo_new_list', $r);

	$t['list'][] = prepareList($r);
	jsonExit($t);
}
elseif(isset($_GET['renameList']))
{
	check_write_access();
	stop_gpc($_POST);
	$t = array();
	$t['total'] = 0;
	$id = (int)_post('list');
	$field_id = trim(_post('fid'));
	$name = str_replace(array('"',"'",'<','>','&'),array('','','','',''),trim(_post('name')));
	$result = $db->dq("UPDATE {mytinytodo_lists} SET name=?,d_edited=? WHERE id=? AND field_id=?", array($name, time(), $id, $field_id) );
	$t['total'] = $result->affected();
	$r = prepareList($db->sqa("SELECT * FROM {mytinytodo_lists} WHERE id=$id AND field_id = ?", array($field_id)));
        module_invoke_all('mytinytodo_rename_list', $r);
	$t['list'][] = $r;
	jsonExit($t);
}
elseif(isset($_GET['deleteList']))
{
	check_write_access();
	stop_gpc($_POST);
	$t = array();
	$t['total'] = 0;
	$id = (int)_post('list');
	$db->ex("BEGIN");
	$result = $db->ex("DELETE FROM {mytinytodo_lists} WHERE id=$id");
	$t['total'] = $result->affected();
	if($t['total']) {
		$db->ex("DELETE FROM {mytinytodo_tag2task} WHERE list_id=$id");
		$db->ex("DELETE FROM {mytinytodo_todos} WHERE list_id=$id");
	}
	$db->ex("COMMIT");
        module_invoke_all('mytinytodo_delete_list', $id);
	jsonExit($t);
}
elseif(isset($_GET['setSort']))
{
	check_write_access();
	$listId = (int)_post('list');
	$sort = (int)_post('sort');
	if($sort < 0 || $sort > 104) $sort = 0;
	elseif($sort < 101 && $sort > 4) $sort = 0;
	$db->ex("UPDATE {mytinytodo_lists} SET sorting=$sort,d_edited=? WHERE id=$listId", array(time()));
        module_invoke_all('mytinytodo_set_sort', array('list' => $listId, 'sort' => $sort));
	jsonExit(array('total'=>1));
}
elseif(isset($_GET['publishList']))
{
	check_write_access();
	$listId = (int)_post('list');
	$publish = (int)_post('publish');
	$db->ex("UPDATE {mytinytodo_lists} SET published=?,d_created=? WHERE id=$listId", array($publish ? 1 : 0, time()));
        module_invoke_all('mytinytodo_publish_list', array('list' => $listId, 'publish' => $publish));
	jsonExit(array('total'=>1));
}
elseif(isset($_GET['moveTask']))
{
	check_write_access();
	$id = (int)_post('id');
	$fromId = (int)_post('from');
	$toId = (int)_post('to');
	$result = moveTask($id, $toId);
	$t = array('total' => $result ? 1 : 0);
	if($fromId == -1 && $result && $r = $db->sqa("SELECT * FROM {mytinytodo_todos} WHERE id=$id")) {
                module_invoke_all('mytinytodo_move_task', array('list' => $listId, 'from' => $fromId, 'to' => $toId));
		$t['list'][] = prepareTaskRow($r);
	}
	jsonExit($t);
}
elseif(isset($_GET['changeListOrder']))
{
	check_write_access();
	stop_gpc($_POST);
	$order = (array)_post('order');
	$t = array();
	$t['total'] = 0;
	if($order)
	{
		$a = array();
		$setCase = '';
		foreach($order as $ow=>$id) {
			$id = (int)$id;
			$a[] = $id;
			$setCase .= "WHEN id=$id THEN $ow\n";
		}
		$ids = implode($a, ',');
		$db->dq("UPDATE {mytinytodo_lists} SET d_edited=?, ow = CASE\n $setCase END WHERE id IN ($ids)",
					array(time()) );

                module_invoke_all('mytinytodo_change_list_order', array('list' => $listId, 'order' => $order));
		$t['total'] = 1;
	}
	jsonExit($t);
}
elseif(isset($_GET['parseTaskStr']))
{
	check_write_access();
	stop_gpc($_POST);
	$t = array(
		'title' => trim(_post('title')),
		'prio' => 0,
		'tags' => ''
	);
	if(Config::get('smartsyntax') != 0 && (false !== $a = parse_smartsyntax($t['title'])))
	{
		$t['title'] = $a['title'];
		$t['prio'] = $a['prio'];
		$t['tags'] = $a['tags'];
	}
	jsonExit($t);
}
elseif(isset($_GET['clearCompletedInList']))
{
	check_write_access();
	stop_gpc($_POST);
	$t = array();
	$t['total'] = 0;
	$listId = (int)_post('list');
	$db->ex("BEGIN");
	$db->ex("DELETE FROM {mytinytodo_tag2task} WHERE task_id IN (SELECT id FROM {mytinytodo_todos} WHERE list_id=? and compl=1)", array($listId));
	$result = $db->ex("DELETE FROM {mytinytodo_todos} WHERE list_id=$listId and compl=1");
	$t['total'] = $result->affected();
	$db->ex("COMMIT");

        module_invoke_all('mytinytodo_clear_completed_in_list', $listId);
	jsonExit($t);
}
elseif(isset($_GET['setShowNotesInList']))
{
	check_write_access();
	$listId = (int)_post('list');
	$flag = (int)_post('shownotes');
	$bitwise = ($flag == 0) ? 'taskview & ~2' : 'taskview | 2';
	$db->dq("UPDATE {mytinytodo_lists} SET taskview=$bitwise WHERE id=$listId");

        module_invoke_all('mytinytodo_set_show_notes_in_list', array('list' => $listId, 'flag' => $flag));
	jsonExit(array('total'=>1));
}
elseif(isset($_GET['setHideList']))
{
	check_write_access();
	$listId = (int)_post('list');
	$flag = (int)_post('hide');
	$bitwise = ($flag == 0) ? 'taskview & ~4' : 'taskview | 4';
	$db->dq("UPDATE {mytinytodo_lists} SET taskview=$bitwise WHERE id=$listId");

        module_invoke_all('mytinytodo_set_hide_list', array('list' => $listId, 'flag' => $flag));
	jsonExit(array('total'=>1));	
}
elseif(isset($_GET['setShowCompletedTasks']))
{
	check_write_access();
	$listId = (int)_post('list');
	$flag = (int)_post('compl');
	$bitwise = ($flag == 0) ? 'taskview & ~1' : 'taskview | 1';
	$db->dq("UPDATE {mytinytodo_lists} SET taskview=$bitwise WHERE id=$listId");

        module_invoke_all('mytinytodo_set_show_completed_tasks', array('list' => $listId, 'flag' => $flag));
	jsonExit(array('total'=>1));
}


###################################################################################################

function prepareTaskRow($r)
{
	$lang = Lang::instance();
	$dueA = prepare_duedate($r['duedate']);
	$c_date = prepare_duedate($r['c_date']);
	$reminderformat = Config::get('dateformat2');
	$reminderdate = formatTime($reminderformat, $r['r_date']);
	
	$formatCreatedInline = $formatCompletedInline = Config::get('dateformatshort');
	if(date('Y') != date('Y',$r['d_created'])) $formatCreatedInline = Config::get('dateformat2');
	if($r['d_completed'] && date('Y') != date('Y',$r['d_completed'])) $formatCompletedInline = Config::get('dateformat2');

	$dCreated = timestampToDatetime($r['d_created']);
	$dCompleted = $r['d_completed'] ? timestampToDatetime($r['d_completed']) : '';
	$return = array(
		'id' => $r['id'],
		'title' => escapeTags($r['title']),
		'listId' => $r['list_id'],
		'date' => htmlarray($dCreated),
		'dateInt' => (int)$r['d_created'],
		'dateInline' => htmlarray(formatTime($formatCreatedInline, $r['d_created'])),
		'dateInlineTitle' => htmlarray(sprintf($lang->get('taskdate_inline_created'), $dCreated)),
		'dateEditedInt' => (int)$r['d_edited'],
		'dateCompleted' => htmlarray($dCompleted),
		'dateCompletedInline' => $r['d_completed'] ? htmlarray(formatTime($formatCompletedInline, $r['d_completed'])) : '',
		'dateCompletedInlineTitle' => htmlarray(sprintf($lang->get('taskdate_inline_completed'), $dCompleted)),
		'compl' => (int)$r['compl'],
		'prio' => $r['prio'],
		'contact' => $r['c_contact'],
		'contactdate' => $c_date['formatted'],
		'contacttype' => $r['c_type'],
		'reminderdate' => $reminderdate,
		'reminderemail' => $r['r_email'],
		'remindernote' => $r['r_note'],
		'note' => nl2br(escapeTags($r['note'])),
		'noteText' => (string)$r['note'],
		'ow' => (int)$r['ow'],
		'tags' => htmlarray($r['tags']),
		'tags_ids' => htmlarray($r['tags_ids']),
		'duedate' => $dueA['formatted'],
		'dueClass' => $dueA['class'],
		'dueStr' => htmlarray($r['compl'] && $dueA['timestamp'] ? formatTime($formatCompletedInline, $dueA['timestamp']) : $dueA['str']),
		'dueInt' => date2int($r['duedate']),
		'dueTitle' => htmlarray(sprintf($lang->get('taskdate_inline_duedate'), $dueA['formatted'])),
	);
	return $return;
}

function inputTaskParams()
{
	$a = array(
		'id' => _post('id'),
		'title'=> trim(_post('title')),
		'note' => str_replace("\r\n", "\n", trim(_post('note'))),
		'prio' => (int)_post('prio'),
		'duedate' => '',
		'tags' => trim(_post('tags')),
		'listId' => (int)_post('list'),

	);
	if($a['prio'] < -1) $a['prio'] = -1;
	elseif($a['prio'] > 2) $a['prio'] = 2;
	return $a;
}

function prepareTags($tagsStr)
{
	$tags = explode(',', $tagsStr);
	if(!$tags) return 0;

	$aTags = array('tags'=>array(), 'ids'=>array());
	foreach($tags as $tag)
	{
		$tag = str_replace(array('"',"'",'<','>','&','/','\\','^'),'',trim($tag));
		if($tag == '') continue;

		$aTag = getOrCreateTag($tag);
		if($aTag && !in_array($aTag['id'], $aTags['ids'])) {
			$aTags['tags'][] = $aTag['name'];
			$aTags['ids'][] = $aTag['id'];
		}
	}
	return $aTags;
}

function getOrCreateTag($name)
{
	$db = DBConnection::instance();
	$tagId = $db->sq("SELECT id FROM {mytinytodo_tags} WHERE name=?", array($name));
	if($tagId) return array('id'=>$tagId, 'name'=>$name);

	$id = db_insert('mytinytodo_tags')
	  ->fields(array(
		'name' => $name))
          ->execute();
	return array('id' => $id, 'name'=>$name);
}

function getTagId($tag)
{
	$db = DBConnection::instance();
	$id = $db->sq("SELECT id FROM {mytinytodo_tags} WHERE name=?", array($tag));
	return $id ? $id : 0;
}

function get_task_tags($id)
{
	$db = DBConnection::instance();
	$q = $db->dq("SELECT tag_id FROM {mytinytodo_tag2task} WHERE task_id=?", $id);
	$a = array();
	while($r = $q->fetch_row()) {
		$a[] = $r[0];
	}
	return $a;
}


function addTaskTags($taskId, $tagIds, $listId)
{
	$db = DBConnection::instance();
	if(!$tagIds) return;
	foreach($tagIds as $tagId)
	{
		$db->ex("INSERT INTO {mytinytodo_tag2task} (task_id,tag_id,list_id) VALUES (?,?,?)", array($taskId,$tagId,$listId));
	}
}

function parse_smartsyntax($title)
{
	$a = array();
	if(!preg_match("|^(/([+-]{0,1}\d+)?/)?(.*?)(\s+/([^/]*)/$)?$|", $title, $m)) return false;
	$a['prio'] = isset($m[2]) ? (int)$m[2] : 0;
	$a['title'] = isset($m[3]) ? trim($m[3]) : '';
	$a['tags'] = isset($m[5]) ? trim($m[5]) : '';
	if($a['prio'] < -1) $a['prio'] = -1;
	elseif($a['prio'] > 2) $a['prio'] = 2;
	return $a;
}

function tag_size($qmin, $q, $step)
{
	if($step == 0) return 1;
	$v = ceil(($q - $qmin)/$step);
	if($v == 0) return 0;
	else return $v-1;

}

function parse_duedate($s)
{
	$df2 = Config::get('dateformat2');
	if(max((int)strpos($df2,'n'), (int)strpos($df2,'m')) > max((int)strpos($df2,'d'), (int)strpos($df2,'j'))) $formatDayFirst = true;
	else $formatDayFirst = false;

	$y = $m = $d = 0;
	if(preg_match("|^(\d+)-(\d+)-(\d+)\b|", $s, $ma)) {
		$y = (int)$ma[1]; $m = (int)$ma[2]; $d = (int)$ma[3];
	}
	elseif(preg_match("|^(\d+)\/(\d+)\/(\d+)\b|", $s, $ma))
	{
		if($formatDayFirst) {
			$d = (int)$ma[1]; $m = (int)$ma[2]; $y = (int)$ma[3];
		} else {
			$m = (int)$ma[1]; $d = (int)$ma[2]; $y = (int)$ma[3];
		}
	}
	elseif(preg_match("|^(\d+)\.(\d+)\.(\d+)\b|", $s, $ma)) {
		$d = (int)$ma[1]; $m = (int)$ma[2]; $y = (int)$ma[3];
	}
	elseif(preg_match("|^(\d+)\.(\d+)\b|", $s, $ma)) {
		$d = (int)$ma[1]; $m = (int)$ma[2]; 
		$a = explode(',', date('Y,m,d'));
		if( $m<(int)$a[1] || ($m==(int)$a[1] && $d<(int)$a[2]) ) $y = (int)$a[0]+1; 
		else $y = (int)$a[0];
	}
	elseif(preg_match("|^(\d+)\/(\d+)\b|", $s, $ma))
	{
		if($formatDayFirst) {
			$d = (int)$ma[1]; $m = (int)$ma[2];
		} else {
			$m = (int)$ma[1]; $d = (int)$ma[2];
		}
		$a = explode(',', date('Y,m,d'));
		if( $m<(int)$a[1] || ($m==(int)$a[1] && $d<(int)$a[2]) ) $y = (int)$a[0]+1; 
		else $y = (int)$a[0];
	}
	else return null;
	if($y < 100) $y = 2000 + $y;
	elseif($y < 1000 || $y > 2099) $y = 2000 + (int)substr((string)$y, -2);
	if($m > 12) $m = 12;
	$maxdays = daysInMonth($m,$y);
	if($m < 10) $m = '0'.$m;
	if($d > $maxdays) $d = $maxdays;
	elseif($d < 10) $d = '0'.$d;
	return "$y-$m-$d";
}

function prepare_duedate($duedate)
{
	$lang = Lang::instance();

	$a = array( 'class'=>'', 'str'=>'', 'formatted'=>'', 'timestamp'=>0 );
	if($duedate == '' || $duedate == 0) {
		return $a;
	}
	$ad = explode('-', $duedate);
	$at = explode('-', date('Y-m-d'));
	$a['timestamp'] = mktime(0,0,0,$ad[1],$ad[2],$ad[0]);
	$diff = mktime(0,0,0,$ad[1],$ad[2],$ad[0]) - mktime(0,0,0,$at[1],$at[2],$at[0]);

	if($diff < -604800 && $ad[0] == $at[0])	{ $a['class'] = 'past'; $a['str'] = formatDate3(Config::get('dateformatshort'), (int)$ad[0], (int)$ad[1], (int)$ad[2], $lang); }
	elseif($diff < -604800)	{ $a['class'] = 'past'; $a['str'] = formatDate3(Config::get('dateformat2'), (int)$ad[0], (int)$ad[1], (int)$ad[2], $lang); }
	elseif($diff < -86400)		{ $a['class'] = 'past'; $a['str'] = sprintf($lang->get('daysago'),ceil(abs($diff)/86400)); }
	elseif($diff < 0)			{ $a['class'] = 'past'; $a['str'] = $lang->get('yesterday'); }
	elseif($diff < 86400)		{ $a['class'] = 'today'; $a['str'] = $lang->get('today'); }
	elseif($diff < 172800)		{ $a['class'] = 'today'; $a['str'] = $lang->get('tomorrow'); }
	elseif($diff < 691200)		{ $a['class'] = 'soon'; $a['str'] = sprintf($lang->get('indays'),ceil($diff/86400)); }
	elseif($ad[0] == $at[0])	{ $a['class'] = 'future'; $a['str'] = formatDate3(Config::get('dateformatshort'), (int)$ad[0], (int)$ad[1], (int)$ad[2], $lang); }
	else						{ $a['class'] = 'future'; $a['str'] = formatDate3(Config::get('dateformat2'), (int)$ad[0], (int)$ad[1], (int)$ad[2], $lang); }

	$a['formatted'] = formatTime(Config::get('dateformat2'), $a['timestamp']);

	return $a;
}

function date2int($d)
{
	if(!$d) return 33330000;
	$ad = explode('-', $d);
	$s = $ad[0];
	if(strlen($ad[1]) < 2) $s .= "0$ad[1]"; else $s .= $ad[1];
	if(strlen($ad[2]) < 2) $s .= "0$ad[2]"; else $s .= $ad[2];
	return (int)$s;
}

function daysInMonth($m, $y=0)
{
	if($y == 0) $y = (int)date('Y');
	$a = array(1=>31,(($y-2000)%4?28:29),31,30,31,30,31,31,30,31,30,31);
	if(isset($a[$m])) return $a[$m]; else return 0;
}

function myErrorHandler($errno, $errstr, $errfile, $errline)
{
	if($errno==E_ERROR || $errno==E_CORE_ERROR || $errno==E_COMPILE_ERROR || $errno==E_USER_ERROR || $errno==E_PARSE) $error = 'Error';
	elseif($errno==E_WARNING || $errno==E_CORE_WARNING || $errno==E_COMPILE_WARNING || $errno==E_USER_WARNING || $errno==E_STRICT) {
		if(error_reporting() & $errno) $error = 'Warning'; else return;
	}
	elseif($errno==E_NOTICE || $errno==E_USER_NOTICE) {
		if(error_reporting() & $errno) $error = 'Notice'; else return;
	}
	elseif(defined('E_DEPRECATED') && ($errno==E_DEPRECATED || $errno==E_USER_DEPRECATED)) { # since 5.3.0
		if(error_reporting() & $errno) $error = 'Notice'; else return;
	}
	else $error = "Error ($errno)";	# here may be E_RECOVERABLE_ERROR
	throw new Exception("$error: '$errstr' in $errfile:$errline", -1);
}

function myExceptionHandler($e)
{
	if(-1 == $e->getCode()) {
		echo $e->getMessage()."\n". $e->getTraceAsString();
		exit;
	}
	echo 'Exception: \''. $e->getMessage() .'\' in '. $e->getFile() .':'. $e->getLine(); //."\n". $e->getTraceAsString();
	exit;
}

function deleteTask($id)
{
	check_write_access();
	$db = DBConnection::instance();
	$db->ex("BEGIN");
	$db->ex("DELETE FROM {mytinytodo_tag2task} WHERE task_id=$id");
	//TODO: delete unused tags?
	$result = $db->dq("DELETE FROM {mytinytodo_todos} WHERE id=$id");
	$affected = $result->affected();
	$db->ex("COMMIT");
	return $affected;
}

function moveTask($id, $listId)
{
	check_write_access();
	$db = DBConnection::instance();

	// Check task exists and not in target list
	$r = $db->sqa("SELECT * FROM {mytinytodo_todos} WHERE id=?", array($id));
	if(!$r || $listId == $r['list_id']) return false;

	// Check target list exists
	if(!$db->sq("SELECT COUNT(*) FROM {mytinytodo_lists} WHERE id=?", $listId))
		return false;

	$ow = 1 + (int)$db->sq("SELECT MAX(ow) FROM {mytinytodo_todos} WHERE list_id=? AND compl=?", array($listId, $r['compl']?1:0));
	
	$db->ex("BEGIN");
	$db->ex("UPDATE {mytinytodo_tag2task} SET list_id=? WHERE task_id=?", array($listId, $id));
	$db->dq("UPDATE {mytinytodo_todos} SET list_id=?, ow=?, d_edited=? WHERE id=?", array($listId, $ow, time(), $id));
	$db->ex("COMMIT");
	return true;
}

function prepareList($row)
{
	$taskview = (int)$row['taskview'];
	return array(
		'id' => $row['id'],
		'field_id' => (int)$row['field_id'],
		'name' => htmlarray($row['name']),
		'sort' => (int)$row['sorting'],
		'published' => $row['published'] ? 1 :0,
		'showCompl' => $taskview & 1 ? 1 : 0,
		'showNotes' => $taskview & 2 ? 1 : 0,
		'hidden' => $taskview & 4 ? 1 : 0,
	);
}

function getUserListsSimple()
{
	$db = DBConnection::instance();
	$a = array();
	$field_id = (int)$_GET['fid'];
	$q = $db->dq("SELECT id, name FROM {mytinytodo_lists} WHERE field_id = ? ORDER BY id ASC", array($field_id));
	while($r = $q->fetch_row()) {
		$a[$r[0]] = $r[1];
	}
	return $a;
}

?>
