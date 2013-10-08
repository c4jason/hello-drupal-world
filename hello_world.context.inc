<?php
/**
 * @file
 * hello_world.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hello_world_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'hello_world';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'hello_world_article' => 'hello_world_article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-hello_world-block' => array(
          'module' => 'views',
          'delta' => 'hello_world-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['hello_world'] = $context;

  return $export;
}
