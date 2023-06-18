#include <vector>
#include <algorithm>
using namespace std;

int min(vector<int> list){
    int n0 = *min_element(list.begin(), list.end());
    return n0;
}

int max(vector<int> list){
    int n1 = *max_element(list.begin(), list.end());
    return n1;
  }

int main (){
  vector<int> v = {1, 2, 3, 4, 5};
  min(v);
  max(v);
  return 0;
}


