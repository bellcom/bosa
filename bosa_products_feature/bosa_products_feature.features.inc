<?php
/**
 * @file
 * bosa_products_feature.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function bosa_products_feature_commerce_product_default_types() {
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
  );
  return $items;
}
