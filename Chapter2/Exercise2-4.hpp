//
//  Exercise2-4.hpp
//  
//
//  Created by Hawkins, Dakota Y on 6/2/16.
//
//

#ifndef Exercise2_4_hpp
#define Exercise2_4_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int pentagonal_number(int value);

const vector<int>* pentagonal_sequence(int size);

int pentagonal_element(int position);

template <typename elementType>
void display_vector(vector<elementType> &sequence_vector, string sequence_type);

inline bool size_check(int position);
inline bool size_check(int position) {
  if (position < 0 || position > 120) {
    return false;
  }
  return true;
}



#endif /* Exercise2_4_hpp */
