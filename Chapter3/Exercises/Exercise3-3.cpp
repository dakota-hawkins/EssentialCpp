#include "Exercise3-3.hpp"

void fill_name_map(ifstream &name_file, map< string, vector<string> > &name_map) {
  string text_line;
  if (! name_file) {
    cerr << "Error fill_name_map(): Can't find name file." << endl;
  }
  while(getline(name_file, text_line)) {
    string family_name;
    vector<string> children;
    string::size_type pos = 0, prev_pos = 0, text_size = text_line.size();

    while ((pos = text_line.find_first_of(" ", pos)) != string::npos) {
      string::size_type end_pos = pos - prev_pos;
      if (!prev_pos) {
        family_name = text_line.substr(prev_pos, end_pos);
      } else {
        children.push_back(text_line.substr(prev_pos, end_pos));
      }
      prev_pos = ++pos;
    }

    if (prev_pos < text_size) {
      children.push_back(text_line.substr(prev_pos, pos - prev_pos));
    }

    if (! name_map.count(family_name)) {
      name_map[family_name] = children;
    } else {
      cerr << "Error fill_name_map(): \"" << family_name << "\" already present in map.\n"
      << "text_line: " << text_line << "\n" << "Positions: " << prev_pos << "," << pos << endl;
    }
  }

}

void display_name_map(const map< string, vector<string> > &name_map) {
  map< string, vector<string> >::const_iterator map_begin = name_map.begin();
  map< string, vector<string> >::const_iterator map_end = name_map.end();

  for ( ; map_begin != map_end; ++map_begin) {
    cout << "Family name: " << (map_begin -> first) << endl;
    if (map_begin -> second.empty()) {
      cout << "No children.";
    } else {
      cout << map_begin -> second.size() << " children: " << endl;
      vector<string>::const_iterator vector_begin = map_begin -> second.begin();
      vector<string>::const_iterator vector_end = map_begin -> second.end();
      for ( ; vector_begin != vector_end; ++vector_begin) {
        cout << (*vector_begin) << ", ";
      }
      cout << endl;
    }
  }

}

int main() {
  ifstream name_file("Families2.txt");
  map< string, vector<string> > name_map;
  fill_name_map(name_file, name_map);
  display_name_map(name_map);
  return 0;
}
