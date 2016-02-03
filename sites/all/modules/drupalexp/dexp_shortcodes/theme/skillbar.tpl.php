<?php
$has_label = false;
if (strpos($class, "has-label") !== false) {
    $has_label = true;
} else {
    $content = $content . " (" . $percent . "%)";
}
?>
<div id="<?php print $element_id; ?>" class="skill-bar" data-percent="<?php print $percent."%"; ?>">
    <div class="skill-bar-title"><?php print $content; ?></div>
    <div class="progress <?php print $class; ?>">
        <div class="progress-bar"  role="progressbar" aria-valuenow="<?php print $percent; ?>" aria-valuemin="0" aria-valuemax="100" style="width: 0%;">
            <?php
            if ($has_label !== false) {
                print $percent . "%";
            }
            ?>
        </div>
    </div>
</div>