<?php
// Plugin definition
$plugin = array(
  'title' => t('Layout Two Columns'),
  'icon' => 'left-sidebar.png',
  'category' => t('Bookingcar Layouts'),
  'theme' => 'left_sidebar',
  'regions' => array(
    'feature' => t('Feature'),
    'content_top' => t('Content Top'),
    'sidebar' => t('Sidebar'),
    'contentmain' => t('Content'),
    'contentmain_bottom' => t('Content Bottom'),
  ),
);
