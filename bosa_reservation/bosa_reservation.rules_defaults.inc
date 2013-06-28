<?php

function bosa_reservation_default_rules_configuration(){
  $configs = array();

  $rule = '{ "bosa_cancel_products_with_low_attendance" : {
    "LABEL" : "BOSA Cancel products with low attendance",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "bosa_reservation", "rules", "inmobile_sms" ],
    "ON" : [ "bosa_reservation_product_close_to_deadline" ],
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
            { "mail" : {
                "to" : "[current-order:mail]",
                "subject" : "Aflysning af aktivitet",
                "message" : "[commerce-product:field-cancel-mail-body]",
                "language" : [ "" ]
              }
            },
            { "inmobile_sms_send_sms" : {
                "commerce_order" : [ "current-order" ],
                "commerce_product" : [ "commerce-product" ]
              }
            }
          ]
        }
      }
    ]
  }
}';

  $configs['bosa_cancel_products_with_low_attendance'] = rules_import($rule);

  return $configs;
}
