<?php
/**
 * @file
 * bosa_feature.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function bosa_feature_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'book_overnatning_iframe';
  $content->admin_title = 'Turistonline booking';
  $content->admin_description = 'Turistonline iframe';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Turistonline booking',
    'title' => '',
    'body' => '<p><iframe id="iframeprovider0" name="iframeprovider0" src="http://www.touristonline.dk/visitdenmarkbooking/bookingboks/feriehusVDK2.do?language=da&amp;regionId=2&amp;lokalOmraadeId=7&amp;skabelonUrl=http://visitmiddelfart.visitdenmark.com/denmark/tourist-online-skabelon-9&amp;tilbageUrl=http://visitmiddelfart.visitdenmark.com/danmark/middelfart-forside" frameborder="0" marginwidth="0" marginheight="0" scrolling="no" width="285" height="470"></iframe></p>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $export['book_overnatning_iframe'] = $content;

  return $export;
}
