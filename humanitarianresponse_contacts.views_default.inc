<?php
/**
 * @file
 * humanitarianresponse_contacts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_contacts_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no contacts';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = '';
  $handler->display->display_options['fields']['field_contact_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Operational Presence';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_clusters' => 'field_clusters',
    'field_organizations' => 'field_organizations',
    'field_locations' => 'field_locations',
    'field_contact_first_name' => 'field_contact_first_name',
    'field_contact_lastname' => 'field_contact_lastname',
    'field_contact_job_title' => 'field_contact_job_title',
    'field_contact_email' => 'field_contact_email',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_clusters' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organizations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cluster(s) */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = 'Cluster';
  $handler->display->display_options['fields']['field_clusters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_clusters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_clusters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_clusters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_clusters']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_clusters']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clusters']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_clusters']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_clusters']['field_api_classes'] = 0;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organizations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_organizations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organizations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organizations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organizations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organizations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organizations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_organizations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_organizations']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_contact_first_name']['id'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['table'] = 'field_data_field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['field'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_first_name']['field_api_classes'] = 0;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_contact_lastname']['id'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['table'] = 'field_data_field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['field'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['label'] = 'Last Name';
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_lastname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_lastname']['field_api_classes'] = 0;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['label'] = 'Job Title';
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_job_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_job_title']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_email']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster(s) (field_clusters)';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'coordination/operational-presence';

  /* Display: Contacts per term */
  $handler = $view->new_display('page', 'Contacts per term', 'page_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['path'] = 'taxonomy/term/%/contacts';

  /* Display: Contacts Block per term */
  $handler = $view->new_display('block', 'Contacts Block per term', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
    'coordination_hubs' => 'coordination_hubs',
    'funding' => 'funding',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['block_description'] = 'Contacts Block per term';
  $export['contacts'] = $view;

  return $export;
}
