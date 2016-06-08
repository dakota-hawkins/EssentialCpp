//
//  UsingGenericAlgorithms.hpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/7/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#ifndef UsingGenericAlgorithms_hpp
#define UsingGenericAlgorithms_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

bool is_elem(const vector<int> &vec, const int &value);

inline bool less_than(int val_1, int val_2);
inline bool less_than(int val_1, int val_2) {
  return (val_1 < val_2 ? true : false);
}

inline bool greater_than(int val_1, int val_2);
inline bool greater_than(int val_1, int val_2) {
  return (val_1 > val_2 ? true : false);
}

vector<int> filter(const vector<int> &vec, int filter_value, bool (*pred)(int, int));

vector<int> filter_find(const vector<int> &vec, int filter_value, less<int> is_less);

template <typename InputIterator, typename OutputIterator, typename element, typename comparison>
OutputIterator filter(InputIterator first, InputIterator last, OutputIterator output, const element &value, comparison pred);

vector<int> sub_vec(const vector<int> &vec, int value);

template <typename InputIterator, typename OutputIterator, typename element, typename comparison>
OutputIterator sub_container(InputIterator start, InputIterator end, OutputIterator out_start, const element &value, comparison pred);

int count_occurs(const vector<int> &vec, int val);




#endif /* UsingGenericAlgorithms_hpp */
