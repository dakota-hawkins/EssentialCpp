#include "Exercise4-5.cpp"

int main() {
  Matrix m_1(double(1));
  m_1.print();
  Matrix m_2 = m_1 + m_1;
  m_2.print();
  return 0;
}
