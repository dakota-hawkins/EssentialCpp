//
//  LessonInIterators.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/6/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <vector>
#include <string>
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

template <typename element> void display(const vector<element> &vector, ostream &os);
template <typename element> void display(const vector<element> &vector, ostream &os) {
  typename::vector<element>::const_iterator iter = vector.begin();
  typename::vector<element>::const_iterator end_it = vector.end();
  for (; iter != end_it; ++iter) {
    os << *iter << ' ';
  }
  os << endl;
}

template <typename iterator_type, typename element> iterator_type find_value(iterator_type first, iterator_type last, const element &value);
template <typename iterator_type, typename element> iterator_type find_value(iterator_type first, iterator_type last, const element &value) {
  for (; first != last; ++first) {
    if (value == *first) {
      return first;
    }
  }
  return last;
}


int main() {
  const int array_size = 8;
  int int_array[array_size] = {1,1,2,3,5,8,13,21};
  vector<int> int_vec(int_array, int_array + array_size);
  list<int> int_list(int_array, int_array + array_size);
  // Array instance
  int * int_pointer = find_value(int_array, int_array+array_size, 5);
  if (int_pointer != (int_array + array_size)) {
    cout << "Found! " << int_pointer << endl;
  }
  // Vector instance
  vector<int>::iterator vec_iter;
  vec_iter = find_value(int_vec.begin(), int_vec.end(), 1024);
  if (vec_iter != int_vec.end()) {
    cout << "Found! " << &vec_iter << endl;
  } else {
    cout << "1024 not found in integer vector." << endl;
  }
  // List instance
  list<int>::iterator list_iter;
  list_iter = find_value(int_list.begin(), int_list.end(), 13);
  if (list_iter != int_list.end()) {
    cout << "13 held at: " << &list_iter << endl;
  }
  return 0;
}
