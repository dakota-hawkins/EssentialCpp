
#include <string>
#include <iostream>
#include <vector>
using namespace std;

template <typename T> inline T find_max(T type1, T type2);
template <typename T> inline T find_max(T type1, T type2) {
  return(type1 > type2 ? type1 : type2);
}

template <typename element> inline element find_max(vector<element> element_vector);
template <typename element> inline element find_max(vector<element> element_vector) {
  element max = element_vector[0];
  for (int i = 1; i < element_vector.size(); i++) {
    if (element_vector[i] > max) {
      max = element_vector[i];
    }
  }
  return max;
}

template <typename array_element> inline array_element find_max(array_element element_array[], int size);
template <typename array_element> inline array_element find_max(array_element element_array[], int size) {
  array_element max = element_array[0];
  for (int i = 1; i < size; i++) {
    if (element_array[i] > max) {
      max = element_array[i];
    }
  }
  return max;
}