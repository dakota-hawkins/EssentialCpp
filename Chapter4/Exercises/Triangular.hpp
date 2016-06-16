#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Triangular {
public:
  // Set of constructors.
  Triangular(); // Default constructor
  Triangular(int length);
  Triangular(int length, int beginning_position);
  Triangular(const Triangular &rhs);

  // Static member functions
  static bool is_element(int element);
  static void generate_elements(int length);
  static void generate_elements_to_value(int value);
  static void display(int length, int beginning_position, ostream &os = cout);

  // Constant member functions
  int length() const {
    return _length;
  }
  int begin() const {
    return _beginning_position;
  }
  int element(int position) const;

  bool next(int &val) const;
  void next_reset() const {
    _next = _beginning_position - 1;
  }

  Triangular& copy(const Triangular &rhs);

private:
  string _name; // name of specific instantiation
  int _length; // number of elements
  int _beginning_position; // beginning position of range
  mutable int _next; // next element to iteratore over

  // Static data members
  static const int _max_elements = 1024;
  static vector<int> _elements;
};
