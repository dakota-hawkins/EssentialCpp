//
//  SearchVector.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/6/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "SearchVector.hpp"

template <typename element> element* use_sentinel(element *first_address, element *sentinel, element &value) {
  if (! first_address || ! sentinel) {
    return 0;
  }
  for(; first_address != sentinel; ++first_address) {
    if (*(first_address) == value) {
      return first_address;
    }
  }
  return 0;
}

int main() {
  int integer_array[5] = {1,2,3,4,5};
  vector<int> integer_vector(integer_array, integer_array + 5);
  vector<string> string_vector;
  cout << "Beginning: " << container_start(integer_vector) << "\n Ending: " << container_end(integer_vector) << endl;
  cout << "Found 3 at: " << use_sentinel(container_start(integer_vector), container_end(integer_vector), integer_array[3]) << endl;
  string simple_string = "Nothing here!";
  cout << "What happens with a null vector: " << use_sentinel(container_start(string_vector), container_end(string_vector), simple_string) << endl;
  return 0;
}