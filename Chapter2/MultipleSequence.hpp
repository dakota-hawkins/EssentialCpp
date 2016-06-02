//
//  MultipleSequence.hpp
//  
//
//  Created by Hawkins, Dakota Y on 5/27/16.
//
//

#ifndef MultipleSequence_hpp
#define MultipleSequence_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

const vector<int>* fibon_seq(int size);
/* fibon_seq() :
 *  Function that returns a Fibonacci sequence of desired length.
 * Paramters :
 *  size: integer denoting desire size of Fibonacci sequence.
 * Return :
 *  Fibonacci sequence of length 'size'.
 */

const vector<int>* lucas_seq(int size);
/* lucas_seq() :
 *  Function that returns a Lucas sequence of desired length.
 * Paramters :
 *  size: integer denoting desire size of Lucas sequence.
 * Return :
 *  Lucas sequence of length 'size'.
 */

const vector<int>* pell_seq(int size);
/* pell_seq() :
 *  Function that returns a Pell sequence of desired length.
 * Paramters :
 *  size: integer denoting desire size of Pell sequence.
 * Return :
 *  Pell sequence of length 'size'.
 */

const vector<int>* triangle_seq(int size);
/* triangle_seq() :
 *  Function that returns a Triangle sequence of desired length.
 * Paramters :
 *  size: integer denoting desire size of Triangle sequence.
 * Return :
 *  Triangle sequence of length 'size'.
 */

const vector<int>* square_seq(int size);
/* square_seq() :
 *  Function that returns a Square sequence of desired length.
 * Paramters :
 *  size: integer denoting desire size of Square sequence.
 * Return :
 *  Square sequence of length 'size'.
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

const vector<int>* (*sequence_pointer)(int);
/* sequence_pointer:
 *  Pointer to a function that returns a sequence.
 * Parameters:
 *  int: integer value -- usually defines position of element in a sequence.
 * Return:
 *  Returns pointer to a vector of integers.
 */

bool sequence_element(int pos, int &elem, const vector<int>* (*sequence_pointer)(int));
/* sequence_element
 *  Function that returns the specified element of a sequence.
 * Parameters:
 *  pos: position of the element of interest in a sequence.
 *  elem: reference value of the element of interest
 *  sequence_pointer: pointer to a function defining the sequence.
 * Return:
 *  element of the specified sequence at the specified position.
 */

#endif /* MultipleSequence_hpp */
