#include "LessThan.hpp"

inline bool LessThan::
operator() (int value) const {
  return value < _value; 
}
