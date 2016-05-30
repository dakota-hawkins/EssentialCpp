//
//  Exercise1-7.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/25/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  vector<string> word_vec;
  vector<string> sorted_word_vec;
  ifstream readfile("/Users/hawk790/Documents/CppEssentials/Working/Exercises/Chapter1/WordList.txt");
  string word;
  if (!readfile) {
    cerr << "Can't find Wordlist.txt. Please check location of file.\n";
  }
  ofstream outfile("/Users/hawk790/Documents/CppEssentials/Working/Exercises/Chapter1/SortedWordList.txt");
  if (!outfile) {
    cerr << "Failed to open output file.\n";
  }
  while (readfile >> word) {
    word_vec.push_back(word);
  }
  for (int i = 0; i < word_vec.size(); i++) {
    cout << word_vec[i] << "\n";
  }
  sort(word_vec.begin(), word_vec.end());
  outfile << "Sorted Text: \n";
  for (int i = 0; i < word_vec.size(); i++) {
    outfile << word_vec[i] << '\n';
  }
  return 0;
}

