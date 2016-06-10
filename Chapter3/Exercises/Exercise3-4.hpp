//
//  Exercise3-4.hpp
//  
//
//  Created by Hawkins, Dakota Y on 6/9/16.
//
//

#ifndef Exercise3_4_hpp
#define Exercise3_4_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void read_values(vector< int > &integer_vector);
// read_values:
//   Reads integer values from standard in and hold them in an integer vector
//
// Parameters:
//   integer_vector: integer vector to add standard-in values to
//
// Return Value:
//   void

void write_evens_and_odds(const vector<int> &integer_vector, ofstream &odd_file, ofstream &even_file);

inline bool is_even(int value);
inline bool is_even(int value) {
  return (!(value % 2) ? true : false);
}

void write_evens_and_odds(ofstream &odd_file, ofstream &even_file);

#endif /* Exercise3_4_hpp */
