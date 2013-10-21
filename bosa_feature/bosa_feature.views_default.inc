<?php
/**
 * @file
 * bosa_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bosa_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bundle_offer_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'bundle offer view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'bundle offer view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_view_second',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_offer_images']['multi_type'] = 'ul';
  /* Felt: Indhold: Tårne kategori */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tårne kategori */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['label'] = '';
  $handler->display->display_options['fields']['field_offer_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_offer_type']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class=[field_offer_type]>[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_view_second',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_offer_images']['multi_type'] = 'ul';
  $export['bundle_offer_view'] = $view;

  $view = new view();
  $view->name = 'bundle_product_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Bundle product view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bundle product view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Denne aktivitet er udløbet';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Felt: Commerce Product: Dato */
  $handler->display->display_options['fields']['field_offer_dato']['id'] = 'field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['field'] = 'field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['label'] = '';
  $handler->display->display_options['fields']['field_offer_dato']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_dato']['alter']['text'] = '<div class="date">[field_offer_dato]</div>';
  $handler->display->display_options['fields']['field_offer_dato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_dato']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offer_dato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Commerce Product: Lager */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = '';
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Commerce Product: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Kontekstuelt filter: Commerce Product: Produkt-ID */
  $handler->display->display_options['arguments']['product_id']['id'] = 'product_id';
  $handler->display->display_options['arguments']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['arguments']['product_id']['field'] = 'product_id';
  $handler->display->display_options['arguments']['product_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['product_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['product_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['product_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['product_id']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value']['id'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_offer_dato_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_offer_dato_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_offer_dato_value']['default_date'] = 'now';
  /* Filterkriterie: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Commerce Product: Dato */
  $handler->display->display_options['fields']['field_offer_dato']['id'] = 'field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['field'] = 'field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['label'] = '';
  $handler->display->display_options['fields']['field_offer_dato']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_dato']['alter']['text'] = '<div class="date">[field_offer_dato]</div>';
  $handler->display->display_options['fields']['field_offer_dato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_dato']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offer_dato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Commerce Product: Lager */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = '';
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Commerce Product: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Felt: Commerce Product: Pris */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer_extras_custom' => 'offer_extras_custom',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Blok 2 */
  $handler = $view->new_display('block', 'Blok 2', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Commerce Product: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Felt: Commerce Product: Dato */
  $handler->display->display_options['fields']['field_offer_dato']['id'] = 'field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['field'] = 'field_offer_dato';
  $handler->display->display_options['fields']['field_offer_dato']['label'] = '';
  $handler->display->display_options['fields']['field_offer_dato']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_dato']['alter']['text'] = '<div class="date">[field_offer_dato]</div>';
  $handler->display->display_options['fields']['field_offer_dato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_dato']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offer_dato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $export['bundle_product_view'] = $view;

  $view = new view();
  $view->name = 'commerce_product_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Commerce Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Produkter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'product_id' => 'product_id',
    'created' => 'created',
    'delete_product' => 'delete_product',
    'edit_product' => 'edit_product',
    'view_product' => 'view_product',
    'commerce_price' => 'commerce_price',
    'sku' => 'sku',
    'status' => 'status',
    'commerce_stock' => 'commerce_stock',
    'title' => 'title',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'product_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_product' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_product' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_product' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sku' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_stock' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Commerce Product: Produkt-ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  /* Felt: Commerce Product: Varenummer */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Felt: Commerce Product: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title';
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Felt: Commerce Product: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['link_to_product'] = 0;
  $handler->display->display_options['fields']['type']['use_raw_value'] = 0;
  /* Felt: Commerce Product: Pris */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Felt: Commerce Product: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Commerce Product: Lager */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = 'Antal';
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['field_offer_date']['id'] = 'field_offer_date';
  $handler->display->display_options['fields']['field_offer_date']['table'] = 'field_data_field_offer_date';
  $handler->display->display_options['fields']['field_offer_date']['field'] = 'field_offer_date';
  /* Felt: Commerce Product: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created date';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Felt: Commerce Product: Redigér-link */
  $handler->display->display_options['fields']['edit_product']['id'] = 'edit_product';
  $handler->display->display_options['fields']['edit_product']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['edit_product']['field'] = 'edit_product';
  $handler->display->display_options['fields']['edit_product']['label'] = 'Rediger';
  /* Felt: Commerce Product: Slet-link */
  $handler->display->display_options['fields']['delete_product']['id'] = 'delete_product';
  $handler->display->display_options['fields']['delete_product']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['delete_product']['field'] = 'delete_product';
  $handler->display->display_options['fields']['delete_product']['label'] = 'Slet';
  /* Felt: Commerce Product: Link */
  $handler->display->display_options['fields']['view_product']['id'] = 'view_product';
  $handler->display->display_options['fields']['view_product']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['view_product']['field'] = 'view_product';
  /* Filterkriterie: Commerce Product: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Søg på titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filterkriterie: Handler mangler eller er i stykker */
  $handler->display->display_options['filters']['field_offer_date_value']['id'] = 'field_offer_date_value';
  $handler->display->display_options['filters']['field_offer_date_value']['table'] = 'field_data_field_offer_date';
  $handler->display->display_options['filters']['field_offer_date_value']['field'] = 'field_offer_date_value';
  $handler->display->display_options['filters']['field_offer_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_date_value']['expose']['operator_id'] = 'field_offer_date_value_op';
  $handler->display->display_options['filters']['field_offer_date_value']['expose']['label'] = 'Dato';
  $handler->display->display_options['filters']['field_offer_date_value']['expose']['operator'] = 'field_offer_date_value_op';
  $handler->display->display_options['filters']['field_offer_date_value']['expose']['identifier'] = 'field_offer_date_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/commerce/commerce-products';
  $export['commerce_product_view'] = $view;

  $view = new view();
  $view->name = 'kategorivisning';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Kategorivisning';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'geografi-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sorteringskriterie: Ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Frontpage category display */
  $handler = $view->new_display('panel_pane', 'Frontpage category display', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front category-view ';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'Produktvisning_paa_kategoriside:block_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Forside overskrift */
  $handler->display->display_options['fields']['field_front_page_title']['id'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['field'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_page_title']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_front_page_title]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Felt: Ord i ordforråd: Forside beskrivelse */
  $handler->display->display_options['fields']['field_front_page_description']['id'] = 'field_front_page_description';
  $handler->display->display_options['fields']['field_front_page_description']['table'] = 'field_data_field_front_page_description';
  $handler->display->display_options['fields']['field_front_page_description']['field'] = 'field_front_page_description';
  $handler->display->display_options['fields']['field_front_page_description']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_description']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_field']['alter']['text'] = '<span class="btn btn-medium">Se alle oplevelser</span>';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['element_wrapper_class'] = 'see-all';
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Forfrem til forside (field_forfrem_til_forside) */
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['id'] = 'field_forfrem_til_forside_value';
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['table'] = 'field_data_field_forfrem_til_forside';
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['field'] = 'field_forfrem_til_forside_value';
  $handler->display->display_options['filters']['field_forfrem_til_forside_value']['operator'] = 'not empty';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );

  /* Display: Category list */
  $handler = $view->new_display('block', 'Category list', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'category-list';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Felt: Ord i ordforråd: Forside overskrift */
  $handler->display->display_options['fields']['field_front_page_title']['id'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['table'] = 'field_data_field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['field'] = 'field_front_page_title';
  $handler->display->display_options['fields']['field_front_page_title']['label'] = '';
  $handler->display->display_options['fields']['field_front_page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_page_title']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['field_front_page_title']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_front_page_title']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Ordforråd */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );

  /* Display: Geografi list */
  $handler = $view->new_display('block', 'Geografi list', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Book og køb oplevelser i:';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Book og køb oplevelser i:';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Navn" alt="test';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_class'] = 'term[tid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ord i ordforråd: Ordforråd */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    7 => '7',
  );
  $export['kategorivisning'] = $view;

  $view = new view();
  $view->name = 'offer_additionlal_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Offer Additional Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="additional-header">Se også vores andre tilbud</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Felt: Indhold: Tårne kategori */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['label'] = '';
  $handler->display->display_options['fields']['field_offer_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_type']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="offer-subtitle">[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tilknyt produkt */
  $handler->display->display_options['fields']['field_reference']['id'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['table'] = 'field_data_field_reference';
  $handler->display->display_options['fields']['field_reference']['field'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['label'] = '';
  $handler->display->display_options['fields']['field_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reference']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 0,
  );
  $handler->display->display_options['fields']['field_reference']['delta_offset'] = '0';
  /* Felt: Indhold: Beskrivelse for prisen */
  $handler->display->display_options['fields']['field_offer_price_description']['id'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['table'] = 'field_data_field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['field'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['label'] = '';
  $handler->display->display_options['fields']['field_offer_price_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_price_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_price_description']['empty'] = 'Pris';
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_offer_you_get']['id'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['table'] = 'field_data_field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['field'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['alter']['nl2br'] = TRUE;
  /* Felt: Indhold: Varighed */
  $handler->display->display_options['fields']['field_varighed']['id'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['table'] = 'field_data_field_varighed';
  $handler->display->display_options['fields']['field_varighed']['field'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['label'] = '';
  $handler->display->display_options['fields']['field_varighed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_varighed']['alter']['text'] = '<div class="varighed"><span class="etikette">Varighed:</span>[field_varighed]</div>';
  $handler->display->display_options['fields']['field_varighed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alder */
  $handler->display->display_options['fields']['field_alder']['id'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['table'] = 'field_data_field_alder';
  $handler->display->display_options['fields']['field_alder']['field'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['label'] = '';
  $handler->display->display_options['fields']['field_alder']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_alder']['alter']['text'] = '<div class="alderskrav"><span class="etikette">Alderskrav:</span>[field_alder]</div>';
  $handler->display->display_options['fields']['field_alder']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alder']['type'] = 'text_plain';
  /* Felt: Indhold: Diplom */
  $handler->display->display_options['fields']['field_diplom']['id'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['table'] = 'field_data_field_diplom';
  $handler->display->display_options['fields']['field_diplom']['field'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['label'] = '';
  $handler->display->display_options['fields']['field_diplom']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_diplom']['alter']['text'] = '<div class="diplom"><span class="etikette">Diplom:</span>[field_diplom]</div>';
  $handler->display->display_options['fields']['field_diplom']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Forplejning */
  $handler->display->display_options['fields']['field_forplejning']['id'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['table'] = 'field_data_field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['field'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['label'] = '';
  $handler->display->display_options['fields']['field_forplejning']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_forplejning']['alter']['text'] = '<div class="forplejning"><span class="etikette">Forplejning:</span>[field_forplejning]</div>';
  $handler->display->display_options['fields']['field_forplejning']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Husk */
  $handler->display->display_options['fields']['field_husk']['id'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['table'] = 'field_data_field_husk';
  $handler->display->display_options['fields']['field_husk']['field'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['label'] = '';
  $handler->display->display_options['fields']['field_husk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_husk']['alter']['text'] = '<div class="husk"><span class="etikette">Husk:</span>[field_husk]</div>';
  $handler->display->display_options['fields']['field_husk']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Mødested */
  $handler->display->display_options['fields']['field_m_dested']['id'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['table'] = 'field_data_field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['field'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['label'] = '';
  $handler->display->display_options['fields']['field_m_dested']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_m_dested']['alter']['text'] = '<div class="modested"><span class="etikette">Mødested:</span>[field_m_dested]</div>';
  $handler->display->display_options['fields']['field_m_dested']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sikkerhed */
  $handler->display->display_options['fields']['field_sikkerhed']['id'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['table'] = 'field_data_field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['field'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['label'] = '';
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['text'] = '<div class="sikkerhed"><span class="etikette">Sikkerhed:</span>[field_sikkerhed]</div>';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alle taksonomitermer */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<a href=/offers?field_offer_type_tid[]=[term_node_tid-tid] class=[term_node_tid-name]><div class="category"></div></a>';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Contact */
  $handler = $view->new_display('panel_pane', 'Contact', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php print t(\'Contact information\'); ?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Aktør navn */
  $handler->display->display_options['fields']['field_seller_name']['id'] = 'field_seller_name';
  $handler->display->display_options['fields']['field_seller_name']['table'] = 'field_data_field_seller_name';
  $handler->display->display_options['fields']['field_seller_name']['field'] = 'field_seller_name';
  $handler->display->display_options['fields']['field_seller_name']['label'] = '';
  $handler->display->display_options['fields']['field_seller_name']['element_label_colon'] = FALSE;
  /* Felt: Lokation: Adresse */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'locpick' => 0,
    'province_name' => 0,
    'coords' => 0,
  );
  /* Felt: Indhold: Mobil */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Tlf.: +45 [field_phone-value]';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone']['multi_type'] = 'ul';
  /* Felt: Indhold: e-mail */
  $handler->display->display_options['fields']['field_offer_email']['id'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['table'] = 'field_data_field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['field'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['label'] = '';
  $handler->display->display_options['fields']['field_offer_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_email']['alter']['text'] = 'Mail: <a href=mailto:[field_offer_email-email]>[field_offer_email]</a>';
  $handler->display->display_options['fields']['field_offer_email']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_offer_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_email']['hide_empty'] = TRUE;
  /* Felt: Indhold: Web */
  $handler->display->display_options['fields']['field_offer_url']['id'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['table'] = 'field_data_field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['field'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['label'] = '';
  $handler->display->display_options['fields']['field_offer_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offer_url']['alter']['text'] = 'Web: <a href=[field_offer_url-url]>[field_offer_url-title]</a>';
  $handler->display->display_options['fields']['field_offer_url']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_offer_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offer_url']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Additional offers */
  $handler = $view->new_display('block', 'Additional offers', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'additional-offers';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'additional_offers',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_offer_images']['delta_first_last'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';

  /* Display: title */
  $handler = $view->new_display('block', 'title', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'product-view';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  /* Forbindelse: Indhold: Taksonomitermer på node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 'offer_type',
    'geografi' => 0,
    'prices' => 0,
    'sale' => 0,
    'tags' => 0,
    'weeks' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Produkt titel */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_class'] = 'term[tid]';
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => '',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="offer-subtitle">[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subtitle']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['alter']['text'] = '[field_offer_images]';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_view_first',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images_1']['id'] = 'field_offer_images_1';
  $handler->display->display_options['fields']['field_offer_images_1']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images_1']['settings'] = array(
    'image_style' => 'offer_view_second',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images_1']['delta_offset'] = '1';
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images_2']['id'] = 'field_offer_images_2';
  $handler->display->display_options['fields']['field_offer_images_2']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_2']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images_2']['settings'] = array(
    'image_style' => 'offer_view_third',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images_2']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images_2']['delta_offset'] = '2';

  /* Display: extra description */
  $handler = $view->new_display('block', 'extra description', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: * Ved ekstra info */
  $handler->display->display_options['fields']['field_asterix_extra_description']['id'] = 'field_asterix_extra_description';
  $handler->display->display_options['fields']['field_asterix_extra_description']['table'] = 'field_data_field_asterix_extra_description';
  $handler->display->display_options['fields']['field_asterix_extra_description']['field'] = 'field_asterix_extra_description';
  $handler->display->display_options['fields']['field_asterix_extra_description']['label'] = '';
  $handler->display->display_options['fields']['field_asterix_extra_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_asterix_extra_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_asterix_extra_description']['alter']['text'] = '*';
  $handler->display->display_options['fields']['field_asterix_extra_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asterix_extra_description']['empty_zero'] = TRUE;
  /* Felt: Indhold: Ekstra beskrivelse */
  $handler->display->display_options['fields']['field_extra_description']['id'] = 'field_extra_description';
  $handler->display->display_options['fields']['field_extra_description']['table'] = 'field_data_field_extra_description';
  $handler->display->display_options['fields']['field_extra_description']['field'] = 'field_extra_description';
  $handler->display->display_options['fields']['field_extra_description']['label'] = '';
  $handler->display->display_options['fields']['field_extra_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_extra_description']['alter']['text'] = '<div class="extra_description"><span class="etikette">[field_asterix_extra_description]Ekstra info:</span>[field_extra_description-value] </div>';
  $handler->display->display_options['fields']['field_extra_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_extra_description']['element_default_classes'] = FALSE;

  /* Display: Offer mail view */
  $handler = $view->new_display('page', 'Offer mail view', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'offer_mail_view';
  $handler->display->display_options['display_description'] = 'View used to render mails';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Mødested */
  $handler->display->display_options['fields']['field_m_dested']['id'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['table'] = 'field_data_field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['field'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_m_dested']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_m_dested']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_m_dested']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_m_dested']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images_1']['id'] = 'field_offer_images_1';
  $handler->display->display_options['fields']['field_offer_images_1']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images_1']['settings'] = array(
    'image_style' => 'offer_view_first',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_offer_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images_1']['delta_offset'] = '0';
  /* Felt: Lokation: Adresse */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['address_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['address_1']['element_class'] = 'field';
  $handler->display->display_options['fields']['address_1']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['address_1']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['address_1']['empty'] = '&nbsp';
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'map_link' => 'map_link',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'locpick' => 0,
    'province_name' => 0,
    'country_name' => 0,
    'coords' => 0,
  );
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_offer_you_get']['id'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['table'] = 'field_data_field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['field'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Varighed */
  $handler->display->display_options['fields']['field_varighed']['id'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['table'] = 'field_data_field_varighed';
  $handler->display->display_options['fields']['field_varighed']['field'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_varighed']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_varighed']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_varighed']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_varighed']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Alder */
  $handler->display->display_options['fields']['field_alder']['id'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['table'] = 'field_data_field_alder';
  $handler->display->display_options['fields']['field_alder']['field'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_alder']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_alder']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_alder']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_alder']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Diplom */
  $handler->display->display_options['fields']['field_diplom']['id'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['table'] = 'field_data_field_diplom';
  $handler->display->display_options['fields']['field_diplom']['field'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_diplom']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_diplom']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_diplom']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_diplom']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Forplejning */
  $handler->display->display_options['fields']['field_forplejning']['id'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['table'] = 'field_data_field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['field'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_forplejning']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_forplejning']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_forplejning']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_forplejning']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Husk */
  $handler->display->display_options['fields']['field_husk']['id'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['table'] = 'field_data_field_husk';
  $handler->display->display_options['fields']['field_husk']['field'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_husk']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_husk']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_husk']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_husk']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_husk']['empty'] = '<i> </i> ';
  /* Felt: Indhold: Sikkerhed */
  $handler->display->display_options['fields']['field_sikkerhed']['id'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['table'] = 'field_data_field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['field'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sikkerhed']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_sikkerhed']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Web */
  $handler->display->display_options['fields']['field_offer_url']['id'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['table'] = 'field_data_field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['field'] = 'field_offer_url';
  $handler->display->display_options['fields']['field_offer_url']['label'] = 'Hjemmeside';
  $handler->display->display_options['fields']['field_offer_url']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_url']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_offer_url']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_url']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_offer_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_offer_url']['click_sort_column'] = 'url';
  /* Felt: Indhold: e-mail */
  $handler->display->display_options['fields']['field_offer_email']['id'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['table'] = 'field_data_field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['field'] = 'field_offer_email';
  $handler->display->display_options['fields']['field_offer_email']['label'] = 'Mail';
  $handler->display->display_options['fields']['field_offer_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_email']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_offer_email']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_offer_email']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_offer_email']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Mobil */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Telefon';
  $handler->display->display_options['fields']['field_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_class'] = 'field';
  $handler->display->display_options['fields']['field_phone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'offer_mail_view/%';

  /* Display: Product description */
  $handler = $view->new_display('panel_pane', 'Product description', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'udviklingfyn';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tilknyt produkt */
  $handler->display->display_options['fields']['field_reference']['id'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['table'] = 'field_data_field_reference';
  $handler->display->display_options['fields']['field_reference']['field'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['label'] = '';
  $handler->display->display_options['fields']['field_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reference']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 0,
  );
  $handler->display->display_options['fields']['field_reference']['delta_offset'] = '0';
  /* Felt: Indhold: Beskrivelse for prisen */
  $handler->display->display_options['fields']['field_offer_price_description']['id'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['table'] = 'field_data_field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['field'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['label'] = '';
  $handler->display->display_options['fields']['field_offer_price_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_price_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_price_description']['empty'] = 'Pris';
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_offer_you_get']['id'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['table'] = 'field_data_field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['field'] = 'field_offer_you_get';
  $handler->display->display_options['fields']['field_offer_you_get']['alter']['nl2br'] = TRUE;
  /* Felt: Indhold: Varighed */
  $handler->display->display_options['fields']['field_varighed']['id'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['table'] = 'field_data_field_varighed';
  $handler->display->display_options['fields']['field_varighed']['field'] = 'field_varighed';
  $handler->display->display_options['fields']['field_varighed']['label'] = '';
  $handler->display->display_options['fields']['field_varighed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_varighed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_varighed']['alter']['text'] = '<div class="varighed"><span class="etikette">Varighed:</span>[field_varighed]</div>';
  $handler->display->display_options['fields']['field_varighed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alder */
  $handler->display->display_options['fields']['field_alder']['id'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['table'] = 'field_data_field_alder';
  $handler->display->display_options['fields']['field_alder']['field'] = 'field_alder';
  $handler->display->display_options['fields']['field_alder']['label'] = '';
  $handler->display->display_options['fields']['field_alder']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alder']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_alder']['alter']['text'] = '<div class="alderskrav"><span class="etikette">Alderskrav:</span>[field_alder]</div>';
  $handler->display->display_options['fields']['field_alder']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alder']['type'] = 'text_plain';
  /* Felt: Indhold: Diplom */
  $handler->display->display_options['fields']['field_diplom']['id'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['table'] = 'field_data_field_diplom';
  $handler->display->display_options['fields']['field_diplom']['field'] = 'field_diplom';
  $handler->display->display_options['fields']['field_diplom']['label'] = '';
  $handler->display->display_options['fields']['field_diplom']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_diplom']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_diplom']['alter']['text'] = '<div class="diplom"><span class="etikette">Diplom:</span>[field_diplom]</div>';
  $handler->display->display_options['fields']['field_diplom']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Forplejning */
  $handler->display->display_options['fields']['field_forplejning']['id'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['table'] = 'field_data_field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['field'] = 'field_forplejning';
  $handler->display->display_options['fields']['field_forplejning']['label'] = '';
  $handler->display->display_options['fields']['field_forplejning']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_forplejning']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_forplejning']['alter']['text'] = '<div class="forplejning"><span class="etikette">Forplejning:</span>[field_forplejning]</div>';
  $handler->display->display_options['fields']['field_forplejning']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Husk */
  $handler->display->display_options['fields']['field_husk']['id'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['table'] = 'field_data_field_husk';
  $handler->display->display_options['fields']['field_husk']['field'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['label'] = '';
  $handler->display->display_options['fields']['field_husk']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_husk']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_husk']['alter']['text'] = '<div class="husk"><span class="etikette">Husk:</span>[field_husk]</div>';
  $handler->display->display_options['fields']['field_husk']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Mødested */
  $handler->display->display_options['fields']['field_m_dested']['id'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['table'] = 'field_data_field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['field'] = 'field_m_dested';
  $handler->display->display_options['fields']['field_m_dested']['label'] = '';
  $handler->display->display_options['fields']['field_m_dested']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_m_dested']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_m_dested']['alter']['text'] = '<div class="modested"><span class="etikette">Mødested:</span>[field_m_dested]</div>';
  $handler->display->display_options['fields']['field_m_dested']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Sikkerhed */
  $handler->display->display_options['fields']['field_sikkerhed']['id'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['table'] = 'field_data_field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['field'] = 'field_sikkerhed';
  $handler->display->display_options['fields']['field_sikkerhed']['label'] = '';
  $handler->display->display_options['fields']['field_sikkerhed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sikkerhed']['alter']['text'] = '<div class="sikkerhed"><span class="etikette">Sikkerhed:</span>[field_sikkerhed]</div>';
  $handler->display->display_options['fields']['field_sikkerhed']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Alle taksonomitermer */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '<a href=/offers?field_offer_type_tid[]=[term_node_tid-tid] class=[term_node_tid-name]><div class="category"></div></a>';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'offer_type' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['offer_additionlal_info'] = $view;

  $view = new view();
  $view->name = 'offers_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Offers List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'field_offer_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'section-box-279-300 panel-pane';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Tilknyt produkt */
  $handler->display->display_options['fields']['field_reference']['id'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['table'] = 'field_data_field_reference';
  $handler->display->display_options['fields']['field_reference']['field'] = 'field_reference';
  $handler->display->display_options['fields']['field_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 0,
  );
  $handler->display->display_options['fields']['field_reference']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reference']['delta_reversed'] = TRUE;
  $handler->display->display_options['fields']['field_reference']['delta_first_last'] = TRUE;
  $handler->display->display_options['fields']['field_reference']['multi_type'] = 'ol';
  /* Felt: Indhold: Tårne kategori */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['label'] = '';
  $handler->display->display_options['fields']['field_offer_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_offer_type']['delta_offset'] = '0';
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="offer-subtitle">[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = 'Køb nu';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class=[field_offer_type]><span class="title">[title]</span><span class="align-span"></span></div>
<div class="offer-subtitle">[field_subtitle]</div>
<div class="buy-now">[field_knaptekst]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<strong>[name]</strong>[body]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '128';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '"<p><strong>"';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'block_teaser';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Beskrivelse for prisen */
  $handler->display->display_options['fields']['field_offer_price_description']['id'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['table'] = 'field_data_field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['field'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['label'] = '';
  $handler->display->display_options['fields']['field_offer_price_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_price_description']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) */
  $handler->display->display_options['filters']['field_offer_type_tid']['id'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid']['field'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['operator_id'] = 'field_offer_type_tid_op';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['label'] = 'Offer type (field_offer_type)';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['operator'] = 'field_offer_type_tid_op';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['identifier'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';

  /* Display: Offers front page view */
  $handler = $view->new_display('panel_pane', 'Offers front page view', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_offer_type_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_offer_dato_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_offer_dato_value_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['label'] = 'Product';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) */
  $handler->display->display_options['filters']['field_offer_type_tid']['id'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid']['field'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['operator_id'] = 'field_offer_type_tid_op';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['label'] = 'Offer type (field_offer_type)';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['operator'] = 'field_offer_type_tid_op';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['identifier'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value']['id'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_offer_dato_value']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_dato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator_id'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['label'] = 'Fra';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['identifier'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value']['form_type'] = 'date_popup';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value_1']['id'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator_id'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['label'] = 'Til';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['identifier'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value_1']['form_type'] = 'date_popup';
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['group'] = 2;
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Tilknyt aktivitet (visning) (field_activity_reference) */
  $handler->display->display_options['filters']['field_activity_reference_nid']['id'] = 'field_activity_reference_nid';
  $handler->display->display_options['filters']['field_activity_reference_nid']['table'] = 'field_data_field_activity_reference';
  $handler->display->display_options['filters']['field_activity_reference_nid']['field'] = 'field_activity_reference_nid';
  $handler->display->display_options['filters']['field_activity_reference_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_activity_reference_nid']['group'] = 2;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Iframe all offers */
  $handler = $view->new_display('page', 'Iframe all offers', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tårne kategori */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['label'] = '';
  $handler->display->display_options['fields']['field_offer_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_offer_type']['delta_offset'] = '0';
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="offer-subtitle">[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Felt: Indhold: Knaptekst */
  $handler->display->display_options['fields']['field_knaptekst']['id'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['table'] = 'field_data_field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['field'] = 'field_knaptekst';
  $handler->display->display_options['fields']['field_knaptekst']['label'] = '';
  $handler->display->display_options['fields']['field_knaptekst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_knaptekst']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knaptekst']['empty'] = 'Køb nu';
  $handler->display->display_options['fields']['field_knaptekst']['type'] = 'text_plain';
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'offer_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class=[field_offer_type]><span class="title">[title]</span><span class="align-span"></span>
<div class="absolute-container"><div class="buy-now">[field_knaptekst]</div></div>
</div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<strong>[name]</strong>[body]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '128';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '"<p><strong>"';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'block_teaser';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Beskrivelse for prisen */
  $handler->display->display_options['fields']['field_offer_price_description']['id'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['table'] = 'field_data_field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['field'] = 'field_offer_price_description';
  $handler->display->display_options['fields']['field_offer_price_description']['label'] = '';
  $handler->display->display_options['fields']['field_offer_price_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_price_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'iframe/all';

  /* Display: iframe offer node id */
  $handler = $view->new_display('page', 'iframe offer node id', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['path'] = 'iframe/offer/%';

  /* Display: Offer date search */
  $handler = $view->new_display('panel_pane', 'Offer date search', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
    ),
    'field_offer_type_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_offer_dato_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_offer_dato_value_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'no results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Din søgning gav ingen resultater';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Refereret produkt */
  $handler->display->display_options['relationships']['field_reference_product_id']['id'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['table'] = 'field_data_field_reference';
  $handler->display->display_options['relationships']['field_reference_product_id']['field'] = 'field_reference_product_id';
  $handler->display->display_options['relationships']['field_reference_product_id']['label'] = 'Product';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  /* Filterkriterie: Indhold: Tårne kategori (field_offer_type) */
  $handler->display->display_options['filters']['field_offer_type_tid']['id'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['filters']['field_offer_type_tid']['field'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['operator_id'] = 'field_offer_type_tid_op';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['operator'] = 'field_offer_type_tid_op';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['identifier'] = 'field_offer_type_tid';
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_offer_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_offer_type_tid']['vocabulary'] = 'offer_type';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value']['id'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_offer_dato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator_id'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['label'] = 'Fra';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['operator'] = 'field_offer_dato_value_op';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['identifier'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_offer_dato_value']['default_date'] = 'now';
  /* Filterkriterie: Commerce Product: Dato (field_offer_dato) */
  $handler->display->display_options['filters']['field_offer_dato_value_1']['id'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['table'] = 'field_data_field_offer_dato';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['field'] = 'field_offer_dato_value';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator_id'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['label'] = 'Til';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['operator'] = 'field_offer_dato_value_1_op';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['identifier'] = 'field_offer_dato_value_1';
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_offer_dato_value_1']['expose']['remember_roles'] = array(
    2 => 0,
    1 => '1',
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_offer_dato_value_1']['form_type'] = 'date_popup';
  /* Filterkriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filterkriterie: Commerce Product: Dato og tidspunkt for sidste ordre (field_dato_og_tidspunkt_for_sids) */
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['id'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['table'] = 'field_data_field_dato_og_tidspunkt_for_sids';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['field'] = 'field_dato_og_tidspunkt_for_sids_value';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['relationship'] = 'field_reference_product_id';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dato_og_tidspunkt_for_sids_value']['default_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Side 3 */
  $handler = $view->new_display('page', 'Side 3', 'page_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_offer_type' => 'field_offer_type',
    'field_subtitle' => 'field_subtitle',
    'field_offer_images' => 'field_offer_images',
    'title' => 'title',
    'edit_node' => 'edit_node',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_offer_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subtitle' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offer_images' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Tårne kategori */
  $handler->display->display_options['fields']['field_offer_type']['id'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['table'] = 'field_data_field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['field'] = 'field_offer_type';
  $handler->display->display_options['fields']['field_offer_type']['label'] = '';
  $handler->display->display_options['fields']['field_offer_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_offer_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_offer_type']['delta_offset'] = '0';
  /* Felt: Indhold: Underoverskrift */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['alter']['text'] = '<div class="offer-subtitle">[field_subtitle]</div>';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['type'] = 'text_plain';
  /* Felt: Indhold: Fotos */
  $handler->display->display_options['fields']['field_offer_images']['id'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['table'] = 'field_data_field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['field'] = 'field_offer_images';
  $handler->display->display_options['fields']['field_offer_images']['label'] = '';
  $handler->display->display_options['fields']['field_offer_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_offer_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_offer_images']['delta_offset'] = '0';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class=[field_offer_type]><span class="title">[title]</span><span class="align-span"></span></div>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger';
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Produkt titel (title_field) */
  $handler->display->display_options['sorts']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['sorts']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['sorts']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'offerlist';
  $export['offers_list'] = $view;

  return $export;
}
