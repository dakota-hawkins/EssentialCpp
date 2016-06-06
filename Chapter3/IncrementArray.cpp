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

int main() {
  cout << "Hello, Hal.\n";
  string string_array[9] = {"hey", "hey", "you", "you", "I", "Don't", "Like", "Your", "Girlfriend"};
  vector<string> avril(string_array, string_array + 9);
  string who = "Girlfriend";
  cout << "I don't like your Girlfriend. I know her address: " << find_address(&(avril[0]), 9, who);
  return 0;
}
