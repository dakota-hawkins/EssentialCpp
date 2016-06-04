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

template <typename element> element* find_value(vector<element> &vec, element value);
template <typename element> element* find_value(vector<element> &vec, element value) {
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == value) {
      return &vec[i];
    }
  }
  return 0;
}

template <typename T> T* find_value(T *array, int size, T &value);
template <typename T> T* find_value(T *array, int size, T value) {
  if (! array || size < 1) {
    return 0;
  }
  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      return &array[i];
    }
  }
  return 0;
}

int main() {
  int int_array[5] = {1,2,3,4,5};
  string str_array[5] = {"Hello", ",", "how", "are", "you?"};
  float float_array[5] = {0.123, 4.5, 10.1, 5.7, 10};
  vector<int> int_vector(int_array, int_array + 5);
  vector<string> str_vector(str_array, str_array + 5);
  vector<float> float_vector(float_array, float_array + 5);
  cout << "Pointer of '3' in 'int_vector': " << find_value(int_vector, 3) << endl;
  cout << "Pointer of 'Hello' in 'str_vector': " << find_value(str_vector, string("Hello")) << endl;
  float test = 11.1;
  cout << "Pointer of '11.1' in 'float_vector': " << find_value(float_vector, test) << endl;
  float first_value = float_array[1];
  cout << "Pointer of 4.5 in 'float_array': " << find_value(&first_value, int(5), float(4.5)) << endl;
  return 0;
}
