<?php
/**
 * @file
 * stanford_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function stanford_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 150x200_profile_photo.
  $styles['150x200_profile_photo'] = array(
    'name' => '150x200_profile_photo',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '150',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 270x110_horizontal_medium.
  $styles['270x110_horizontal_medium'] = array(
    'name' => '270x110_horizontal_medium',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '270',
          'height' => '110',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: 90x90_square.
  $styles['90x90_square'] = array(
    'name' => '90x90_square',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '90',
          'height' => '90',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
