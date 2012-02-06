<?php

/**
 * Implementation of hook_content_default_fields().
 */
function btm_features_hp_slideshow_simple_content_default_fields() {
  $fields = array();

  // Exported field: field_image
  $fields['slideshow-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'slideshow',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/slideshow',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '1M',
      'max_filesize_per_node' => '20M',
      'max_resolution' => '1896x812',
      'min_resolution' => '948x406',
      'alt' => 'Midgett Realty',
      'custom_alt' => 1,
      'title' => 'Midgett Realty',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => FALSE,
      'insert_styles' => array(
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'image' => FALSE,
        'imagecache_page_banner_narrow' => FALSE,
        'imagecache_page_banner_wide' => FALSE,
        'imagecache_slideshow' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'auto',
      ),
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Image',
      'weight' => '-4',
      'description' => 'This image must be at least 948px X 406px (W x H) and no more than 1896px X 812px. It will be scaled and cropped to 948px X 406px  for display in the slideshow.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $fields;
}
