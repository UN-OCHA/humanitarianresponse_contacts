<?php
/**
 * @file
 * humanitarianresponse_contacts.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function humanitarianresponse_contacts_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'operational_presence_map';
  $openlayers_maps->title = 'Operational Presence Map';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '67.76367184130264, 34.70549342249385',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '6594375.301438,3375459.170069,8375052.31205,4794130.414788',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'contacts_openlayers_data' => 'contacts_openlayers_data',
        ),
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'contacts_openlayers_data' => 'contacts_openlayers_data',
    ),
    'layer_weight' => array(
      'contacts_openlayers_data' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
      'operational_presence_map_openlayers_1' => '0',
    ),
    'layer_styles' => array(
      'operational_presence_map_openlayers_1' => 'humanitarianresponse_default',
      'geofield_formatter' => 'default',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'contacts_openlayers_data' => 'humanitarianresponse_default',
    ),
    'layer_styles_select' => array(
      'operational_presence_map_openlayers_1' => 'humanitarianresponse_select',
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'contacts_openlayers_data' => 'humanitarianresponse_select',
    ),
    'layer_activated' => array(
      'contacts_openlayers_data' => 'contacts_openlayers_data',
      'operational_presence_map_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'contacts_openlayers_data' => 'contacts_openlayers_data',
      'operational_presence_map_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'humanitarianresponse_default',
      'select' => 'humanitarianresponse_select',
      'temporary' => 'default',
    ),
  );
  $export['operational_presence_map'] = $openlayers_maps;

  return $export;
}
