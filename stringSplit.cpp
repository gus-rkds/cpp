#include <iostream>

using namespace std;

int main() {
  string str = "Gustavo alviarez 18";
  int space1 = str.find(" ");
  int space2 = str.rfind(" ");

  string name = str.substr(0, space1);
  string lastname = str.substr(space1 + 1, space2 - space1 - 1);
  string age = str.substr(space2 + 1);

  cout << "name: " << name << endl;
  cout << "lastname: " << lastname << endl;
  cout << "age: " << age << endl;

  return 0;
}