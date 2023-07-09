#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Create a file stream
  fstream file;

  // Open the file in append mode
  file.open("test.txt", ios::out | ios::app);

  // Write two lines to the file
  file << "32 46" << endl;
  file << "hola perro" << endl;

  // Close the file
  file.close();

  // Reopen the file in read mode
  file.open("test.txt", ios::in);

  // Read the two lines from the file
  string line1, line2;
  getline(file, line1);
  getline(file, line2);

  // Print the two lines
  cout << line1 << endl;
  cout << line2 << endl;

  return 0;
}