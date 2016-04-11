<?php

/**
 * @file
 * Contains FeedsExcelParser.
 */

/**
 * Provides feeds parser class for Excel files.
 */
class FeedsExcelParser extends FeedsParser {

  private $file_path;
  private $library;
  private $reader;

  /**
   * Init file path.
   */
  private function initFilePath(FeedsFetcherResult $fetcher_result) {
    if (!isset($this->file_path)) {
      $this->file_path = drupal_realpath($fetcher_result->getFilePath());
    }
  }

  /**
   * Init PHPExcel library.
   */
  private function initLibrary() {
    if (!isset($this->library)) {
      $this->library = libraries_load('PHPExcel');
      if (empty($this->library['loaded'])) {
        throw new Exception(t('PHPExcel missed.'));
      }
    }
  }

  /**
   * Init PHPExcel reader.
   */
  private function initReader() {
    if (!isset($this->reader)) {
      $this->reader = PHPExcel_IOFactory::createReaderForFile($this->file_path);
      $this->reader->setReadDataOnly(TRUE);
    }
  }

  /**
   * Get total rows.
   */
  private function getTotal() {
    $this->reader->setReadFilter(new FeedsExcelParserIReadFilter());
    $this->reader->load($this->file_path);
    return count(drupal_static('feeds_excel_parser_row_counter'));
  }

  /**
   * Parse first row as headers.
   */
  private function getHeaders() {
    $headers = array();
    $this->reader->setReadFilter(new FeedsExcelParserIReadFilter(1, 1));
    foreach ($this->reader->load($this->file_path)->getSheet()->getRowIterator() as $row) {
      foreach ($row->getCellIterator() as $cell_index => $cell) {
        $headers[$cell_index] = filter_xss($cell->getValue());
      }
    }
    return $headers;
  }

  /**
   * {@inheritdoc}
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {

    // Init vars.
    $this->initFilePath($fetcher_result);
    $this->initLibrary();
    $this->initReader();

    // Init state. Use two pointers: global and by sheet.
    $state = $source->state(FEEDS_PARSE);
    $state->total = !empty($state->total) ? $state->total : $this->getTotal();
    $state->pointer = !empty($state->pointer) ? $state->pointer : array(
      'global' => 1,
      'sheet'  => 1,
    );

    // Prepare to parsing.
    $items = array();
    $filter = new FeedsExcelParserIReadFilter($state->pointer['sheet'], $this->config['chunk_size']);
    $this->reader->setReadFilter($filter);
    $excel = $this->reader->load($this->file_path);

    // Setup parse type.
    switch ($this->config['sheets']['parse_type']) {
      case 'first':
        $sheets = array($excel->getSheet());
        break;

      case 'title':
        $sheets = array($excel->getSheetByName($this->config['sheets']['parse_value']));
        break;

      case 'index':
        $sheets = array($excel->getSheet($this->config['sheets']['parse_value']));
        break;

      default:
        $sheets = $excel->getWorksheetIterator();
    }

    // Check for errors.
    if (is_array($sheets) && in_array(NULL, $sheets)) {
      throw new Exception(t('Wrong sheet !type: !value.', array(
        '!type'  => $this->config['sheets']['parse_type'],
        '!value' => $this->config['sheets']['parse_value'],
      )));
    }

    // Parse values.
    foreach ($sheets as $sheet) {
      foreach ($sheet->getRowIterator() as $row_index => $row) {

        // Generare row key.
        $row_key = implode('__', array($sheet->getTitle(), $row_index));

        // Iterate cells.
        foreach ($row->getCellIterator() as $cell_index => $cell) {

          // Detect headers row.
          if (!$this->config['no_headers'] && $row_index === 1) {
            $state->pointer['headers'][$cell_index] = $cell->getCalculatedValue();
            continue;
          }

          // Detect cell index and put values if not empty.
          $cell_key = (!$this->config['no_headers'] && !empty($state->pointer['headers'][$cell_index]))
            ? $state->pointer['headers'][$cell_index]
            : $cell_index;
          $value = $this->config['calculate']
            ? $cell->getCalculatedValue()
            : $cell->getValue();

          if (!is_null($value)) {
            $items[$row_key][$cell_key] = $value;
          }
        }

        // Add sheet title to values.
        if (isset($items[$row_key]) && !empty($this->config['sheets']['map_title'])) {
          $items[$row_key][$this->config['sheets']['map_title']] = $sheet->getTitle();
        }

        // Increment pointers.
        $state->pointer['global']++;
        $state->pointer['sheet'] = ($row_index + 1);
      }
    }

    $state->progress($state->total, $state->pointer['global']);
    return new FeedsParserResult(array_values($items));
  }

  /**
   * {@inheritdoc}
   */
  public function clear(FeedsSource $source) {

  }

  /**
   * {@inheritdoc}
   */
  public function getMappingSources() {
    return FALSE;
  }

  /**
   * {@inheritdoc}
   */
  public function configDefaults() {
    return array(
      'chunk_size' => 10,
      'no_headers' => 0,
      'calculate'  => 0,
      'sheets'     => array(
        'parse_type'  => 'all',
        'parse_value' => '',
        'map_title'   => '',
      ),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['chunk_size'] = array(
      '#type'          => 'select',
      '#title'         => t('Chunk size'),
      '#options'       => drupal_map_assoc(array(1, 5, 10, 20, 50, 100, 200)),
      '#description'   => t("Select quantity of rows which will be parsed per ounce. <b>Notice: selected quantity will be multiplied on sheets' quantity.</b>"),
      '#default_value' => $this->config['chunk_size'],
    );
    $form['no_headers'] = array(
      '#type'          => 'checkbox',
      '#title'         => t('No headers'),
      '#description'   => t("Check if the imported Excel file does not start with a header row. If checked, mapping sources must be named '0', '1', '2' etc."),
      '#default_value' => $this->config['no_headers'],
    );
    $form['calculate'] = array(
      '#type'          => 'checkbox',
      '#title'         => t('Calculate'),
      '#description'   => t('Check if need to calculate cells data via getCalculatedValue()'),
      '#default_value' => $this->config['calculate'],
    );
    $form['sheets'] = array(
      '#type'  => 'fieldset',
      '#title' => t('Sheets settings'),
      '#tree'  => TRUE,
    );
    $form['sheets']['parse_type'] = array(
      '#type'          => 'select',
      '#title'         => t('How to parse?'),
      '#default_value' => $this->config['sheets']['parse_type'],
      '#options'       => array(
        'all'   => t('All sheets'),
        'first' => t('First sheet'),
        'title' => t('By title'),
        'index' => t('By index'),
      ),
    );
    $form['sheets']['parse_value'] = array(
      '#type'          => 'textfield',
      '#default_value' => $this->config['sheets']['parse_value'],
      '#states'        => array(
        'visible' => array(
          array(
            array('select[name="sheets[parse_type]"]' => array('value' => 'title')),
            'or',
            array('select[name="sheets[parse_type]"]' => array('value' => 'index')),
          ),
        ),
      ),
    );
    $form['sheets']['map_title'] = array(
      '#type'          => 'textfield',
      '#title'         => t('Source key of sheet title'),
      '#description'   => t('If filled, sheet title will be available in mapping.'),
      '#default_value' => $this->config['sheets']['map_title'],
    );
    return $form;
  }

}
