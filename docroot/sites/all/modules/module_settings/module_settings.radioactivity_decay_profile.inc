<?php
/**
 * @file
 * module_settings.radioactivity_decay_profile.inc
 */

/**
 * Implements hook_default_radioactivity_decay_profile().
 */
function module_settings_default_radioactivity_decay_profile() {
  $export = array();

  $radioactivity_decay_profile = new stdClass();
  $radioactivity_decay_profile->disabled = FALSE; /* Edit this to true to make a default radioactivity_decay_profile disabled initially */
  $radioactivity_decay_profile->api_version = 1;
  $radioactivity_decay_profile->machine_name = 'one_week';
  $radioactivity_decay_profile->name = 'One week';
  $radioactivity_decay_profile->description = '';
  $radioactivity_decay_profile->enable_decay = 1;
  $radioactivity_decay_profile->granularity = '60';
  $radioactivity_decay_profile->half_life = 60480;
  $radioactivity_decay_profile->cut_off = '10';
  $radioactivity_decay_profile->storage = 'Live';
  $export['one_week'] = $radioactivity_decay_profile;

  return $export;
}
