//
//  SequencePrinter.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/24/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  vector<int> fibonacci, lucas, pell, triangular, square, pentagonal;
  const int seq_size = 8;
  int fib_val[seq_size] = {1,1,2,3,5,8,13,21};
  int luc_val[seq_size] = {1,3,4,7,11,18,29,47};
  int pell_val[seq_size] = {1,2,5,12,29,70,169,408};
  int tri_val[seq_size] = {1,3,6,10,15,21,28,36};
  int sqr_val[seq_size] = {1,4,9,16,25,36,49,64};
  int pent_val[seq_size] = {1,5,12,22,35,51,70,92};
  fibonacci.assign(fib_val, fib_val+seq_size);
  lucas.assign(luc_val, luc_val+seq_size);
  pell.assign(pell_val, pell_val+seq_size);
  triangular.assign(tri_val, tri_val+seq_size);
  square.assign(sqr_val, sqr_val+seq_size);
  pentagonal.assign(pent_val, pent_val+seq_size);
  
  const int seq_cnt = 6;
  vector<int> *seq_addrs[seq_cnt] = {
    &fibonacci, &lucas, &pell,
    &triangular, &square, &pentagonal
  };
  vector<int> *current_vec = 0;
  for (int ix = 0; ix < seq_cnt; ++ix) {
    int seq_index = rand() % seq_cnt;
    current_vec = seq_addrs[seq_index];
    for(int i = 0; i < (current_vec -> size()); ++i) {
      cout << (*current_vec)[i];
      if (i != (current_vec -> size() - 1)) {
        cout << ',';
      }
    }
    cout << '\n';
  }
  return 0;
}