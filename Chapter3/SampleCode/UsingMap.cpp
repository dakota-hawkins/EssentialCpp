#include "UsingMap.hpp"

int count_word_occurrence();
int count_word_occurrence() {
  map<string, int> words;
  string exclude[5] = {"hi", "you", "I", "a", "an"};
  set<string> word_exclusion(exclude, exclude + 5);
  word_exclusion.insert("to");
  words["vermeer"] = 1;
  string word;
  int count = 0;
  while (cin >> word && count < 10) {
    if (word_exclusion.count(word)) {
      count++;
      continue;
    }
    words[word]++;
    count++;
  }
  map<string, int>::iterator map_begin = words.begin();
  for (; map_begin != words.end(); ++map_begin) {
    cout << "key: " << map_begin -> first << " "
    << "value: " << map_begin -> second << endl;
  }
  set<string>::iterator set_begin = word_exclusion.begin();
  cout << "Excluded words: ";
  for (; set_begin != word_exclusion.end(); ++set_begin) {
    cout << *set_begin << ", ";
  }
  cout << endl; 
  return 0;
}

int main() {
  cout << "Provide a list of words: " << endl;
  count_word_occurrence();
  cout << "Has passed count_word_occurrence()" << endl;
  return 0;
}
