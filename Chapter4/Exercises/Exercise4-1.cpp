#include "Stack.cpp"
#include <iostream>

int main() {
  Stack new_stack;
  string string_array[4] = {"Hey", "What's",  "up?", "Hello"};
  for (int i = 0; i < 4; i++) {
    new_stack.push(string_array[i]);
  }
  string filler_string;
  cout << "Popping top value of stack. Should be 'Hello': " << endl;
  new_stack.pop(filler_string);
  cout << filler_string << endl;
  cout << "Pushing new value to stack: 'Eyo'." << endl;
  new_stack.push(string("Eyo"));
  cout << "Peeking at top of the stack. Should be 'Eyo': " << endl;
  new_stack.peek(filler_string);
  cout << filler_string << endl;
  cout << "Checking to see if 'up' is in the stack: " << endl;
  cout << new_stack.find(string("up")) << endl;
  cout << "Checking to see if 'up?' is in the stack: " << endl;
  cout << new_stack.find(string("up?")) << endl;
  cout << "Counting times 'up?' is in the stack: " << endl;
  cout << new_stack.count(string("up?")); 
  return 0;
}
