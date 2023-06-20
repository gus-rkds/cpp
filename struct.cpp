#include <iostream>
using namespace std;

struct Person {
  char *name;
  int age;
  float salary;
};

int main() {
  Person p;
  p.name = "John Doe";
  p.age = 30;
  p.salary = 100000.0f;

  cout << p.name;
  cout << p.age;
  cout << p.salary;
  
  return 0;
}