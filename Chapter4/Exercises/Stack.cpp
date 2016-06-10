#include "Stack.hpp"
#include <algorithm>

bool Stack::pop(string &element) {
  if (empty()) {
    return false;
  }
  element = _stack.back();
  _stack.pop_back();
  return true;
}

bool Stack::peek(string &element) {
  if (empty()) {
    return false;
  }
  element = _stack.back();
  return true;
}

bool Stack::push(const string &element) {
  if (full()) {
    return false;
  }
  _stack.push_back(element);
  return true;
}

bool Stack::find(const string &element) {
  if (empty()) {
    return false;
  }
  vector<string>::const_iterator end = _stack.end();
  if (::find(_stack.begin(), _stack.end(), element) == end) {
    return false;
  }
  return true;
}

int Stack::count(const string &element) {
  return ::count(_stack.begin(), _stack.end(), element);
}
