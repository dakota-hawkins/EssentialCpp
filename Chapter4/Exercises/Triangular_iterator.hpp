class Triangular_iterator {
  friend class Triangular;
public:
  Triangular_iterator(int index) : _index(index - 1){}
  //inline bool operator == (const Triangular_iterator&) const;
  inline bool operator == (const Triangular_iterator &rhs) const {
    return _index == rhs._index;
  }
  //bool operator != (const Triangular_iterator&) const;
  inline bool operator != (const Triangular_iterator &rhs) const {
    return !(*this == rhs);
  }
  inline int operator * (const Triangular_iterator &rhs) const {
    rhs.check_integrity();
    return Triangular::_elements[_index];
  }
  int& operator ++ (); // prefix version
  int operator ++ (int); // postfix version
private:
  void check_integrity() const;
  int _index;
};
