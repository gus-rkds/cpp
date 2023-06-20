#include <iostream>

using namespace std;

int main() {
  // This program uses a switch statement to print a message based on the user's input.

  char choice;
  cout << "Enter a choice (A, B, C, or D): ";
  cin >> choice;

  switch (choice) {
    case 'A':
      cout << "You chose A." << endl;
      break;
    case 'B':
      cout << "You chose B." << endl;
      break;
    case 'C':
      cout << "You chose C." << endl;
      break;
    case 'D':
      cout << "You chose D." << endl;
      break;
    default:
      cout << "Invalid choice." << endl;
  }

  return 0;
}