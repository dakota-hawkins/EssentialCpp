#include "IncrementArray.hpp"

template <typename element> element* find_address(element *array, int size, element &value) {
  if (! array || size < 1) {
    return 0;
  }
  for (int i = 0; i < size; ++i, ++array) {
    if ((*array) == value) {
      return array;
    }
  }
  return 0;
}

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
  cout << "Hello, Hal.\n";
  string string_array[9] = {"hey", "hey", "you", "you", "I", "Don't", "Like", "Your", "Girlfriend"};
  vector<string> avril(string_array, string_array + 9);
  string who = "Girlfriend";
  cout << "I don't like your Girlfriend. I know her address: " << find_address(&(avril[0]), 9, who) << endl;
  int integer_array[4] = {1,2,3,4};
  int four = 4;
  cout << "Where's 4? Oh, here it is: " << use_sentinel(&(integer_array[0]), &(integer_array[0]) + 5, four) << endl;
  return 0;
}
