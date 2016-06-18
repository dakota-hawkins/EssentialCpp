#include "Exercise4-4.cpp"

int main() {
  UserProfile a = UserProfile();
  display(a);
  UserProfile b = UserProfile();
  display(a);
  display(b);
  a.reset_login("guest1");
  a.reset_login("xxDemonSlayerxx");
  display(a);
  UserProfile c = UserProfile(string("Drizt"), string("Drizt"),
    UserProfile::GURU);
  a.display_current_users();
  c.reset_guesses(6);
  c.reset_correct_guesses(5);
  display(c);
  if (c == c) {
    cout << "Yay!" << endl;
  }
  if (c != b) {
    cout << "Double Yay!" << endl;
  }
  cout << a;
  cin >> b;
  display(b);
  b.display_current_users();
  return 0;
}
