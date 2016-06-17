#include "Exercise4-3.cpp"

int main() {
  string name = "test_program";
  string stamp = "Otter";
  int version = 2;
  int run = 3;
  int passed = 2;
  GlobalData data = GlobalData(name, stamp, version, run, passed);
  display(data);
  data.set_tests_run(data.tests_run() + 1);
  data.set_tests_passed(data.tests_passed() + 1);
  display(data); 
  return 0;
}
