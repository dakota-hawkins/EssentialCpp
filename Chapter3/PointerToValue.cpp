//
//  PointerToValue.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/3/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "PointerToValue.hpp"
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

template <typename element> element* find_value(const vector<element> &vec, element value);

template <typename element> element* find_value(const vector<element> &vec, element value) {
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == value) {
      return &vec[i];
    }
  }
  return 0;
}

int main() {
  int int_array[5] = {1,2,3,4,5};
  string str_array[5] = {"Hello", ",", "how", "are", "you?"};
  float float_array[5] = {0.123, 4.5, 10.1, 5.7, 10};
  const vector<int> int_vector(int_array, int_array + 5);
  const vector<string> str_vector(str_array, str_array + 5);
  const vector<float> float_vector(float_array, float_array + 5);
  cout << "Pointer of '3' in 'int_vector': " << find_value(int_vector, 3);
  cout << "Pointer of 'Hello' in 'str_vector': " << find_value(str_vector, string("HI"));
  float test = 11.1;
  cout << "Pointer of '10.1' in '5.7' in 'float_vector': " << find_value(float_vector, test);
  return 0;
}