<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function btm_features_hp_slideshow_simple_imagecache_default_presets() {
  $items = array(
    'slideshow' => array(
      'presetname' => 'slideshow',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '948',
            'height' => '406',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function btm_features_hp_slideshow_simple_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'module' => 'features',
      'description' => t('A slideshow - holds all the images to be displayed in the slideshow.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('Add the images, re-order if desired.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function btm_features_hp_slideshow_simple_views_api() {
  return array(
    'api' => '2',
  );
}
