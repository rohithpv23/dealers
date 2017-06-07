<?php
/**
 * @file
 * dealers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dealers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dealers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
