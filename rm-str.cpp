#include <iostream>
#include <string>

using namespace std;

string replaceAll(string str) {
  int position = str.find("#");
  string res = str.substr(0,position);
  return res;  
}

int main (){
  cout << endl << replaceAll("www.codewars.com?page=1") <<endl;
  return 0;
}
