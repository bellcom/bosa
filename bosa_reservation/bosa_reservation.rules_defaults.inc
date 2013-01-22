<?php

/**
 * @file
 * Default rules for reservations.
 *
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bosa_reservation_default_rules_configuration() {
  $configs = array();
  $export = <<< EOF
{ "rules_fulfill_orders_with_min_req" : {
    "LABEL" : "F\u00e6rdig\u00f8r opfyldte ordre",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "bosa_reservation", "commerce_quickpay", "entity" ],
    "ON" : [ "commerce_product_update" ],
    "IF" : [
      { "bosa_reservation_condition_min_attendance" : { "commerce_product" : [ "commerce_product" ] } }
    ],
    "DO" : [
      { "bosa_reservation_action_get_affected_orders" : {
          "USING" : { "commerce_product" : [ "commerce_product" ] },
          "PROVIDE" : { "commerce_orders" : { "commerce_orders" : "Affected Orders" } }
        }
      },
      { "LOOP" : {
          "USING" : { "list" : [ "commerce-orders" ] },
          "ITEM" : { "current_order" : "Aktuelt element" },
          "DO" : [
            { "commerce_quickpay_capture_action" : { "commerce_order" : [ "current-order" ] } }
          ]
        }
      }
    ]
  }
}
EOF;
  $configs['rules_fulfill_orders_with_min_req'] = rules_import($export);
  $export = <<< EOF
{ "rules_renew_orders_about_to_expire_" : {
    "LABEL" : "Renew orders about to expire.",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "commerce_quickpay", "bosa_reservation" ],
    "ON" : [ "bosa_reservation_order_is_about_to_expire" ],
    "DO" : [
      { "commerce_quickpay_renew_action" : { "commerce_order" : [ "commerce_order" ] } }
    ]
  }
}
EOF;
  $configs['rules_renew_orders_about_to_expire_'] = rules_import($export);
  return $configs;
}
