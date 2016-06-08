//
//  UsingGenericAlgorithms.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/7/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "UsingGenericAlgorithms.hpp"

bool is_elem(const vector<int> &vec, const int &value) {

  return binary_search(vec.begin(), vec.end(), value);
}

vector<int> filter(const vector<int> &vec, int filter_value, bool (*pred)(int, int)) {
  vector<int> return_vec;

  for (int i = 0; i < vec.size(); ++i) {
    if (pred(vec[i], filter_value)) {
      return_vec.push_back(vec[i]);
    }
  }
  return return_vec;
}

vector<int> filter_find(const vector<int> &vec, int filter_value, less<int> is_less) {
  vector<int> return_vec;
  vector<int>::const_iterator start_iter = vec.begin();
  vector<int>::const_iterator end_iter = vec.begin();

  while ((start_iter = find_if(start_iter, end_iter, bind2nd(is_less, filter_value))) != end_iter) {
    return_vec.push_back(*start_iter);
    start_iter++;
  }
  return return_vec;
}

int count_occurs(const vector<int> &vec, int value) {
  vector<int>::const_iterator start_iter = vec.begin();
  vector<int>::const_iterator end_iter = vec.end();
  int occurs_count = 0;
  while ((start_iter = find(start_iter, end_iter, value)) != end_iter) {
    ++occurs_count;
    ++start_iter;
  }
  return occurs_count;
}

template <typename InputIterator, typename OutputIterator, typename element, typename comparison>
OutputIterator filter(InputIterator first, InputIterator last, OutputIterator output, const element &value, comparison pred) {

  while ((first = find_if(first, last, bind2nd(pred, value))) != last) {
    cout << "Found value: " << *first << endl;
    *output++ = *first++;
  }
  return output;
}

vector<int> sub_vec(const vector<int> &vec, int value) {

  vector<int> local_vector(vec);
  sort(local_vector.begin(), local_vector.end());

  vector<int>::iterator iter = find_if(local_vector.begin(), local_vector.end(), bind2nd(greater<int>(), value));
  local_vector.erase(iter, local_vector.end());
  return local_vector;
}

template <typename InputIterator, typename OutputIterator, typename element, typename comparison>
OutputIterator sub_container(InputIterator start, InputIterator end, OutputIterator out_start, const element &value, comparison pred){
  //sort(start, end);
  //out_ = find_if(start, end, bind2nd(pred, value));

  return out_start;
}

int main () {
  int sequence_array[12] = {1,1,2,3,5,8,13,21,34,55,89,144};
  vector<int> sequence_vec(sequence_array, sequence_array + 12);
  cout << is_elem(sequence_vec, 2) << endl;
  vector<int> out_vec = filter(sequence_vec, 8, greater_than);
  for (int i = 0; i < out_vec.size(); i++) {
    cout << out_vec[i] <<  " ";
  }
  cout << endl;
  cout << "Number of 1's in sequence_vec: " << count_occurs(sequence_vec, 1) << endl;

  // fancy implementation

  const int elem_size = 8;
  int int_array[elem_size] = {12, 8, 43, 0, 6, 21, 3, 7};
  vector<int> int_vec(int_array, int_array + elem_size);
  int out_array[elem_size];
  vector<int> filter_vec(elem_size);
  cout << "Filtering integer array for values less than 8\n";
  filter(int_array, int_array + elem_size, out_array, elem_size, less<int>());
  cout << "Filter integer vector for values less than 8\n";
  filter(int_vec.begin(), int_vec.end(), filter_vec.begin(), elem_size, greater<int>());
  vector<int> filtered_vector = sub_vec(int_vec, elem_size);
  for (int i = 0; i < filtered_vector.size(); i ++) {
    cout << filtered_vector[i] << endl;
  }
  return 0;
}
