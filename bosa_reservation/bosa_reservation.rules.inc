<?php

/*
 *
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */

/**
 * Implements hook_rules_event_info().
 *
 * Declares any meta-data about events for Rules in an associative nested
 * array. See also hook_rules_event_info in the rules.api.php file, and the
 * online documentation at http://drupal.org/node/884554.
 */
function bosa_reservation_rules_event_info() {
  $events = array();

  // Events are, like the other Rules plugins in this example, keyed by their
  // machine name – by default also the callback function. Prefix with your
  // module name to avoid name conflicts.
  $events['bosa_reservation_product_reached_min_attendance'] = array(
    'label' => t('A Product has reached minimum attendance'),
    'group' => t('BOSA'),
    'parameter' => array(
      'commerce_product' => array(
        'type' => 'commerce_product',
        'label' => t('Product which has reached attendance.'),
      )
    ),
  );
  $events['bosa_reservation_update_orders_reached_min_attendance'] = array(
    'label' => t('Order on a product,which has reached minimum attendance, needs update.'),
    'group' => t('BOSA'),
    'parameter' => array(
      'commerce_product' => array(
        'type' => 'commerce_orders',
        'label' => t('Order from the product, which has reached attendance.'),
      )
    ),
  );

  return $events;
}

/**
 * Implements hook_rules_condition_info().
 *
 * Cut'n'paste from rule_example.
 */
function bosa_reservation_rules_condition_info() {
  $conditions = array();

  // Conditions, like actions, are described by an array with keys
  // representing the machine name of the condition (which also by default is
  // the name of the callback function).
  $conditions['bosa_reservation_condition_min_attendance'] = array(
    'label' => t('Minimun attendance for the trip i attained.'),
    'group' => t('BOSA'),
    // Parameters are described identically to how they work for actions.
    'parameter' => array(
      'commerce_product' => array(
        'type' => 'commerce_product',
        'label' => t('Product'),
        'description' => t('The product to test for minimum attendance.'),
      ),
    ),
  );

  return $conditions;
}

/**
 * Implements hook_rules_action_info().
 *
 * Declares any meta-data about actions for Rules in a big, associative, nested
 * array. See also hook_rules_action_info in the rules.api.php file, and the
 * online documentation at http://drupal.org/node/878928.
 */
function bosa_reservation_rules_action_info() {
  $actions = array(
    // The base-level keys in the array are the machine names for the actions,
    // and by default also the function name for the action callback. Prefix
    // with your module name to avoid name conflicts.
    'bosa_reservation_action_get_affected_orders' => array(
      'label' => t('Fetch affected orders from product.'), // Name displayed to admins
      'group' => t('BOSA'), // Used for grouping actions in select lists
      'parameter' => array(
        'commerce_product' => array(
          'type' => 'commerce_product',
          'label' => t('Product'),
          'description' => t('The product from which to get affected orders.'),
        ),
      ),
      'provides' => array(
        'commerce_orders' => array(
          'type' => 'list<commerce_order>',
          'label' => t('Affected Orders'),
        )
      )
    ),
    'bosa_reservation_action_order_id' => array(
      'label' => t('Dump Order id to log. (FOR TESTING)'), // Name displayed to admins
      'group' => t('BOSA'), // Used for grouping actions in select lists
      'parameter' => array(
        'commerce_order' => array(
          'save' => TRUE,
          'type' => 'commerce_order',
          'label' => t('Order'),
          'description' => t('The order to dump.'),
        ),
      ),
    ),
  );


  // Don't forget to return the array of action information!
  return $actions;
}

/* * *********** CALLBACKS ******************** */

/**
 * Rule callback to check attendance for a given product.
 *
 * @param commerce_product $product
 */
function bosa_reservation_condition_min_attendance($product) {
  $info = _bosa_reservation_product_info($product->product_id);
  if (is_array($info)) {
    return $info['count'] >= $info['min'];
  }
  else {
    return FALSE;
  }
}

function bosa_reservation_action_get_affected_orders($product) {
  $info = _bosa_reservation_product_info($product->product_id);
  $orders = commerce_order_load_multiple($info['orders']);

  return array('commerce_orders' => array_values($orders));
//  error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $product = ' . print_r($product, 1));
}

function bosa_reservation_action_order_id($order) {
  error_log(basename(__FILE__) . ':' . __LINE__ . ' Var: $order = ' . print_r($order->order_id, 1));
  return $order;
}