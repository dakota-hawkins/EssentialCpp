//
//  Exercise1-4.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/24/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include "Exercise1-4.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
  string first_name;
  string last_name;
  cout << "Please enter your first name: ";
  cin >> first_name;
  cout << '\n';
  cout << "Please enter your last name: ";
  cin >> last_name;
  cout << '\n';
  cout << "Hello, "
  << first_name
  << " "
  << last_name
  << " ... and goodbye!"
  << '\n';
  return 0;
}