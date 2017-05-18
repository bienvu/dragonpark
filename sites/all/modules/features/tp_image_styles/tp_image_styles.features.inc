<?php
/**
 * @file
 * tp_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function tp_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 100x110.
  $styles['100x110'] = array(
    'label' => '100x110',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 1300x430.
  $styles['1300x430'] = array(
    'label' => '1300x430',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 430,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 1300x580.
  $styles['1300x580'] = array(
    'label' => '1300x580',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 960x530.
  $styles['960x530'] = array(
    'label' => '960x530',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 530,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 1920x842.
  $styles['1920x842'] = array(
    'label' => '1920x842',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 842,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 230x230.
  $styles['230x230'] = array(
    'label' => '230x230',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 340x230.
  $styles['340x230'] = array(
    'label' => '340x230',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 360x200.
  $styles['360x200'] = array(
    'label' => '360x200',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 370x215.
  $styles['370x215'] = array(
    'label' => '370x215',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 215,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 385x680.
  $styles['385x680'] = array(
    'label' => '385x680',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 385,
          'height' => 680,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 400x230.
  $styles['400x230'] = array(
    'label' => '400x230',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 40x50.
  $styles['40x50'] = array(
    'label' => '40x50',
    'effects' => array(),
  );

  // Exported image style: 440x250.
  $styles['440x250'] = array(
    'label' => '440x250',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 440,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 570x305.
  $styles['570x305'] = array(
    'label' => '570x305',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 305,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 570x330.
  $styles['570x330'] = array(
    'label' => '570x330',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 330,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 655x375.
  $styles['655x375'] = array(
    'label' => '655x375',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 655,
          'height' => 375,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 770x440.
  $styles['770x440'] = array(
    'label' => '770x440',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 90x90.
  $styles['90x90'] = array(
    'label' => '90x90',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 90,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
