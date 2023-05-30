#include "iostream"
#include "string"

using namespace std;

bool sol(string const &str, string const &ending) {
    return (string(str.end() - ending.size(), str.end()) == ending);
}

int main() 
{
    cout << sol("abcde", "cde");
    cout << sol("abcde","hg");
    return 0;
}
