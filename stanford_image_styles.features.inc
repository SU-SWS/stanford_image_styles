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

  // Exported image style: banner-850x400.
  $styles['banner-850x400'] = array(
    'label' => 'banner (850x400)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 850,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full-width-banner.
  $styles['full-width-banner'] = array(
    'label' => 'Full Width Banner (Scale and Crop 1600x600)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full-width-banner-short.
  $styles['full-width-banner-short'] = array(
    'label' => 'full-width-banner-short',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: half-page-profile.
  $styles['half-page-profile'] = array(
    'label' => 'Half Page Profile (Scale and Crop 600x700)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 700,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: huge-landscape.
  $styles['huge-landscape'] = array(
    'label' => 'Huge Landscape (Scale and Crop 1500x1200)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 1200,
        ),
        'weight' => 1,
      ),
    ),
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

  // Exported image style: icon-scaled.
  $styles['icon-scaled'] = array(
    'label' => 'icon-scaled',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 50,
          'height' => '',
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

  // Exported image style: sm-profile-scaled.
  $styles['sm-profile-scaled'] = array(
    'label' => 'sm-profile-scaled',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 110,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sm-scaled.
  $styles['sm-scaled'] = array(
    'label' => 'sm-scaled',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
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
