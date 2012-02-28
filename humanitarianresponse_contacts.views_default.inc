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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_salutation']['id'] = 'field_salutation';
  $handler->display->display_options['fields']['field_salutation']['table'] = 'field_data_field_salutation';
  $handler->display->display_options['fields']['field_salutation']['field'] = 'field_salutation';
  $handler->display->display_options['fields']['field_salutation']['label'] = '';
  $handler->display->display_options['fields']['field_salutation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_salutation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_salutation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_salutation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_salutation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_salutation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_salutation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_salutation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_salutation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_salutation']['field_api_classes'] = 0;
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
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_contact_lastname']['id'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['table'] = 'field_data_field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['field'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['label'] = '';
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
  $handler->display->display_options['fields']['field_contact_lastname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_lastname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_lastname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_lastname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_lastname']['field_api_classes'] = 0;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['label'] = '';
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
  $handler->display->display_options['fields']['field_contact_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_job_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_job_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_job_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_job_title']['field_api_classes'] = 0;
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
  /* Field: Content: Organization */
  $handler->display->display_options['fields']['field_contact_organization']['id'] = 'field_contact_organization';
  $handler->display->display_options['fields']['field_contact_organization']['table'] = 'field_data_field_contact_organization';
  $handler->display->display_options['fields']['field_contact_organization']['field'] = 'field_contact_organization';
  $handler->display->display_options['fields']['field_contact_organization']['label'] = '';
  $handler->display->display_options['fields']['field_contact_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_organization']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_organization']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_organization']['field_api_classes'] = 0;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_contact_cluster']['id'] = 'field_contact_cluster';
  $handler->display->display_options['fields']['field_contact_cluster']['table'] = 'field_data_field_contact_cluster';
  $handler->display->display_options['fields']['field_contact_cluster']['field'] = 'field_contact_cluster';
  $handler->display->display_options['fields']['field_contact_cluster']['label'] = '';
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_cluster']['field_api_classes'] = 0;
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_contact_office']['id'] = 'field_contact_office';
  $handler->display->display_options['fields']['field_contact_office']['table'] = 'field_data_field_contact_office';
  $handler->display->display_options['fields']['field_contact_office']['field'] = 'field_contact_office';
  $handler->display->display_options['fields']['field_contact_office']['label'] = '';
  $handler->display->display_options['fields']['field_contact_office']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_office']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_office']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_office']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_office']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_office']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_office']['field_api_classes'] = 0;
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

  /* Display: Coordination */
  $handler = $view->new_display('panel_pane', 'Coordination', 'panel_pane_1');
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
    'coordination_hubs' => 'coordination_hubs',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_contact_office_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Office (field_contact_office)',
    ),
  );

  /* Display: Cluster */
  $handler = $view->new_display('panel_pane', 'Cluster', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Cluster contact';
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
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_contact_cluster_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Cluster (field_contact_cluster)',
    ),
  );

  /* Display: Funding */
  $handler = $view->new_display('panel_pane', 'Funding', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Funding contact';
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
    'funding_mechanisms' => 'funding_mechanisms',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_contact_funding_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Funding (field_contact_funding)',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['path'] = 'coordination/contacts';
  $translatables['contacts'] = array(
    t('Master'),
    t('Contacts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Coordination'),
    t('All'),
    t('View panes'),
    t('Cluster'),
    t('Cluster contact'),
    t('Funding'),
    t('Funding contact'),
    t('Page'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
  );
  $export['contacts'] = $view;

  return $export;
}
