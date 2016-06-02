//
//  Exercise2-5.hpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/2/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#ifndef Exercise2_5_hpp
#define Exercise2_5_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#endif /* Exercise2_5_hpp */

//a
inline int max(int num_1, int num_2);
inline int max(int num_1, int num_2) {
  return (num_1 > num_2 ? num_1 : num_2);
}

//b
inline float max(float num_1, float num_2);
inline float max(float num_1, float num_2){
  return (num_1 > num_2 ? num_1 : num_2);
}

//c
inline string max(string item_1, string item_2);
inline string max(string item_1, string item_2) {
  return (item_1 > item_2 ? item_1 : item_2);
}

//d
inline int max(const vector<int> &int_vector);
inline int max(const vector<int> &int_vector) {
  int max = int_vector[0];
  for (int i = 1; i < int_vector.size(); i++) {
    if (int_vector[i] > max) {
      max = int_vector[i];
    }
  }
  return max;
}

//e
inline float max(vector<float> &float_vector);
inline float max(vector<float> &float_vector) {
  float max = float_vector[0];
  for (int i = 1; i < float_vector.size(); i++) {
    if (float_vector[i] > max) {
      max = float_vector[i];
    }
  }
  return max;
}

//f
inline string max(vector<string> &str_vector);
inline string max(vector<string> &str_vector) {
  string max = str_vector[1];
  for (int i = 1; i < str_vector.size(); i++) {
    if (str_vector[i] > max) {
      max = str_vector[i];
    }
  }
  return max;
}

//g
inline int max(const int *int_array, int size);
inline int max(const int *int_array, int size) {
  int max = int_array[0];
  for (int i = 1; i < size; i++) {
    if ((int_array)[i] > max) {
      max = (int_array)[i];
    }
  }
  return max;
}

//h
inline float max(const float *float_array, int size);
inline float max(const float *float_array, int size) {
  float max = float_array[0];
  for (int i = 1; i < size; i++) {
    if (float_array[i] > max) {
      max = float_array[i];
    }
  }
  return max;
}

//i
inline string max(const string *string_array, int size); 
inline string max(const string *string_array, int size) {
  return(*max_element(string_array, string_array+size));
}