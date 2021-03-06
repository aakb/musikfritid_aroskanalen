<?php
/**
 * @file
 * ik_mrss_feed_importer.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ik_mrss_feed_importer_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_mrss_text_feed'
  $field_instances['node-media_rss_slide_import-field_ik_mrss_text_feed'] = array(
    'bundle' => 'media_rss_slide_import',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_mrss_text_feed',
    'label' => 'Kun tekst feed',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_og_department_ref'
  $field_instances['node-media_rss_slide_import-field_ik_og_department_ref'] = array(
    'bundle' => 'media_rss_slide_import',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg hvilken afdeling de importerede slides skal tilhøre (Du kan kun tilknytte til den/de afdeling(er) som du er en del af).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_og_department_ref',
    'label' => 'Afdeling',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'og_complex',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_slide_category'
  $field_instances['node-media_rss_slide_import-field_ik_slide_category'] = array(
    'bundle' => 'media_rss_slide_import',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg en hovedkategori som skal knyttes til de importerede slides',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_slide_category',
    'label' => 'Kategori',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_slide_color_theme'
  $field_instances['node-media_rss_slide_import-field_ik_slide_color_theme'] = array(
    'bundle' => 'media_rss_slide_import',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Vælg et farvetema som skal benyttes for de importerede slides.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_slide_color_theme',
    'label' => 'Farvetema',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_slide_exposure'
  $field_instances['node-media_rss_slide_import-field_ik_slide_exposure'] = array(
    'bundle' => 'media_rss_slide_import',
    'default_value' => array(
      0 => array(
        'value' => 15,
      ),
    ),
    'deleted' => 0,
    'description' => 'Vælg hvor længe et slide skal eksponeres.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_slide_exposure',
    'label' => 'Eksponering',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_slide_logo'
  $field_instances['node-media_rss_slide_import-field_ik_slide_logo'] = array(
    'bundle' => 'media_rss_slide_import',
    'deleted' => 0,
    'description' => 'Tilføj et logo som indsættes på sliden. Logoet skaleres automatisk til 350 pixel i bredden, hvis det er større. Det anbefales at uploade et logo med transparent baggrund.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_slide_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'slide_logo_files',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '1MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          0 => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'library_plus' => 'library_plus',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_slide_media'
  $field_instances['node-media_rss_slide_import-field_ik_slide_media'] = array(
    'bundle' => 'media_rss_slide_import',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'media',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_slide_media',
    'label' => 'Baggrundsbillede',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'library_plus' => 'library_plus',
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_ik_slide_tags'
  $field_instances['node-media_rss_slide_import-field_ik_slide_tags'] = array(
    'bundle' => 'media_rss_slide_import',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg et eller flere tags som beskriver de importerede slides.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ik_slide_tags',
    'label' => 'Tags',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-media_rss_slide_import-field_layout'
  $field_instances['node-media_rss_slide_import-field_layout'] = array(
    'bundle' => 'media_rss_slide_import',
    'default_value' => array(
      0 => array(
        'value' => 'layout_4',
      ),
    ),
    'deleted' => 0,
    'description' => 'Vælg et layout til de importerede slides. Det anbefales at vælge kun billede visning hvis dit feed primært indeholder billeder.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_layout',
    'label' => 'Layout',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Afdeling');
  t('Baggrundsbillede');
  t('Eksponering');
  t('Farvetema');
  t('Kategori');
  t('Kun tekst feed');
  t('Layout');
  t('Logo');
  t('Tags');
  t('Tilføj et logo som indsættes på sliden. Logoet skaleres automatisk til 350 pixel i bredden, hvis det er større. Det anbefales at uploade et logo med transparent baggrund.');
  t('Vælg en hovedkategori som skal knyttes til de importerede slides');
  t('Vælg et eller flere tags som beskriver de importerede slides.');
  t('Vælg et farvetema som skal benyttes for de importerede slides.');
  t('Vælg et layout til de importerede slides. Det anbefales at vælge kun billede visning hvis dit feed primært indeholder billeder.');
  t('Vælg hvilken afdeling de importerede slides skal tilhøre (Du kan kun tilknytte til den/de afdeling(er) som du er en del af).');
  t('Vælg hvor længe et slide skal eksponeres.');

  return $field_instances;
}
