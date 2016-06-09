#ifndef Exercise3-2_hpp
#define Exercise3-2_hpp

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

// Function Definition

vector<string> file_to_vector(ifstream &input_file);
// file_to_vector: Function that reads a file of undefined type and returns a
// vector of the same type.
//
// Parameters:
//  input_file: file name of interest passed by reference.
//
// Output:
//  vector of 'input_file' contents.

template <typename ContainerIterator>
void display_container(ContainerIterator first, ContainerIterator last);
// display_container: Function that outputs the contents of a containter
// to standard out.
//
// Paramters:
//  first: iterator denoting the start of the containter.
//  last: iterator denoting the end of the container.
//
// Output:
//  void.

inline bool less_than(string string_1, string string_2);
inline bool less_than(string string_1, string string_2) {
  return (string_1.size() < string_2.size() ? true : false);
}
#endif /* Exercise3-2_hpp */
