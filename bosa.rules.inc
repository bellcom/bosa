<?php
/**
 * @file
 * Rules allowing for quickpay specific operations on orders.
 */

/**
 * Implements hook_rules_action_info().
 */
function bosa_rules_action_info() {
  $actions = array();

  $actions['bosa_quickpay_capture_action'] = array(
    'label' => t('Capture a prior authorized QuickPay transaction.'),
    'parameter' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Order', array(), array('context' => 'a drupal commerce order')),
      ),
    ),
    'group' => t('Quickpay Actions'),
  );
  return $actions;
}

function bosa_quickpay_capture_action($order) {
  if ($transaction = commerce_payment_fetch_last_payment_transaction($order->order_id)) {
    // Found transaction, now extract information.
    $amount = commerce_currency_amount_to_decimal($transaction->amount, $transaction->currency_code);
    $payment_method = commerce_payment_method_instance_load($transaction->instance_id);
    $qp = new Quickpay($payment_method['settings']);
    $txn = $qp->transaction($transaction->remote_id);
    $args = array(
      '@amount' => $amount,
      '@tid' => $transaction->remote_id,
      '@oid' => $order->order_id,
    );
    $txn->capture($amount);
    $transaction->payload[REQUEST_TIME] = $txn;
    if ($txn->success()) {
      $transaction->status = COMMERCE_PAYMENT_STATUS_SUCCESS;
      watchdog('commerce_quickpay', 'Captured @amount on transaction @tid from order @oid.', $args, WATCHDOG_NOTICE);
    }
    else {
      $transaction->status = COMMERCE_PAYMENT_STATUS_FAILURE;
      watchdog('commerce_quickpay', 'Failed to capture @amount on transaction @tid from order @oid.', $args, WATCHDOG_ERROR);
    }
    commerce_payment_transaction_save($transaction);
    return $txn->success();
  }
  else {
    watchdog('commerce_quickpay', 'Attempt to capture transaction from order @oid failed (Transaction not found).', array('@oid' => $order->order_id), WATCHDOG_ERROR);
    return FALSE;
  }
}
