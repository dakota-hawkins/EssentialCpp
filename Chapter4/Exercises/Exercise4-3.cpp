#include "Exercise4-3.hpp"

string GlobalData::_program_name;
string GlobalData::_version_stamp;
int GlobalData::_version_number;
int GlobalData::_tests_run;
int GlobalData::_tests_passed;

GlobalData::GlobalData(const string program_name, const string version_stamp,
const int version_number, const int tests_run, const int tests_passed) {
  set_program_name(program_name);
  set_version_stamp(version_stamp);
  set_version_number(version_number);
  set_tests_run(tests_run);
  set_tests_passed(tests_passed);
}

void display(GlobalData &data) {
  cout << "Program name: " << data.program_name() << endl;
  cout << "Version stamp: " << data.version_stamp() << endl;
  cout << "Version number: " << data.version_number() << endl;
  cout << "Tests run: " << data.tests_run() << endl;
  cout << "Tests passed: " << data.tests_passed() << endl;
}
