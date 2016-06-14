#include <string>
using namespace std;

class Triangular {
public:
  // Set of constructors.
  Triangular(); // Default constructor
  Triangular(int length);
  Triangular(int length, int beginning_position);
  Triangular(const Triangular &rhs);

  // Constant member functions
  int length() const {
    return _length;
  }
  int begin() const {
    return _ beginning_position;
  }
  int element(int position) const;

  // Non-constant member functions
  bool next(int &val);
  void next_reset() {
    _next = _beginning_position - 1;
  }
private:
  string _name;
  int _length; // number of elements
  int _beginning_position; // beginning position of range
  int _next; // next element to iteratore over
};
