<?php
/**
 * @file
 * bosa_reservation_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bosa_reservation_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bosa_reservation_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'watchdog';
  $view->human_name = 'Bosa reservation log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bosa reservation log';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'wid' => 'wid',
    'severity' => 'severity',
    'message' => 'message',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'wid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'severity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'message' => array(
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
  /* Felt: Hændelseslog: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'watchdog';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Felt: Hændelseslog: Meddelelse */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'watchdog';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['watchdog_message_format'] = 1;
  $handler->display->display_options['fields']['message']['watchdog_message_link'] = 1;
  /* Felt: Hændelseslog: Grad */
  $handler->display->display_options['fields']['severity']['id'] = 'severity';
  $handler->display->display_options['fields']['severity']['table'] = 'watchdog';
  $handler->display->display_options['fields']['severity']['field'] = 'severity';
  $handler->display->display_options['fields']['severity']['watchdog_severity_icon'] = 1;
  /* Filterkriterie: Hændelseslog: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'watchdog';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bosa_reservation' => 'bosa_reservation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'bosa-reservation-log';
  $translatables['bosa_reservation_log'] = array(
    t('Master'),
    t('Bosa reservation log'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Type'),
    t('Meddelelse'),
    t('Grad'),
    t('Page'),
  );
  $export['bosa_reservation_log'] = $view;

  return $export;
}
