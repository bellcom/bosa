<?php

/**
 * admin page form for map_search module
 *
 * @return array
 */
function map_search_admin_page_form(){
  $form = array();

  $form['intro'] = array(
    '#title' => 'Configure something',
    '#type' => 'item',
  );

  $vocabularies = map_search_vocabulary_fetch();
  $selected_vocabularies = unserialize(variable_get('map_search_vocabularies'));
  $selected_links = unserialize(variable_get('map_search_vocabularies_links'));

  // show configuration options for each vocabulary
  foreach( $vocabularies as $vocabulary ) {
    $selected_vocabulary = 0;
    if(isset($selected_vocabularies[$vocabulary['vid']])) {
      $selected_vocabulary = 1;
    }

    $selected_link = 0;
    if(isset($selected_links[$vocabulary['vid']])) {
      $selected_link = 1;
    }
    
    $form['vocabulary'][$vocabulary['vid']] = array(
      '#title' => $vocabulary['name'],
      '#type' => 'fieldset',
      '#description' => t('Machine name: ') . $vocabulary['machine_name'],
    );
    $form['vocabulary'][$vocabulary['vid']]['use_map_search-'.$vocabulary['vid']] = array(
      '#title' => t('Use this vocabulary with map search'),
      '#type' => 'checkbox',
      '#default_value' => $selected_vocabulary,
    );
    $form['vocabulary'][$vocabulary['vid']]['link-'.$vocabulary['vid']] = array(
      '#title' => t('Link the term to the termpage'),
      '#type' => 'checkbox',
      '#default_value' => $selected_link,
    );
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

function map_search_admin_term_page_form() {
  $selected_vocabularies = unserialize(variable_get('map_search_vocabularies'));

  foreach( $selected_vocabularies as $key => $value ) {
    // get settings
    $v_settings = unserialize(variable_get('map_search_vocabulary_settings_'.$key));
    
    // show options for each term
    $terms = map_search_fetch_terms($key);
    $v_entity = entity_load('taxonomy_vocabulary', array($key));
    $v_entity = reset($v_entity);
    
    $form['vocabulary'][$key] = array(
      '#title' => $v_entity->name,
      '#type' => 'fieldset',
    );


    $form['vocabulary'][$key]['image-'.$key] = array(
      '#title' => t('Image url'),
      '#type' => 'textfield',
      '#default_value' => $v_settings['image'],
    );

    foreach( $terms as $term ){
      $form['vocabulary'][$key]['map-'.$key.'-'.$term['tid']] = array(
        '#title' => $term['name'],
        '#type' => 'textfield',
        '#maxlength' => 400,
        '#description' => t('image mapping for image'),
        '#default_value' => $v_settings['maps'][$term['tid']],
      );
      $form['vocabulary'][$key]['link_url-'.$key.'-'.$term['tid']] = array(
        '#title' => t('link url'),
        '#type' => 'textfield',
        '#description' => t('Insert custom link, if havent selected "link to term page"'),
        '#default_value' => $v_settings['urls'][$term['tid']],
      );
    }
  }
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * submit handler for vocabulary form
 */
function map_search_admin_page_form_submit(&$form, $form_state) {
  $selected_vocabularies = array();
  $selected_links = array();

  foreach($form_state['values'] as $key => $value) {
    if(strstr($key, 'use_map_search') && $value === 1) {
      $form_id = explode('-', $key);
      $selected_vocabularies[$form_id[1]] = $form_id[1]; 
    }

    if(strstr($key, 'link') && $value === 1) {
      $form_id = explode('-', $key);
      $selected_links[$form_id[1]] = $form_id[1]; 
    }

  }
  variable_set('map_search_vocabularies', serialize($selected_vocabularies));
  variable_set('map_search_vocabularies_links', serialize($selected_links));
}

/** 
 * submit handler for term form
 */
function map_search_admin_term_page_form_submit(&$form, $form_state) {
  $selected_vocabularies = unserialize(variable_get('map_search_vocabularies'));

  $urls = array();
  foreach($form_state['values'] as $key => $value) {
    
    $form_id = explode('-', $key);
    
    if(strstr($key, 'link_url')) {
      $urls[$form_id[1]][$form_id[2]] = $value;
    }
    if(strstr($key, 'map')) {
      $maps[$form_id[1]][$form_id[2]] = $value;
    }
    if(strstr($key, 'image')) {
      $image_url[$form_id[1]]['image'] = $value;
    }

    $v_settings = array();
    foreach($selected_vocabularies as $vid) {
      if(!isset($urls[$vid]) || !isset($maps[$vid])){
        continue;
      }
      
      $v_settings[$vid]['urls'] = $urls[$vid];
      $v_settings[$vid]['maps'] = $maps[$vid];
      $v_settings[$vid]['image'] = $image_url[$vid];
      // save settings
      variable_set('map_search_vocabulary_settings_'.$vid, serialize($v_settings[$vid]));
    }
  }
}
