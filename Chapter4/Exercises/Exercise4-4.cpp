#include "Exercise4-4.hpp"

// Static data members
set<string> UserProfile::_current_users;
int UserProfile::_num_guests = 0;
 // Constructors
inline UserProfile::UserProfile() :
  _account_name("guest"), _current_level(BEGINNER), _login_times(1),
  _guesses(0), _correct_guesses(0) {
  calculate_percent_correct(_guesses, _correct_guesses);
  reset_login("guest");
}

inline UserProfile::UserProfile(const string &new_login,
const string &new_account, const userLevel &newLevel) : _login_times(1),
_guesses(0), _correct_guesses(0) {
  reset_login(new_login);
  reset_account_name(new_account);
  reset_current_level(newLevel);
  calculate_percent_correct(_guesses, _correct_guesses);
}

// Set methods
inline void UserProfile::reset_login(const string &new_login) {
  if (new_login == "guest") {
    _login = "guest" + to_string(_num_guests);
    ++_num_guests;
  } else {
    if (! _current_users.count(new_login)) {
      if (_current_users.count(_login) >= 1) {
        _current_users.erase(_login);
      }
      _login = new_login;
    } else {
      cerr << "Login already in use. Please select a different login name."
      << endl;
    }
  }
  _current_users.insert(_login);
}

inline void UserProfile::reset_guesses(const int &new_guesses) {
  if (new_guesses == 0) {
    _guesses = 0;
    _correct_guesses = 0;
  } else if (new_guesses < _correct_guesses) {
      cerr << "Error: setting total number of guesses lower than the number of" <<
      " correct guesses." << endl;
  } else {
    _guesses = new_guesses;
    calculate_percent_correct(_guesses, _correct_guesses);
  }
}

inline void UserProfile::reset_correct_guesses(const int &new_correct) {
  if (new_correct > _guesses) {
    cerr << "Error: setting number of correct guesses higher than total number" <<
    " of correct guesses." << endl;
  }
  _correct_guesses = new_correct;
  calculate_percent_correct(_guesses, _correct_guesses);
}

inline void UserProfile::reset_current_level(const string &new_level) {
  if (new_level == "Beginner") {
    _current_level = BEGINNER;
  } else if (new_level == "Intermediate") {
    _current_level = INTERMEDIATE;
  } else if (new_level == "Advanced") {
    _current_level = ADVANCED;
  } else if (new_level == "Guru") {
    _current_level = GURU;
  } else {
    cerr << "Error -- reset_current_level() : " << new_level << " is not an "
    << "allowable level." << endl;
  }
}

// Member Functions

inline void UserProfile::display_current_users() {
  set<string>::iterator begin = _current_users.begin();
  for ( int i = 0; begin != _current_users.end(); ++begin, ++i) {
    cout << *begin << ((i + 1) % 10 ? ", " : "\n");
  }
  cout << endl;
}

// Non-member functions
void display(const UserProfile &profile) {
  cout << "Login: " << profile.login() << endl;
  cout << "Account Name: " << profile.account_name() << endl;
  cout << "Current level: " << profile.current_level() << endl;
  cout << "Times Logged In: " << profile.login_times() << endl;
  cout << "Number of Guesses: " << profile.guesses() << endl;
  cout << "Number of Correct Guesses: " << profile.correct_guesses() << endl;
  cout << "Percent Correct Guesses: " << profile.percent_correct() << endl;
}


ostream& operator<<(ostream &out_stream, const UserProfile& profile) {
  out_stream << profile.login() << " "
  << profile.account_name() << " "
  << profile.current_level() << " "
  << profile.login_times() << " "
  << profile.guesses() << " "
  << profile.correct_guesses() << " "
  << profile.percent_correct() << endl;
  return out_stream;
}
istream& operator >>(istream &in_stream, UserProfile &profile) {
  string login, account, difficulty;
  int times, guesses, correct;
  cout << "Enter login: " << endl;
  in_stream >> login;
  cout << "Enter account name: " << endl;
  in_stream >> account;
  cout << "Enter difficulty level: " << endl;
  in_stream >> difficulty;
  cout << "Enter login in times: " << endl;
  in_stream >> times;
  cout << "Enter total number of guesses: " << endl;
  in_stream >> guesses;
  cout << "Enter number of correct guesses: " << endl;
  in_stream >> correct;
  profile.reset_login(login);
  profile.reset_account_name(account);
  profile.reset_current_level(difficulty);
  profile.reset_login_times(times);
  profile.reset_guesses(guesses);
  profile.reset_correct_guesses(correct);
  return in_stream;
}

// Private functions
inline void UserProfile::calculate_percent_correct(int num_guesses, int num_correct) {
  if (num_guesses == 0) {
    _percent_correct = double(0);
  } else {
    _percent_correct = double(num_correct) / double(num_guesses);
  }
}
