#include "Exercise4-5.hpp"

// Member Functions
inline Matrix::Matrix(double value) { //< Default construtor
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      _matrix[i][j] = value;
    }
  }
}

inline Matrix::Matrix(double value_array[16]) { //< Specified constructor
  int array_index = 0;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      _matrix[i][j] = value_array[array_index];
      array_index++;
    }
  }
}

inline void Matrix::print() const { //< print matrix
  for (int i = 0; i < this -> rows(); ++i) {
    for (int j = 0; j < this -> columns(); ++j) {
      cout << _matrix[i][j];
      if (j < this -> columns() - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}

inline void Matrix::operator += (const Matrix add_matrix) {
  if (! this -> add_check(add_matrix)) {
    cerr << "Addition error: matrices incompatible dimensions." << endl;
  }
  for (int i = 0; i < (*this).rows(); ++i) {
    for (int j = 0; j < (*this).columns(); ++j) {
      _matrix[i][j] = add_matrix(i,j);
    }
  }
}

// Non-member Functions

inline Matrix operator + (const Matrix &matrix_1, const Matrix &matrix_2) { //< add two matrices
  if (! add_check(matrix_1, matrix_2)) {
    cerr << "Addition error: matrices incompatible dimensions." << endl;
  }
  Matrix out_matrix(double(0));
  out_matrix += matrix_1;
  out_matrix += matrix_2;
  return out_matrix;
}

inline Matrix operator * (const Matrix &matrix_1, const Matrix &matrix_2) { //< multiply two matrices
  if (! matrix_1.multiply_check(matrix_2)) {
    cerr << "Multiplication error: rows - " << matrix_1.rows() << " - not equal "
    << "to columns - " << matrix_2.columns() << "." << endl;
  }
  Matrix out_matrix(double(0));
  for (int i = 0; i < matrix_1.columns(); ++i) {
    for (int j = 0; j < matrix_2.rows(); ++j) {
      for (int k = 0; k < matrix_1.columns(); ++k) {
        out_matrix(i,j) += matrix_1( i, k) * matrix_2( k, j);
      }
    }
  }
  return out_matrix;
}
