//
//  Exercise1-5Char.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/24/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
  const int name_size = 128;
  char name[name_size];
  cout << "What is your name? ";
  cin >> setw(name_size) >> name;
  switch (strlen(name)) {
    case 1:
      cout << "Hmm, kind of a short name, huh, " << name << "?\n";
      break;
    default:
      cout << "Hello, " << name << "!\n";
      break;
  }
  return 0;
}

