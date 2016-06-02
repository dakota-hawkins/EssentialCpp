//
//  MultipleSequence.cpp
//  
//
//  Created by Hawkins, Dakota Y on 5/27/16.
//
//

#include "MultipleSequence.hpp"
#include <vector>
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
  static vector<int> fibon_elements;
  
  if (!is_size_okay(size)) {
    cerr << "fibon_seq(): invalid size: " << size
    << " -- can't fulfill request. \n";
    return 0;
  }
  for (long int i = fibon_elements.size(); i < size; i++) {
    if (i == 0 || i == 1) {
      fibon_elements.push_back(1);
    } else {
      fibon_elements.push_back(fibon_elements[i - 1] + fibon_elements[i - 2]);
    }
  }
  return &fibon_elements;
}

const vector<int>* lucas_seq(int size) {
  static vector<int> lucas_elements;
  
  if (!is_size_okay(size)) {
    cerr << "lucas_seq(): invalid size " << size
    << " -- can't fulfill request. \n";
    return 0;
  }
  for (long int i = lucas_elements.size(); i < size; i++) {
    if (i == 0) {
      lucas_elements.push_back(2);
    } else if (i == 1) {
      lucas_elements.push_back(1);
    } else {
      lucas_elements.push_back(lucas_elements[i - 1] + lucas_elements[i - 2]);
    }
  }
  return &lucas_elements;
}

const vector<int>* pell_seq(int size) {
  static vector<int> pell_elements;
  
  if (!is_size_okay(size)) {
    cerr << "pell_seq(): invalid size " << size
    << " -- can't fulfill request. \n";
    return 0;
  }
  for (long int i = pell_elements.size(); i < size; i++ ) {
    if (i == 0) {
      pell_elements.push_back(0);
    } else if (i == 1) {
      pell_elements.push_back(1);
    } else {
      pell_elements.push_back(2*pell_elements[i - 1] + pell_elements[i - 2]);
    }
  }
  return &pell_elements;
}

const vector<int>* triangle_seq(int size) {
  static vector<int> triangle_elements;
  
  if (!is_size_okay(size)) {
    cerr << "triangle_seq(): invalid size " << size
    << " -- can't fulfill request. \n";
    return 0;
  }
  for (long int i = triangle_elements.size(); i < size; i++) {
    triangle_elements.push_back( ((i+1)*((i+1) + 1))/2);
  }
  return &triangle_elements;
}

const vector<int>* square_seq(int size) {
  static vector<int> square_elements;
  
  if (!is_size_okay(size)) {
    cerr << "square_seq(): invalid size " << size
    << " -- can't fulfill request. \n";
    return 0;
  }
  for (long int i = square_elements.size(); i < size; i++) {
    square_elements.push_back((i+1)*(i+1));
  }
  return &square_elements;
}

const vector<int>* pentagonal_seq(int size) {
  static vector<int> pentagonal_elements;
  
  if (!is_size_okay(size)) {
    cerr << "pentagonal_seq(): invalid size " << size
    << " -- can't fulfill request. \n";
  }
  for (long int i = pentagonal_elements.size(); i < size; i++) {
    int n = i + 1;
    pentagonal_elements.push_back((3*n*n - n)/2);
  }
  return &pentagonal_elements;
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

bool sequence_element(int pos, int &elem, const vector<int>* (*seq_ptr)(int)) {
  if (! seq_ptr) {
    cout << "Internal Error: seq_ptr is set to null!";
  }
  // invoke function addressed by seq_ptr
  const vector<int> *pointer_sequence = seq_ptr(pos);
  if (! pointer_sequence) {
    cout << "Internal Error: pointer_sequence is set to null!";
    elem = 0;
    return false;
  }
  elem = (*pointer_sequence)[pos - 1];
  return true;
}


int main() {
  enum number_type {number_fibon, number_lucas, number_pell, number_triangle, number_square, number_pentagonal};
  const vector<int>* (*seq_array[])(int) = {fibon_seq, lucas_seq, pell_seq, triangle_seq, square_seq, pentagonal_seq};
  int element;
  
  cout << "Fibonacci sequence: ";
  displayVector((*fibon_seq(5)));
  cout << "Lucas sequence: ";
  displayVector((*lucas_seq(5)));
  cout << "Pell sequence: ";
  displayVector((*pell_seq(5)));
  cout << "Triangle sequence: ";
  displayVector((*triangle_seq(5)));
  cout << "Square sequence: ";
  displayVector((*square_seq(5)));
  cout << "Pentagonal sequence: ";
  displayVector((*pentagonal_seq(5)));
  if (sequence_element(23, element, seq_array[number_triangle])) {
    cout << "The 23rd element in the triangle sequence is: " << element << '\n';
  }
  if (sequence_element(17, element, seq_array[number_pentagonal])) {
    cout << "The 17th element in the pentagonal sequence is " << element << '\n';
  }
  if (sequence_element(34, element, seq_array[number_pell])) {
    cout << "The 34th element in the Pell sequence is " << element << '\n';
  }
  return 0;
}
