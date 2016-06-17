#include <string>
#include <iostream>
using namespace std;

class GlobalData {
public:
  GlobalData(const string program_name, const string version_stamp,
  const int version_number, const int tests_run, const int tests_passed);

  static string program_name() {
    return _program_name;
  }
  static string version_stamp() {
    return _version_stamp;
  }
  static int version_number() {
    return _version_number;
  }
  static int tests_run() {
    return _tests_run;
  }
  static int tests_passed() {
    return _tests_passed;
  }

  static void set_program_name(const string &new_name) {
    _program_name = new_name;
  }

  static void set_version_stamp(const string &new_stamp) {
    _version_stamp = new_stamp;
  }

  static void set_version_number(const int &new_number) {
    _version_number = new_number;
  }

  static void set_tests_run(const int &new_runs) {
    _tests_run = new_runs;
  }

  static void set_tests_passed(const int &new_passed) {
    _tests_passed = new_passed;
  }

  void display(GlobalData &data);

private:
  // Static data members
  static string _program_name;
  static string _version_stamp;
  static int _version_number;
  static int _tests_run;
  static int _tests_passed;
};
