<?php
/**
 * @file
 * bosa_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bosa_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|offer|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_alder',
      1 => 'field_diplom',
      2 => 'field_forplejning',
      3 => 'field_husk',
      4 => 'field_knaptekst',
      5 => 'field_m_dested',
      6 => 'field_offer_type',
      7 => 'field_offer_price_description',
      8 => 'field_offer_images',
      9 => 'field_phone',
      10 => 'field_offer_email',
      11 => 'field_varighed',
      12 => 'field_sikkerhed',
      13 => 'field_subtitle',
      14 => 'field_turledere',
      15 => 'field_offer_url',
      16 => 'field_offer_you_get',
      17 => 'field_extra_description',
      18 => 'field_asterix_extra_description',
      19 => 'field_seller_name',
      20 => 'field_geografi_kategori',
      21 => 'field_sale_kategori',
      22 => 'title_field',
      23 => 'language',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_information|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_node|node|offer|form';
  $field_group->group_name = 'group_node';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Node',
    'weight' => '0',
    'children' => array(
      0 => 'group_information',
      1 => 'group_products',
      2 => 'group_others',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_node|node|offer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_products|node|offer|form';
  $field_group->group_name = 'group_products';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_node';
  $field_group->data = array(
    'label' => 'Products',
    'weight' => '2',
    'children' => array(
      0 => 'field_reference',
      1 => 'field_activity_reference',
      2 => 'field_bundle_discount',
      3 => 'field_pakke_beskrivelse',
      4 => 'field_activity_weeks',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_products|node|offer|form'] = $field_group;

  return $export;
}
