<?php

/**
 * @file
 * Contains FeedsExcelParserIReadFilter.
 */

/**
 * Provides chunk reader for Excel files.
 */
class FeedsExcelParserIReadFilter implements PHPExcel_Reader_IReadFilter {

  private $startRow;
  private $endRow;
  private $rowCounter;

  public function __construct($startRow = 0, $chunkSize = 0) {
    $this->startRow   = $startRow;
    $this->endRow     = $startRow + $chunkSize;
    $this->rowCounter = &drupal_static('feeds_excel_parser_row_counter');
  }

  public function readCell($column, $row, $worksheetName = '') {
    $this->rowCounter[$worksheetName . $row] = $row;
    return ($row >= $this->startRow && $row < $this->endRow);
  }
}
