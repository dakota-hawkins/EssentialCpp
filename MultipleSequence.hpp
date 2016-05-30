//
//  MultipleSequence.hpp
//  
//
//  Created by Hawkins, Dakota Y on 5/27/16.
//
//

#ifndef MultipleSequence_hpp
#define MultipleSequence_hpp

#include <stdio.h>
#include <vector>
using namespace std;

const vector<int>* (*sequence_pointer)(int);

bool sequence_element(int pos, int &elem, const vector<int>* (*sequence_pointer)(int));

#endif /* MultipleSequence_hpp */
