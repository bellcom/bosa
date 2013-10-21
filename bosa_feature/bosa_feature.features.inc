<?php
/**
 * @file
 * bosa_feature.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function bosa_feature_commerce_product_default_types() {
  $items = array(
    'offer' => array(
      'type' => 'offer',
      'name' => 'Produkt',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
    'offer_extras_custom' => array(
      'type' => 'offer_extras_custom',
      'name' => 'Offer extras',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
    'produkt_uden_lager' => array(
      'type' => 'produkt_uden_lager',
      'name' => 'Produkt uden lager',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
    'produkt_uden_lager_dato' => array(
      'type' => 'produkt_uden_lager_dato',
      'name' => 'Produkt uden lager/dato',
      'description' => 'Produkt der ikke har lagerstyring / dato',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function bosa_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bosa_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bosa_feature_image_default_styles() {
  $styles = array();

  // Exported image style: offer_list.
  $styles['offer_list'] = array(
    'name' => 'offer_list',
    'effects' => array(
      1 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '284',
          'height' => '174',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: offer_view_first.
  $styles['offer_view_first'] = array(
    'name' => 'offer_view_first',
    'effects' => array(
      2 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '554',
          'height' => '313',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: offer_view_second.
  $styles['offer_view_second'] = array(
    'name' => 'offer_view_second',
    'effects' => array(
      5 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '341',
          'height' => '247',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: offer_view_third.
  $styles['offer_view_third'] = array(
    'name' => 'offer_view_third',
    'effects' => array(
      6 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '199',
          'height' => '247',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bosa_feature_node_info() {
  $items = array(
    'offer' => array(
      'name' => t('Produktvisning'),
      'base' => 'node_content',
      'description' => t('A content type used to represent offers submitted to the site by visitors, published after an approval from reviewer.'),
      'has_title' => '1',
      'title_label' => t('Produkt navn'),
      'help' => '',
    ),
    'offer_types' => array(
      'name' => t('Offer types'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
