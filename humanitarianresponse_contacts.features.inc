<?php
/**
 * @file
 * humanitarianresponse_contacts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_contacts_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_contacts_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_contacts_node_info() {
  $items = array(
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('First name'),
      'help' => '',
    ),
  );
  return $items;
}
