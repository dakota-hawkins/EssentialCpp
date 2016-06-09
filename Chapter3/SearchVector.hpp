//
//  SearchVector.hpp
//  Working
//
//  Created by Hawkins, Dakota Y on 6/6/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#ifndef SearchVector_hpp
#define SearchVector_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

template <typename element> element* use_sentinel(element *first_address, element *sentinel, element &value);

template <typename element> inline element* container_start(vector<element> &vec);
template <typename element> inline element* container_start(vector<element> &vec) {
  return (vec.empty() ? 0 : &vec[0]);
}

template <typename element> inline element* container_end(vector<element> &vec);
template <typename element> inline element* container_end(vector<element> &vec) {
  return (vec.empty() ? 0 : &(vec[vec.size()]) + 1);
}

#endif /* SearchVector_hpp */
