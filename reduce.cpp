#include <iostream>

using namespace std;

int summation(int num){
 return num*(num+1)/2;
}

int main(){
  int num=5;
  cout << summation(num);
  return 0;
}
