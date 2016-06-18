#include <string>
#include <set>
#include <iostream>
using namespace std;

class UserProfile {

public:
  // Enumerattion data for user level
  enum userLevel {BEGINNER, INTERMEDIATE, ADVANCED, GURU};
  // Set of Constucturs
  UserProfile(); // Default constructor
  UserProfile(const string &new_login, const string &new_account,
  const userLevel &newLevel);

  // Get methods
  inline string login() const {
    return _login;
  }

  inline string account_name() const {
    return _account_name;
  }

  inline int login_times() const {
    return _login_times;
  }

  inline int guesses() const {
    return _guesses;
  }

  inline int correct_guesses() const {
    return _correct_guesses;
  }

  inline string current_level() const {
    string level_table[4] = {"Beginner", "Intermediate", "Advanced", "Guru"};
    return level_table[_current_level];
  }

  inline double percent_correct() const {
    return _percent_correct;
  }

  inline static set<string> current_users() {
    return _current_users;
  }

  // Set methods
  void reset_login(const string &new_login);
  inline void reset_account_name(const string &new_name) {
    _account_name = new_name;
  }
  inline void reset_login_times(const int &new_times) {
    _login_times = new_times;
  }
  void reset_guesses(const int &new_guesses);
  void reset_correct_guesses(const int &new_correct);
  inline void reset_current_level(const userLevel &new_level) {
    _current_level = new_level;
  }
  void reset_current_level(const string &new_level);

  // Operator Re-assignment
  inline bool operator ==(const UserProfile &profile){
    if (this -> login() == profile.login()){
      return true;
    }
    return false;
  }

  inline bool operator !=(const UserProfile &profile){
    return(!(*this == profile));
  }


  // Member functions
  static void display_current_users();

  // Non-member functions
  void display(const UserProfile &profile);

private:
  string _login;
  string _account_name;
  userLevel _current_level;
  int _login_times;
  int _guesses;
  int _correct_guesses;
  double _percent_correct;

  // Static data members
  static set<string> _current_users;
  static int _num_guests;

  // Private functions
  inline void calculate_percent_correct(int num_guesses, int num_correct);

};
