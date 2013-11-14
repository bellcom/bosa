<?php
/**
 * @file
 * bosa_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bosa_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'offer_publisher';
  $page->task = 'page';
  $page->admin_title = '';
  $page->admin_description = '';
  $page->path = 'offer-publisher';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_offer_publisher_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'offer_publisher';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'offer-publisher',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
              2 => 7,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_25_75_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'nav' => NULL,
      'top' => NULL,
      'main_content_col_1' => NULL,
      'main_content_col_2' => NULL,
      'bottom_row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Offer publisher';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'main_content_col_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Aktør muligheder',
      'body' => '<h2>&nbsp;</h2><h2>Tilføj:</h2><p><a href="#overlay=admin/commerce/products/add/offer">Produkter</a><br /> <a href="#overlay=admin/commerce/products/add/offer-extras-custom">Tilvalgs produkter</a><br /> <a href="/admin/commerce/products/manage_repeater">Gentagne produkter</a><br /> <a href="#overlay=node/add/offer ">Produkt visning</a></p><h2>Se:</h2><p><a href="#overlay=admin/commerce/products">Produkter</a><br /> <a href="#overlay=offerlist">Produkt visninger</a><br /><a href="#overlay=admin/commerce/reports_products">Salgsopgørelse</a><br /> <a href="#overlay=bosa/products/permissions">Tilladelser</a></p><p>&nbsp;</p><p><a href="/content/manual">Se manual</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['main_content_col_1'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'main_content_col_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Offer Admin links',
      'title' => 'Admin links',
      'body' => '<p><a href="/admin/bosa/webform">Spørgeskemaer</a></p>

<p><a href="/admin/commerce/products/add/butik-produkt">Opret butik produkt</a></p>

<p><a href="/node/add/butik-produkt-visning">Opret butik produktvisning</a></p>
<p><a href="/admin/bosa">BOSA indstillinger</a></p>
<h2>SEO</h2>
<p><a href="/admin/config/search/metatags">Metatags</a></p>
<p><a href="/admin/config/search/xmlsitemap">XML sitemap</a></p>
<p><a href="/admin/config/system/googleanalytics">Google analytics</a></p>
<p><a href="/admin/config/system/globalredirect">Global redirect</a></p>


',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['main_content_col_1'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'main_content_col_2';
    $pane->type = 'block';
    $pane->subtype = 'bosa_attendees-bosa_attendees';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Deltagerliste',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['main_content_col_2'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_offer_publisher_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'offer_publisher';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Aktivitet',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_25_75_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'nav' => NULL,
      'top' => NULL,
      'main_content_col_1' => NULL,
      'main_content_col_2' => NULL,
      'bottom_row' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Offer publisher';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'main_content_col_2';
    $pane->type = 'block';
    $pane->subtype = 'bosa_attendees-bosa_attendees';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Deltagerliste',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['main_content_col_2'][0] = 'new-4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['offer_publisher'] = $page;

  return $pages;

}
