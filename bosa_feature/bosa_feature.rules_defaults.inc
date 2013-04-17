<?php
/**
 * @file
 * bosa_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bosa_feature_default_rules_configuration() {
  $items = array();
  $items['rules_bosa_calculate_price'] = entity_import('rules_config', '{ "rules_bosa_calculate_price" : {
      "LABEL" : "Bosa calculate price",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "php", "rules", "commerce_product_reference" ],
      "ON" : [ "commerce_product_calculate_sell_price" ],
      "DO" : [
        { "php_eval" : { "code" : "if(function_exists(\\u0027bosa_lineitem_calculate_sell_price\\u0027))\\r\\n{\\r\\nbosa_lineitem_calculate_sell_price($commerce_line_item);\\r\\n}\\r\\n\\r\\nif(function_exists(\\u0027bosa_bundles_calculate_sell_price\\u0027))\\r\\n{\\r\\nbosa_bundles_calculate_sell_price($commerce_line_item);\\r\\n}" } }
      ]
    }
  }');
  $items['rules_bosa_offer_added'] = entity_import('rules_config', '{ "rules_bosa_offer_added" : {
      "LABEL" : "bosa offer added",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "offer" : "offer" } } } },
        { "AND" : [] },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "helle@visitmiddelfart.dk",
            "subject" : "Der er blevet oprettet en ny event",
            "message" : "Hej,\\r\\n[node:author] har oprettet (eller \\u00e6ndret) [node:title]. Du kan se den her: [site:url]node\\/[node:nid]\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "tth@bellcom.dk",
            "subject" : "offer added",
            "message" : "Hej,\\r\\n[node:author] har oprettet (eller \\u00e6ndret) [node:title]. Du kan se den her: [site:url]node\\/[node:nid]\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_bosa_product_added'] = entity_import('rules_config', '{ "rules_bosa_product_added" : {
      "LABEL" : "bosa product added",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : [ "commerce_product_insert", "commerce_product_update" ],
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "tth@bellcom.dk",
            "subject" : "product added lw",
            "message" : "test\\r\\n",
            "from" : "info@lillebaeltwaters.dk",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "helle@visitmiddelfart.dk",
            "subject" : "Der er blevet oprettet et nyt produkt",
            "message" : "Hej,\\r\\n[commerce-product:creator] har oprettet (eller \\u00e6ndret) et produkt: [commerce-product:title]. Du kan se det her: [commerce-product:edit-url]\\r\\n\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_bosa_update_order'] = entity_import('rules_config', '{ "rules_bosa_update_order" : {
      "LABEL" : "bosa update order",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "php", "rules", "entity" ],
      "ON" : [ "commerce_order_update" ],
      "DO" : [
        { "php_eval" : { "code" : "if ($commerce_order-\\u003Estatus == \\u0022cart\\u0022) {\\r\\n  unset($_SESSION[\\u0027bosa\\u0027][$commerce_order-\\u003Eorder_id]);\\r\\n}\\r\\nif ($commerce_order-\\u003Estatus !== \\u0022cart\\u0022) {\\r\\nbosa_stock_adjust_save($commerce_order);\\r\\n}" } }
      ]
    }
  }');
  $items['rules_gratis'] = entity_import('rules_config', '{ "rules_gratis" : {
      "LABEL" : "Gratis",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-1",
      "REQUIRES" : [ "commerce_payment", "commerce_order", "commerce_checkout" ],
      "ON" : [ "commerce_payment_methods" ],
      "IF" : [
        { "commerce_payment_order_balance_comparison" : { "commerce_order" : [ "commerce_order" ], "value" : "0" } },
        { "AND" : [
            { "commerce_order_compare_total_product_quantity" : {
                "commerce_order" : [ "commerce_order" ],
                "operator" : "\\u003E=",
                "value" : "1"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "commerce_checkout_complete" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  return $items;
}
