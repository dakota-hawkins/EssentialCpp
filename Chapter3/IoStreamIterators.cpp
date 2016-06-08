#include "IoStreamIterators.hpp"

void test_iostream_iterator() {
  vector<string> text;
  istream_iterator<string> stream_start(cin);
  istream_iterator<string> eof;

  copy(stream_start, eof, back_inserter(text));
  sort(text.begin(), text.end());

  ostream_iterator<string> out_stream(cout, " ");
  copy(text.begin(), text.end(), out_stream);
}

void test_fstream_iterator() {
  ifstream in_file("in_test.txt");
  ofstream out_file("out_test.txt");

  if (! in_file || ! out_file) {
    cerr << "Cannot find input or ouput file.\n";
  }

  istream_iterator<string> file_iterator(in_file);
  istream_iterator<string> end_of_file;
  vector<string> text;

  copy(file_iterator, end_of_file, back_inserter(text));
  sort(text.begin(), text.end());
  ostream_iterator<string> out_file_iterator(out_file, " ");
  copy(text.begin(), text.end(), out_file_iterator);
}

int main() {
  cout << "Trying iterators!\n";
  //test_iostream_iterator();
  test_fstream_iterator();
  return 0;
}
