//
//  FibonacciSequence.cpp
//
//
//  Created by Hawkins, Dakota Y on 5/27/16.
//
//

#include "FibonacciSequence.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;


inline bool is_size_okay(int size) {
  const int max_size = 121;
  const string msg("Requested size is not supported");
  
  if (size <= 0 || max_size > 121) {
    //display_message(msg, size);
    return false;
  }
  return true;
}

const vector<int>* fibon_seq(int size) {
  static vector<int> elements;
  
  if (!is_size_okay(size)) {
    cerr << "fibon_seq(): invalid size: " << size
    << " -- can't fulfill request. \n";
    return 0;
  }
  for (long int i = elements.size(); i < size; i++) {
    if (i == 0 || i == 1) {
      elements.push_back(1);
    } else {
      elements.push_back(elements[i - 1] + elements[i - 2]);
    }
  }
  return &elements;
}

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

int main() {
  int seqSize;
  bool run = true;
  char again;
  vector<int> holder;
  while (run) {
    cout << "What size of sequence should be produced? ";
    cin >> seqSize;
    cout << "Fibonacci sequence of size " << seqSize << ": \n";
    displayVector(*(fibon_seq(seqSize)));
    cout << "Need another sequence? ";
    cin >> again;
    if (again != 'y' || again != 'Y') {
      run = false;
    }
  }
  return 0;
}