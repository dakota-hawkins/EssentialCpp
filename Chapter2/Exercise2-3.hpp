//
//  Exercise2-3.hpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/2/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#ifndef Exercise2_3_hpp
#define Exercise2_3_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

const vector<int>* pentagonal_sequence(int size);

template <typename elementType>
void display_vector(vector<elementType> &sequence_vector, string sequence_type);

inline bool size_check(int position);
inline bool size_check(int position) {
  if (position < 0 || position > 120) {
    return false;
  }
  return true;
}

int pentagonal_number(int value);


#endif /* Exercise2_3_hpp */
