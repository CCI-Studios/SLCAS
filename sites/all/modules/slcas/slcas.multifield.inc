<?php
/**
 * @file
 * slcas.multifield.inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function slcas_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'children';
  $multifield->label = 'Children';
  $multifield->description = '';
  $export['children'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'mother';
  $multifield->label = 'Mother';
  $multifield->description = '';
  $export['mother'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'other_adults';
  $multifield->label = 'Other Adults';
  $multifield->description = '';
  $export['other_adults'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'parent';
  $multifield->label = 'Father';
  $multifield->description = 'parent';
  $export['parent'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'past_marriage';
  $multifield->label = 'Past Marriage';
  $multifield->description = '';
  $export['past_marriage'] = $multifield;

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->api_version = 1;
  $multifield->machine_name = 'sibling';
  $multifield->label = 'Sibling';
  $multifield->description = '';
  $export['sibling'] = $multifield;

  return $export;
}
