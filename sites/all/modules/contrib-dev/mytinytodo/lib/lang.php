<?php

header('Content-type: text/javascript; charset=utf-8');
echo "mytinytodo.lang.init(". Lang::instance()->makeJS() .");";
