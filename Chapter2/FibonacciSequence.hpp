//
//  FibonacciSequence.hpp
//
//
//  Created by Hawkins, Dakota Y on 5/27/16.
//
//

#ifndef FibonacciSequence_hpp
#define FibonacciSequence_hpp

#include <stdio.h>
#include <vector>
using namespace std;


const vector<int>* fibon_seq(int size);
/*
 * fibon_seq() :
 *  Function that returns a Fibonacci sequence of desired length.
 * Paramters :
 *  size: integer denoting desire size of Fibonacci sequence.
 * Return :
 *  Fibonacci sequence of length 'size'.
 */

void displayVector(vector<int> vec);
/* displayVector:
 *  Function to print vector to screen. Displays 10 values per line.
 *
 * Parameters:
 *  vec: vector of integers to be printed to screen.
 *
 * Return:
 *  void
 */

inline bool is_size_okay(int size);
/* isSizeOkay:
 *  Function to determine whether the requested size of a sequence is allowable.
 * Parameters:
 *  size: integer value denoting requested size of sequence
 * Return:
 *  Boolean value determining whether 'size' is acceptable.
 */

#endif /* FibonacciSequence_hpp */
