<?php
/**
 * @file
 * humanitarianresponse_contacts.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function humanitarianresponse_contacts_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'csv_contacts';
  $feeds_importer->config = array(
    'name' => 'CSV Contacts',
    'description' => 'Import contacts from a CSV file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'contact',
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Cluster',
            'target' => 'field_clusters',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Salutation',
            'target' => 'field_salutation',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'First name',
            'target' => 'field_contact_first_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Last name',
            'target' => 'field_contact_lastname',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Email',
            'target' => 'field_contact_email',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Telephones',
            'target' => 'field_telephones',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Organization',
            'target' => 'field_organizations',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Job Title',
            'target' => 'field_contact_job_title',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Location',
            'target' => 'field_locations',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Coordination Hub',
            'target' => 'field_coordination_hubs',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Fundings',
            'target' => 'field_fundings',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Themes',
            'target' => 'field_themes',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Emergencies',
            'target' => 'field_emergencies',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['csv_contacts'] = $feeds_importer;

  return $export;
}
