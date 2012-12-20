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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_contact_job_title' => 'field_contact_job_title',
    'field_contact_email' => 'field_contact_email',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There are no contacts';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_contact_first_name']['id'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['table'] = 'field_data_field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['field'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_contact_lastname']['id'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['table'] = 'field_data_field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['field'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'invisimail_js_entities';
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'chunk' => 0,
    'link' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Clusters (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  /* Filter criterion: Content: Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Source (field_organizations) */
  $handler->display->display_options['filters']['field_organizations_tid']['id'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['filters']['field_organizations_tid']['field'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organizations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator_id'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['label'] = 'Organization';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['operator'] = 'field_organizations_tid_op';
  $handler->display->display_options['filters']['field_organizations_tid']['expose']['identifier'] = 'field_organizations_tid';
  $handler->display->display_options['filters']['field_organizations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organizations_tid']['vocabulary'] = 'organizations';
  /* Filter criterion: Content: Job Title (field_contact_job_title) */
  $handler->display->display_options['filters']['field_contact_job_title_tid']['id'] = 'field_contact_job_title_tid';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['field'] = 'field_contact_job_title_tid';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['value'] = '';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_job_title_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_job_title_tid']['expose']['operator_id'] = 'field_contact_job_title_tid_op';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['expose']['label'] = 'Job Title';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['expose']['operator'] = 'field_contact_job_title_tid_op';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['expose']['identifier'] = 'field_contact_job_title_tid';
  $handler->display->display_options['filters']['field_contact_job_title_tid']['vocabulary'] = 'job_title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Operational Presence';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p style="text-align: center;">Please note that this contact list can also be exported into Excel by clicking on the following link:</p>
<p style="text-align: center;"><a href="/coordination/operational-presence.xls">Download</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'coordination/operational-presence';

  /* Display: Contacts per term */
  $handler = $view->new_display('page', 'Contacts per term', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['path'] = 'taxonomy/term/%/contacts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Contacts';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Contacts Block per term */
  $handler = $view->new_display('block', 'Contacts Block per term', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Contacts';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_contact_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = '';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'invisimail_js_entities';
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'chunk' => 0,
    'link' => 1,
  );
  /* Field: Content: Telephone(s) */
  $handler->display->display_options['fields']['field_telephones']['id'] = 'field_telephones';
  $handler->display->display_options['fields']['field_telephones']['table'] = 'field_data_field_telephones';
  $handler->display->display_options['fields']['field_telephones']['field'] = 'field_telephones';
  $handler->display->display_options['fields']['field_telephones']['label'] = '';
  $handler->display->display_options['fields']['field_telephones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephones']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['block_description'] = 'Contacts Block per term';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'contacts.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_salutation']['id'] = 'field_salutation';
  $handler->display->display_options['fields']['field_salutation']['table'] = 'field_data_field_salutation';
  $handler->display->display_options['fields']['field_salutation']['field'] = 'field_salutation';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_contact_first_name']['id'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['table'] = 'field_data_field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['field'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_contact_lastname']['id'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['table'] = 'field_data_field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['field'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'chunk' => 0,
    'link' => 1,
  );
  /* Field: Content: Telephone(s) */
  $handler->display->display_options['fields']['field_telephones']['id'] = 'field_telephones';
  $handler->display->display_options['fields']['field_telephones']['table'] = 'field_data_field_telephones';
  $handler->display->display_options['fields']['field_telephones']['field'] = 'field_telephones';
  $handler->display->display_options['fields']['field_telephones']['label'] = 'Telephones';
  $handler->display->display_options['fields']['field_telephones']['delta_offset'] = '0';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: Coordination Hub */
  $handler->display->display_options['fields']['field_coordination_hubs']['id'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['table'] = 'field_data_field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['field'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_coordination_hubs']['delta_offset'] = '0';
  /* Field: Content: Funding */
  $handler->display->display_options['fields']['field_fundings']['id'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['table'] = 'field_data_field_fundings';
  $handler->display->display_options['fields']['field_fundings']['field'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['label'] = 'Fundings';
  $handler->display->display_options['fields']['field_fundings']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_fundings']['delta_offset'] = '0';
  /* Field: Content: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  /* Field: Content: Emergencies */
  $handler->display->display_options['fields']['field_emergencies']['id'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['table'] = 'field_data_field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['field'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_emergencies']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'coordination/operational-presence.xls';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'views_data_export_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Salutation */
  $handler->display->display_options['fields']['field_salutation']['id'] = 'field_salutation';
  $handler->display->display_options['fields']['field_salutation']['table'] = 'field_data_field_salutation';
  $handler->display->display_options['fields']['field_salutation']['field'] = 'field_salutation';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_contact_first_name']['id'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['table'] = 'field_data_field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['field'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_contact_lastname']['id'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['table'] = 'field_data_field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['field'] = 'field_contact_lastname';
  $handler->display->display_options['fields']['field_contact_lastname']['alter']['path'] = 'node/[nid]';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'chunk' => 0,
    'link' => 1,
  );
  /* Field: Content: Telephone(s) */
  $handler->display->display_options['fields']['field_telephones']['id'] = 'field_telephones';
  $handler->display->display_options['fields']['field_telephones']['table'] = 'field_data_field_telephones';
  $handler->display->display_options['fields']['field_telephones']['field'] = 'field_telephones';
  $handler->display->display_options['fields']['field_telephones']['label'] = 'Telephones';
  $handler->display->display_options['fields']['field_telephones']['delta_offset'] = '0';
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_contact_job_title']['id'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['table'] = 'field_data_field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['field'] = 'field_contact_job_title';
  $handler->display->display_options['fields']['field_contact_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: Coordination Hub */
  $handler->display->display_options['fields']['field_coordination_hubs']['id'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['table'] = 'field_data_field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['field'] = 'field_coordination_hubs';
  $handler->display->display_options['fields']['field_coordination_hubs']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_coordination_hubs']['delta_offset'] = '0';
  /* Field: Content: Funding */
  $handler->display->display_options['fields']['field_fundings']['id'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['table'] = 'field_data_field_fundings';
  $handler->display->display_options['fields']['field_fundings']['field'] = 'field_fundings';
  $handler->display->display_options['fields']['field_fundings']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_fundings']['delta_offset'] = '0';
  /* Field: Content: Themes */
  $handler->display->display_options['fields']['field_themes']['id'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['table'] = 'field_data_field_themes';
  $handler->display->display_options['fields']['field_themes']['field'] = 'field_themes';
  $handler->display->display_options['fields']['field_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_themes']['delta_offset'] = '0';
  /* Field: Content: Emergencies */
  $handler->display->display_options['fields']['field_emergencies']['id'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['table'] = 'field_data_field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['field'] = 'field_emergencies';
  $handler->display->display_options['fields']['field_emergencies']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_emergencies']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'coordination/operational-presence.xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page_2' => 0,
    'block_1' => 0,
  );
  $translatables['contacts'] = array(
    t('Master'),
    t('Contacts'),
    t('View all'),
    t('Search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are no contacts'),
    t('Clusters'),
    t('Organization'),
    t('Location'),
    t('First name'),
    t('Last name'),
    t('Job Title'),
    t('Email'),
    t('Page'),
    t('Operational Presence'),
    t('more'),
    t('<p style="text-align: center;">Please note that this contact list can also be exported into Excel by clicking on the following link:</p>
<p style="text-align: center;"><a href="/coordination/operational-presence.xls">Download</a></p>'),
    t('Contacts per term'),
    t('All'),
    t('Contacts Block per term'),
    t('Key Contacts'),
    t('XLS'),
    t('Name'),
    t('Salutation'),
    t('Telephones'),
    t('Coordination Hub'),
    t('Fundings'),
    t('Themes'),
    t('Emergencies'),
    t('XML'),
    t('Funding'),
  );
  $export['contacts'] = $view;

  return $export;
}
