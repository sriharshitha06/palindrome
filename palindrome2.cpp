#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(int x) {
    string s = to_string(x);
    return s == string(s.rbegin(), s.rend());
}
int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "true";
    else 
        cout << "false";

    return 0;
}
