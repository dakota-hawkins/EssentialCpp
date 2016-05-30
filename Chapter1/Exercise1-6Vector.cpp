//
//  Exercise1-6.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/24/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main() {
  vector<int> sequence;
  int value;
  int sum;
  double average;
  cout << "Please provide a sequence of integers.\n";
  while (cin >> value) {
    sequence.push_back(value);
  }
  cout << "Sequence: ";
  for (int i = 0; i < sequence.size(); ++i) {
    cout << sequence[i];
    if (i < (sequence.size() - 1)) {
      cout << ',';
    }
    sum += sequence[i];
  }
  cout << "\nFinal sum: " << sum << '\n';
  average = sum / sequence.size();
  cout << "Sequence average: " << average << '\n';
  return 0;
}
