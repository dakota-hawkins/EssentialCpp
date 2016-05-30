//
//  MultipleSequence.cpp
//  
//
//  Created by Hawkins, Dakota Y on 5/27/16.
//
//

#include "MultipleSequence.hpp"
#include <vector>
using namespace std;

int main() {
  
  return 0;
}

const vector<int>* (*sequence_pointer)(int);

bool sequence_element(int pos, int &elem, const vector<int>* (*sequence_pointer)(int));