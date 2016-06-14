#include "Triangular.hpp"

Triangular::Triangular() : _name("Triangular") {
  // Default constructor
  _length = 1;
  _beginning_position = 1;
  _next = 0;
}

Triangular::Triangular(int length) : _name("Triangular") {
  _length = (length > 0 ? length : 1);
  _beginning_position = 1;
  _next = 0;
}

Triangular::Triangular(int length, int beginning_position) : _name("Triangular") {
  _length = (length > 0 ? length : 1);
  _beginning_position = (beginning_position > 0 ? beginning_position : 1);
  _next = _beginning_position - 1;
}

Triangular::Triangular(const Triangular &rhs)
  : _name("Triangular"),
    _length(rhs._length),
    _beginning_position(rhs._beginning_position),
    _next(rhs._beginning_position - 1)
{}
