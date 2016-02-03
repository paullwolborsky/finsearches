<?php

/**
 * Field handler to filter tags.
 */
class views_handler_filter_tags extends views_handler_filter_string {
    /**
     * Insert an array into another array before/after a certain key
     *
     * @param array $array The initial array
     * @param array $pairs The array to insert
     * @param string $key The certain key
     * @param string $position Wether to insert the array before or after the key
     * @return array
     */
    function array_insert($array, $pairs, $key, $position = 'after') {
        $key_pos = array_search($key, array_keys($array));

        if ('after' == $position)
          $key_pos++;

        if (false !== $key_pos) {
          $result = array_slice($array, 0, $key_pos);
          $result = array_merge($result, $pairs);
          $result = array_merge($result, array_slice($array, $key_pos));
        }
        else {
          $result = array_merge($array, $pairs);
        }

        return $result;
    }

    function operators() {
        $operators = parent::operators();
        $operators = $this->array_insert($operators, array(
         'tag' => array(
            'title' => t('Contains any tag'),
            'short' => t('has tag'),
            'method' => 'op_tag',
            'values' => 1,
        )), 'word');

        $operators = $this->array_insert($operators, array(
         'alltags' => array(
          'title' => t('Contains all tags'),
          'short' => t('has all tags'),
          'method' => 'op_tag',
          'values' => 1,
        )), 'allwords');
        return $operators;
    }

    /**
     * Example:
     * A node has the following tags: apple, b, c, d
     *
     * match any: a, b, c, d => yes (matches on tags b, c, and d)
     * match all: a, b, c, d => no  (missing tag 'a', even though apple contains the letter a)
     */
    function op_tag($field) {
        $where = $this->operator == 'tag' ? db_or() : db_and();

        // Don't filter on empty strings.
        if (empty($this->value)) {
          return;
        }

        preg_match_all('/ (-?)("[^"]+"|[^" ]+)/i', ' ' . $this->value, $matches, PREG_SET_ORDER);
        foreach ($matches as $match) {
          $phrase = false;
          // Strip off phrase quotes
          if ($match[2]{0} == '"') {
            $match[2] = substr($match[2], 1, -1);
            $phrase = true;
          }
          $words = trim($match[2], ',?!();:-');
          $words = $phrase ? array($words) : preg_split('/ /', $words, -1, PREG_SPLIT_NO_EMPTY);

          foreach ($words as $word) {
            $word = db_like(trim($word, " ,!?"));
            $word_match = db_or();
            $word_match->condition($field, $word);
            $word_match->condition($field, $word . ',%', 'LIKE');
            $word_match->condition($field, '%,' . $word . ',%', 'LIKE');
            $word_match->condition($field, '%,' . $word, 'LIKE');

            $placeholder = $this->placeholder();
            $where->condition($word_match);
          }
        }

        if (!$where) {
          return;
        }

        // previously this was a call_user_func_array but that's unnecessary
        // as views will unpack an array that is a single arg.
        $this->query->add_where($this->options['group'], $where);
    }
}
