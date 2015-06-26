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

  // Exported image style: 12-col-banner.
  $styles['12-col-banner'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 370,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '12-col-banner',
  );

  // Exported image style: 12-col-banner-tall.
  $styles['12-col-banner-tall'] = array(
    'label' => '12-col-banner-tall',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 3-col-header.
  $styles['3-col-header'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '3-col-header',
  );

  // Exported image style: 4-col-header.
  $styles['4-col-header'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '4-col-header',
  );

  // Exported image style: 6-col-banner.
  $styles['6-col-banner'] = array(
    'effects' => array(
      45 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '6-col-banner',
  );

  // Exported image style: 6-col-banner-short.
  $styles['6-col-banner-short'] = array(
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '6-col-banner-short',
  );

  // Exported image style: 6-col-banner-tall.
  $styles['6-col-banner-tall'] = array(
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '6-col-banner-tall',
  );

  // Exported image style: 6-col-photo-landscape.
  $styles['6-col-photo-landscape'] = array(
    'label' => '6-col-photo-landscape',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 430,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 8-col-banner.
  $styles['8-col-banner'] = array(
    'effects' => array(
      43 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '8-col-banner',
  );

  // Exported image style: 8-col-banner-short.
  $styles['8-col-banner-short'] = array(
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '8-col-banner-short',
  );

  // Exported image style: 8-col-banner-tall.
  $styles['8-col-banner-tall'] = array(
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '8-col-banner-tall',
  );

  // Exported image style: 9-col-banner.
  $styles['9-col-banner'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 870,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '9-col-banner',
  );

  // Exported image style: 9-col-banner-short.
  $styles['9-col-banner-short'] = array(
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 870,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '9-col-banner-short',
  );

  // Exported image style: icon-profile.
  $styles['icon-profile'] = array(
    'label' => 'icon-profile',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 50,
          'height' => 65,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon-square.
  $styles['icon-square'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'icon-square',
  );

  // Exported image style: large-landscape.
  $styles['large-landscape'] = array(
    'effects' => array(
      33 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 275,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'large-landscape',
  );

  // Exported image style: large-landscape-scaled.
  $styles['large-landscape-scaled'] = array(
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'large-landscape-scaled',
  );

  // Exported image style: large-profile.
  $styles['large-profile'] = array(
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 315,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'large-profile',
  );

  // Exported image style: large-profile-scaled.
  $styles['large-profile-scaled'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'large-profile-scaled',
  );

  // Exported image style: large-scaled.
  $styles['large-scaled'] = array(
    'effects' => array(
      11 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'large-scaled',
  );

  // Exported image style: large-square.
  $styles['large-square'] = array(
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'large-square',
  );

  // Exported image style: med-landscape.
  $styles['med-landscape'] = array(
    'effects' => array(
      35 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'med-landscape',
  );

  // Exported image style: med-landscape-scaled.
  $styles['med-landscape-scaled'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 270,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'med-landscape-scaled',
  );

  // Exported image style: med-profile.
  $styles['med-profile'] = array(
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'med-profile',
  );

  // Exported image style: med-profile-scaled.
  $styles['med-profile-scaled'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 270,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'med-profile-scaled',
  );

  // Exported image style: med-square.
  $styles['med-square'] = array(
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'med-square',
  );

  // Exported image style: page-width.
  $styles['page-width'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'page-width',
  );

  // Exported image style: sm-landscape.
  $styles['sm-landscape'] = array(
    'effects' => array(
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'sm-landscape',
  );

  // Exported image style: sm-profile.
  $styles['sm-profile'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'sm-profile',
  );

  // Exported image style: sm-square.
  $styles['sm-square'] = array(
    'effects' => array(
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'sm-square',
  );

  // Exported image style: thmb-landscape.
  $styles['thmb-landscape'] = array(
    'effects' => array(
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'thmb-landscape',
  );

  // Exported image style: thmb-profile.
  $styles['thmb-profile'] = array(
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 85,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'thmb-profile',
  );

  // Exported image style: thmb-square.
  $styles['thmb-square'] = array(
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'thmb-square',
  );

  return $styles;
}
