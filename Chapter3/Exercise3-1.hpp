#ifndef Exercise3-1_hpp
#define Exercise3-1_hpp

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <set>
#include <map>
#include <iterator>
using namespace std;

// Function Definition

map<string, int> create_count_map(const set<string> &exclusion_set, ifstream &input_file);

template <typename key, typename value>
void display_map(const map<key, value> &key_value_map);

template<typename key, typename value>
void queery_map(const map<key, value> &key_value_map, const key &queery);

#endif /* Exercise3-1_hpp */
