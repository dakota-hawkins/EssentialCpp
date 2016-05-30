//
//  FileReadExample.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/24/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  string usr_name = "Dakota";
  int num_tries = 0;
  int num_right = 0;
  ifstream infile("seq_data.txt");
  int num_cor = 0;
  if (! infile) {
    // assume new user
  } else {
    string name;
    int nt;
    int nc;
    while (infile >> name) {
      infile >> nt >> nc;
      if (name == usr_name) {
        cout << "Welcome back, " << usr_name
        << "\nYour current score is " << nc
        << " out of " << nt << "\nGood Luck!\n";
        num_tries = nt;
        num_cor = nc;
      }
    }
  }
  ofstream outfile("seq_data.txt", ios_base::app);
  if (!outfile) {
    cerr << "Oops! Unable to save session data!\n";
  } else {
    outfile << usr_name << ' '
    << num_tries << ' '
    << num_right << endl;
  }

  return 0;
}
