//
//  BubbleSort.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/25/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "BubbleSort.hpp"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void displayVector(vector<int> vec);
/* displayVector:
 *  Function to print vector to screen. Displays 10 values per line.
 *
 * parameters:
 *  vec: vector of integers to be printed to screen.
 *
 * return:
 *  void
 */

void displayVector(vector<int> vec) {
  for (int i = 0; i < vec.size(); i++) {
    if (i == 0) {
      cout << vec[i] << ' ';
    } else {
      cout << vec[i] << (!(i % 10) ? "\n" : " ");
    }
  }
  cout << '\n';
}

void swap(int & val_1, int & val_2);
/* swap:
 *  Function to swap integer values.
 *
 * parameters:
 *  val_1: first integer value to be swapped.
 *  val_2: second integer value to be swapped.
 *
 * return:
 *  void
 */

void swap(int & val_1, int & val_2) {
  int holder = val_1;
  val_1 = val_2;
  val_2 = holder;
}

void bubbleSort(vector<int> & vec, ofstream *log_file = 0);
/* bubble_sort:
 *  Function to perform a bubble sort on a vector of integers.
 *
 * parameters:
 *  vec: Vector of integers to be sorted.
 *  log_file: Optional file to write swaps to.
 *
 * return:
 *  void
 */

void bubbleSort(vector<int> & vec, ofstream *log_file) {
  for (int i = 0; i < vec.size(); i ++) {
    for (int j = i + 1; j < vec.size(); j++) {
      if (vec[i] > vec[j]) {
        if (log_file != 0) {
          (*log_file) << i << " > " << j << ": swapping the two values.\n";
        }
        swap(vec[i], vec[j]);
      }
    }
  }
  
}

int main() {
  int int_array[9] = {8, 421, 1 ,3, 0, 42, 13, 10, 22};
  vector<int> int_vec(int_array, int_array + 9);
  cout << "Vector before sort: ";
  ofstream log_file("/Users/hawk790/Desktop/bubbleSortData.txt");
  if (!log_file) {
    cerr << "Unable to open log file. Erroring out.";
  }
  displayVector(int_vec);
  bubbleSort(int_vec, &log_file);
  cout << "Vector after sort: ";
  displayVector(int_vec);
  return 0;
}












