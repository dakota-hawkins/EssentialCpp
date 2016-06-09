#include "Exercise3-2.hpp"

vector<string> file_to_vector(ifstream &input_file) {
  if (!input_file) {
    cerr << "Cannot open input file.";
  }
  string entry;
  vector<string> entry_vector;
  while (input_file >> entry) {
    entry_vector.push_back(entry);
  }
  return entry_vector;
}

template <typename ContainerIterator>
void display_container(ContainerIterator first, ContainerIterator last) {
  int count = 1;
  for ( ; first != last; ++first, ++count) {
    cout << *first;
    cout << (count % 10 ? " " : "\n");
  }
  cout << endl;
}


int main() {
  cout << "Test that compile" << endl;
  ifstream input_file("word_list.txt");
  vector<string> file_vector = file_to_vector(input_file);
  cout << "ORIGINAL: " << endl;
  display_container(file_vector.begin(), file_vector.end());
  cout << "\nSORTED: \n";
  sort(file_vector.begin(), file_vector.end(), less_than);
  display_container(file_vector.begin(), file_vector.end());
  return 0;
}
