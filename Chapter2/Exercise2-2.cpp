//
//  Pentagonal.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/2/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "Exercise2-2.hpp"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

const vector<int>* pentagonal_sequence(int size) {
  static vector<int> pentagonal_elements;
  
  if (size < 0 || size > 120) {
    cerr << "Internal error pentagonal_sequence(): improper sequence size requested.";
  }
  for (int i = pentagonal_elements.size(); i < size; i++) {
    int n = i + 1;
    pentagonal_elements.push_back((n*(3*n - 1)/2));
  }
  return &pentagonal_elements;
}

template <typename elementType>
void display_vector(vector<elementType> sequence_vector, string sequence_type) {
  cout << sequence_type << " Sequence of size " << sequence_vector.size() << ":\n";
  for (int i = 0; i < sequence_vector.size(); i++) {
    if (i == 0) {
      cout << sequence_vector[i] << " ";
    } else {
      cout << sequence_vector[i] << (!(i % 5) ? '\n' : ' ');
    }
  }
  cout << '\n';
}

int main() {
  display_vector((*pentagonal_sequence(3)), "Pentagonal");
  display_vector((*pentagonal_sequence(10)), "Pentagonal");
  display_vector((*pentagonal_sequence(23)), "Pentagonal");
  display_vector((*pentagonal_sequence(50)), "Pentagonal");
  return 0;
}


