#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Create a file called "myfile.txt".
  ofstream outfile("myfile.txt");

  // Write some text to the file.
  outfile << "This is some text.\n";

  // Close the file.
  outfile.close();

  // Open the file for reading and writing.
  fstream iofile("myfile.txt", ios::in | ios::out);

  // Read the contents of the file.
  string line;
  while (getline(iofile, line)) {
    cout << line << endl;
  }

  // Delete the first line from the file.
  iofile.seekp(0, ios::beg);
  iofile << "";

  // Change the second line to "This is new text."
  iofile.seekp(10, ios::beg);
  iofile << "This is new text.\n";

  // Close the file.
  iofile.close();

  return 0;
}
