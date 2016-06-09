#ifndef Exercise3-3_hpp
#define Exercise3-3_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

void fill_name_map(ifstream &name_file, map< string, vector<string> > &name_map);
// generate_name_map: Function that fills a string vector / string map.
// The key is a family name while the value is a  vector of children names
//
// Parameters:
//  Input file of names. Families should be seperated by line. The first name
//  on the line is assumed to be the family name.
//
// Output:
//  void

void display_name_map(const map< string, vector<string> > &name_map);
// display_name_map
//  Function that display the contents of the parameter name_map;
//
// Parameters:
//  name_map: a map of string keys with a vector of strings as the associated
//  value.
//
// Output:
//  void

#endif /* Exercise3-2_hpp */
