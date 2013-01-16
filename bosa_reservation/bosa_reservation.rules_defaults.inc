<?php

// $Id$
/*
 *
 * @author Jesper Mathiassen <jm@bellcom.dk>
 * @copyright Bellcom Open Source aps.
 */


function bosa_reservation_default_rules_configuration() {

  $export = <<< EOF
{ "rules_fulfill_orders_with_min_req" : {
    "LABEL" : "F\u00e6rdig\u00f8r opfyldte ordre",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "bosa_reservation", "rules", "commerce_payment", "entity" ],
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
            { "commerce_payment_capture" : {
                "commerce_order" : [ "current-order" ],
                "amount" : "[current-order:commerce-order-total]"
              }
            }
          ]
        }
      }
    ]
  }
}
EOF;

  return array(
    'rules_fulfill_orders_with_min_req' => rules_import($export),
  );
}