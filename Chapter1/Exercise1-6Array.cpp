//
//  Exercise1-6Array.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/24/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
  const int array_size = 128;
  int int_array[array_size];
  int int_val, curr_index, sum, average = 0;
  cout << "Please provide a sequence: \n";
  while (cin >> int_val && curr_index < array_size) {
    int_array[curr_index] = int_val;
    curr_index++;
  }
  cout << "Sequence: ";
  for (int i = 0; i < curr_index; i++) {
    sum += int_array[i];
    cout << int_array[i];
    if (i < curr_index - 1) {
      cout << ',';
    }
  }
  average = sum / curr_index;
  cout << "\nSum: " << sum << "\nAverage: " << average << '\n';
  return 0;
}
