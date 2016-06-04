#include "IncrementArray.hpp"

template <typename element> element* find_value(const element *array, int size, const element &value) {
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
  cout << "Hell, Hal.\n";
  string string_array[9] = {"hey", "hey", "you", "you", "I", "Don't", "Like", "Your", "Girlfriend"};
  const vector<string> avril(string_array, string_array + 9);
  const string who = "Girlfriend";
  int integer_array[1] = {10};
  cout << "Address: " << find_value(&(integer_array[0]), 1, 10); 
  //cout << "I don't like your Girlfriend. I know her address: " << find_value(&(avril[0]), 9, who);
  return 0;
}
