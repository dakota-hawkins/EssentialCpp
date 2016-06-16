#include "LessThan.cpp"
#include <vector>
#include <iostream>

using namespace std;

int count_less_than(const vector<int> &int_vector, int compare) {
  LessThan less_than(compare);
  int count = 0;

  for (int i = 0; i < int_vector.size(); ++i) {
    if (less_than(int_vector[i])) {
      ++count;
    }
  }
  return count;
}

int main() {
  int int_array[10] = {1,4,2,5,12, 10, 32, 124, 21, 4};
  vector<int> int_vector(int_array, int_array + 10);
  cout << "Less than 5: " << count_less_than(int_vector, 5);
  return 0;
}
