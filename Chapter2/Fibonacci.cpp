//
//  Fibonacci.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/25/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "Fibonacci.hpp"
#include <iostream>
using namespace std;
bool fibon_elem(int pos, int &elem);
/* fibon_elem: 
 *  Function that returns desired element of the Fibonacci sequence.
 * Parameters:
 *  pos: Position of interest in Fibonacci sequence.
 * return:
 *  Returns Fibonacci value of interest.
 */

int main() {
  int elem;
  for (int i = 0; i < 10; i++) {
    cout << i << " - " << fibon_elem(i, elem) << ": " << elem << '\n';
  }
  return 0;
}

bool fibon_elem(int pos, int &elem) {
  if (pos <= 0 || pos > 1024) {
    elem = 0;
    return false;
  }
  int n1 = 1, n2 = 1;
  elem = 1;
  for (int i = 3; i <= pos; ++i) {
    elem = n2 + n1;
    n1 = n2;
    n2 = elem;
  }
  return true;
}