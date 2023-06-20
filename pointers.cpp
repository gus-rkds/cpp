#include <iostream>

using namespace std;

int main() {
  // Declare a pointer to an integer.
  int *pInt = nullptr;

  // Declare and initialize an integer.
  int x = 10;

  // Assign the address of x to pInt.
  pInt = &x;

  // Print the value of pInt.
  cout << "The value of pInt is: " << pInt << endl;

  // Print the value of the variable that pInt points to.
  cout << "The value of *pInt is: " << *pInt << endl;

  // Declare an array of integers.
  int arr[5] = {1, 2, 3, 4, 5};

  // Declare a pointer to the array.
  int *pArr = arr;

  // Print the address of the first element of the array.
  cout << "The address of the first element of the array is: " << pArr << endl;

  // Print the value of the first element of the array.
  cout << "The value of the first element of the array is: " << *pArr << endl;

  // Iterate through the array using the pointer.
  for (int i = 0; i < 5; i++) {
    cout << "The value of arr[" << i << "] is: " << *(pArr + i) << endl;
  }

  return 0;
}


 /*Use code with caution. Learn more
This program demonstrates the use of pointers in different cases, including:

Declaring a pointer to an integer.
Assigning the address of a variable to a pointer.
Dereferencing a pointer to access the value that it points to.
Declaring a pointer to an array.
Iterate through an array using a pointer.
I hope this helps you practice using pointers in C++.
*/