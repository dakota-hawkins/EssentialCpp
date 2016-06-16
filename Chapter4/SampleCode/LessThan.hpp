class LessThan {
public:
  LessThan(int value) : _value(value){}
  int compare_value() const {
    return _value;
  }
  void compare_value(int new_value) {
    _value = new_value;
  }
  bool operator() (int value) const;
private:
  int _value;
};
