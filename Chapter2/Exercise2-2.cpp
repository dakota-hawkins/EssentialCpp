//
//  Exercise2-2.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/25/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "Exercise2-2.hpp"
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
  bool run = true;
  char again;
  int position, elem;
  while (run) {
    cout << "Please enter a position: ";
    cin >> position;
    if (fibon_elem(position, elem)) {
      cout << "Element number " << position << ": " << elem << '\n';
    } else {
      cout << "Sorry, could not calculate element number " << position << ".\n";
    }
    cout << "Calculate another position in the Fibonacci sequence? ";
    cin >> again;
    if (again != 'y' || again != 'Y') {
      run = false;
    }
  }
  return 0;
}

bool fibon_elem(int pos, int &elem) {
  if (pos <= 0 || pos > 121) {
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
