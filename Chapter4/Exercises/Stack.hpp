#include <string>
#include <vector>
using namespace std;

class Stack {
public:
  bool push(const string &element);
  bool pop(string &element);
  bool peek(string &element);
  bool find(const string &element);
  int count(const string &element);
  bool empty() const {
    return _stack.empty();
  }
  bool full() const {
    return _stack.size() == _stack.max_size();
  }
  int size() const {
    return _stack.size();
  }
private:
  vector<string> _stack;
};
