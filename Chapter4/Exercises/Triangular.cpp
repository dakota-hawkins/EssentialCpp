#include "Triangular.hpp"

vector<int> Triangular::_elements;

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

int Triangular::element(int position) const {
  return _elements[position - 1];
}

Triangular& Triangular::copy(const Triangular &rhs) {
  if (this != &rhs) {
    _length = rhs._length;
    _beginning_position = rhs._beginning_position;
    _next = rhs._beginning_position;
  }
  return *this;
}

int Triangular::beginning_position() const {
  return _beginning_position;
}

int Triangular::get_length() const {
  return _length;
}

// Static Member functions

bool Triangular::is_element(int value) {
  if (! _elements.size() || _elements[_elements.size() - 1 < value]) {
    generate_elements_to_value(value);
  }
  vector<int>::iterator found_it;
  vector<int>::iterator end_it = _elements.end();

  found_it = find(_elements.begin(), end_it, value);
  return (found_it != end_it);
}

void Triangular::generate_elements(int length) {
  if (length < 0 || length > _max_elements) {
    cerr << "Error generate_elements(): desired length outside window (0, "
    << _max_elements << "]" <<  endl;
  }
  if (_elements.size() < length) {
    int i = _elements.size() ? _elements.size() + 1 : 1;
    for ( ; i <= length - 1; ++i) {
      _elements.push_back(i*(i + 1)/2);
    }
  }
}

void Triangular::display(int length, int beginning_position, ostream &os) {
  for (int i = beginning_position - 1; i < length; ++i) {
    os << _elements[i] << ((i + 1) % 10 ? " " : "\n");
  }
}

void Triangular::generate_elements_to_value(int value) {
  int i = _elements.size();
  if (! i) {
    _elements.push_back(i);
    i = 1;
  }
  while (_elements[i - 1] < value && i < _max_elements) {
    _elements.push_back(i*(i + 1)/2);
    ++i;
  }
  if (i == _max_elements) {
    cerr << "Triangular Sequence: value too large " << value << " exceeds max"
    << " size of " << _max_elements << endl;
  }
}

// Non Member functions

ostream& operator << (ostream &os, const Triangular &rhs);
ostream& operator << (ostream &os, const Triangular &rhs) {
  os << "(" << rhs.beginning_position() << ", " << rhs.get_length() << ") ";
  rhs.display(rhs.get_length(), rhs.beginning_position(), os);
  return os;
}
