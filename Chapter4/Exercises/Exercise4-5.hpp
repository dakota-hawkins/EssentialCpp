#include <iostream>

using namespace std;

class Matrix {

public:
  Matrix(double value); //< Constructur creating 4x4 matrix of single value
  Matrix(double value_array[16]); //< Construct converting a 1x16 array into matrix

  // Constant member functions
  void print() const; //< member function to print out matrix

  int rows() const {
    return _rows;
  }

  int columns() const {
    return _columns;
  }
  // Overload operators
  inline double& operator () (int row, int column) { //< index operator for element extraction
    return(_matrix[row][column]);
  }
  inline double operator () (int row, int column) const { //< index operator for element extraction
    return(_matrix[row][column]);
  }
  void operator += (const Matrix add_matrix); //< compound addition operator for matrices
  friend inline Matrix operator * (const Matrix &matrix_1, const Matrix &matrix_2);
  friend inline Matrix operator + (const Matrix &matrix_1, const Matrix &matrix_2);

private:
  double _matrix[4][4];
  static const int _rows = 4;
  static const int _columns = 4;

  bool add_check(const Matrix &matrix) const {
    if ((*this).rows() != matrix.rows() || (*this).columns() != matrix.columns()) {
      return false;
    }
    return true;
  }

  bool multiply_check(const Matrix &matrix) const {
    if ((*this).rows() != matrix.columns()) {
      return false;
    }
    return true;
  }
};
