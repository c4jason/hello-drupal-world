<?php
/**
 * @file
 * hello_world.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hello_world_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function hello_world_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
