#include "Exercise3-2.hpp"

map<string, int> create_count_map(const set<string> &exclusion_set, ifstream &input_file) {
  map<string, int> word_map;
  if (! input_file) {
    cerr << "Cannot access input file.";
  }
  string read_word;

  while (input_file >> read_word) {
    if(exclusion_set.count(read_word)) {
      continue;
    }
    word_map[read_word]++;
  }
  return word_map;
}
template <typename key, typename value>
void display_map(const map<key, value> &key_value_map) {
  typename map<key, value>::const_iterator map_begin = key_value_map.begin();
  typename map<key, value>::const_iterator map_end = key_value_map.end();
  for ( ; map_begin != map_end; ++map_begin) {
    cout << "Value: " << map_begin -> first << endl;
    cout << "Key " << map_begin -> second << endl;
  }
}

template<typename key, typename value>
void queery_map(const map<key, value> &key_value_map, const key &queery) {
  typename map<key, value>::const_iterator map_end = key_value_map.end();
  typename map<key, value>::const_iterator queery_position;

  queery_position = key_value_map.find(queery);
  if (queery_position != map_end) {
    cout << "Found " << queery_position -> first << "!" << endl;
    cout << "Occurs " << queery_position -> second << " times." << endl;
  } else {
    cout << queery << " was not found." << endl;
  }
}

int main() {
  //ToDo: pass extra exclusion set as parameter.
  string exclusion_array[6] = {"a", "an", "or", "the", "and", "but"};
  set<string> exclusion_set(exclusion_array, exclusion_array + 6);
  ifstream input_file("word_list.txt");
  map<string, int> occurrence_count = create_count_map(exclusion_set, input_file);
  queery_map(occurrence_count, string("a"));
  queery_map(occurrence_count, string("text"));
  display_map(occurrence_count);
  return 0;
}
