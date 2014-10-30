<?php
$background_image_array = array();

if (isset($row->_field_data['nid']['entity']->field_background_image_right[LANGUAGE_NONE][0])) {
  $right_image_url = file_create_url($row->_field_data['nid']['entity']->field_background_image_right[LANGUAGE_NONE][0]['uri']);
  $background_image_array[] = "url('".$right_image_url."') right bottom no-repeat";
}

if (isset($row->_field_data['nid']['entity']->field_background_image_left[LANGUAGE_NONE][0])) {
  $left_image_url = file_create_url($row->_field_data['nid']['entity']->field_background_image_left[LANGUAGE_NONE][0]['uri']);
  $background_image_array[] = "url('".$left_image_url."') left -25px bottom no-repeat";
}

$background_image_string = implode(', ', $background_image_array);

?>

<div class="home-row-wrapper">
  <div class="views-row" style="background: <?php print $background_image_string; ?> #fff;">
    <span class="home-blocks-intro"><?php print t("You're");?></span>
    <?php foreach ($fields as $id => $field): ?>
      <?php if (!empty($field->separator)): ?>
        <?php print $field->separator; ?>
      <?php endif; ?>

      <?php print $field->wrapper_prefix; ?>
      <?php print $field->label_html; ?>
      <?php print $field->content; ?>
      <?php print $field->wrapper_suffix; ?>
    <?php endforeach; ?>
  </div>
</div>