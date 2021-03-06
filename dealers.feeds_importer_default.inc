<?php
/**
 * @file
 * dealers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function dealers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dealers';
  $feeds_importer->config = array(
    'name' => 'Dealers',
    'description' => 'Dealer address and location details',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Adress',
            'target' => 'dealers_address',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Adress line 1',
            'target' => 'dealers_address_1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'City',
            'target' => 'dealers_city',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'State',
            'target' => 'dealers_state',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Country',
            'target' => 'dealers_country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Zip Code',
            'target' => 'dealers_zip',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'dealers',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['dealers'] = $feeds_importer;

  return $export;
}
