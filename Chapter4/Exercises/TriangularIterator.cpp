#include "Triangular_iterator.hpp"

void Triangular_iterator::check_integrity() const {
  if (_index > Triangular::_max_elements) {
    throw iterator_overflow();
  }
  if (_index > Triangular_iterator::_elements.size()) {
    Triangular::generate_elements(_index);
  }
}

inline int& Triangular_iterator::
operator++() {
  ++_index;
  check_integrity();
  return Triangular::_elements[_index];
}
