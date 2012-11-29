<?php
/**
 * @file
 * humanitarianresponse_contacts.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function humanitarianresponse_contacts_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|contact|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'contact';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'teaser_labels' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|contact|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function humanitarianresponse_contacts_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|contact|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'contact';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'teaser_labels',
        1 => 'title',
        2 => 'field_contact_email',
        3 => 'field_telephones',
        4 => 'field_contact_job_title',
        5 => 'field_organizations',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'teaser_labels' => 'ds_content',
      'title' => 'ds_content',
      'field_contact_email' => 'ds_content',
      'field_telephones' => 'ds_content',
      'field_contact_job_title' => 'ds_content',
      'field_organizations' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'article',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|contact|teaser'] = $ds_layout;

  return $export;
}
