//
//  Exercise3-4.cpp
//  
//
//  Created by Hawkins, Dakota Y on 6/9/16.
//
//

#include "Exercise3-4.hpp"
void read_values(vector< int > &integer_vector) {
  cout << "Enter integer values: " << endl;
  istream_iterator< int >  stream_start(cin);
  istream_iterator< int > end_of_stream;
  copy(stream_start, end_of_stream, back_inserter(integer_vector));
}

void display_vector(const vector< int > &current_vector) {
  for (int i = 0; i < current_vector.size(); i++) {
    cout << current_vector[i] << " ";
  }
  cout << endl;
}

void write_evens_and_odds(const vector<int> &integer_vector, ofstream &odd_file, ofstream &even_file) {
  if (! odd_file || ! even_file) {
    cerr << "Error write_evens_and_odds(): Cannot open output files." << endl;
  }
  for (int i = 0; i < integer_vector.size(); i++) {
    if (is_even(integer_vector[i])) {
      even_file << integer_vector[i] << " ";
    } else {
      odd_file << integer_vector[i] << "\n";
    }
  }
  
}

int main() {
  vector< int > holder_vector;
  read_values(holder_vector);
  display_vector(holder_vector);
  ofstream odd_file("/Users/hawk790/Documents/CppEssentials/Git/EssentialCpp/Chapter3/Exercises/odd_numbers.txt");
  ofstream even_file("/Users/hawk790/Documents/CppEssentials/Git/EssentialCpp/Chapter3/Exercises/even_numbers.txt");
  write_evens_and_odds(holder_vector, odd_file, even_file);
  return 0;
}
