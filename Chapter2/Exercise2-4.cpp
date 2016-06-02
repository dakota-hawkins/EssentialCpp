//
//  Exercise2-4.cpp
//  
//
//  Created by Hawkins, Dakota Y on 6/2/16.
//
//

#include "Exercise2-4.hpp"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int pentagonal_number(int value) {
  return (value*(3*value - 1) / 2);
}

const vector<int>* pentagonal_sequence(int size) {
  static vector<int> pentagonal_elements;
  
  if (!size_check(size)) {
    cerr << "Internal error pentagonal_sequence(): improper sequence size requested.";
    return 0;
  }
  for (int i = pentagonal_elements.size(); i < size; i++) {
    pentagonal_elements.push_back(pentagonal_number(i + 1));
  }
  return &pentagonal_elements;
}

int pentagonal_element(int position) {
  return (*pentagonal_sequence(position))[position - 1];
}

template <typename elementType>
void display_vector(vector<elementType> sequence_vector, string sequence_type) {
  cout << sequence_type << " Sequence:\n";
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
  cout << "The 7th element of the Pentagonal Sequence is: " << pentagonal_element(7) << endl;
  display_vector((*pentagonal_sequence(23)), "Pentagonal");
  cout << "The 32nd element of the Pentagonal Sequence is: " << pentagonal_element(32) << endl;
  display_vector((*pentagonal_sequence(50)), "Pentagonal");
  return 0;
}

