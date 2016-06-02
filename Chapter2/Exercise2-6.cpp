//
//  Exercise2-6.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/2/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "Exercise2-6.hpp"

int main() {
  cout << "Max between 1 and 2 -- should be 2: " << find_max(1,2) << endl;
  cout << "Max between 3.141592 and 3.14 -- should be 3.141592: " << find_max(3.141592, 3.14) << endl;
  cout << "Max between 'hello' and 'ha' -- should be hello: " << find_max("hello", "ha") << endl;
  cout << "Max between 'h' and 'hi': " << find_max("h", "hi") << endl;
  int int_array[5] = {1,2,3,4,6};
  cout << "Max value in an array of integers -- should be 6: " << find_max(int_array, 5) << endl;
  vector<int> int_vector;
  for (int i = 0; i < 10; i++) {
    int_vector.push_back(i);
  }
  cout << "Max value in a vector of integers == should be 9: " << find_max(int_vector) << endl;
  float float_array[3] = {2.13, 1.23, 0.33};
  cout << "Max value in an array of floats -- should be 2.13: " << find_max(float_array, 3) << endl;
  vector<float> float_vector(float_array, float_array+3);
  cout << "Max value in a vector of floats -- should be 2.13: " << find_max(float_vector) << endl;
  string string_array[3] = {"Testing", "This","Shit"};
  cout << "Max in array of strings -- should be 'This': " << find_max(string_array, 3) << endl;
  vector<string> string_vector(string_array, string_array + 3);
  cout << "Max in a vector of strings -- should be 'This': " << find_max(string_vector) << endl;
  return 0;
}