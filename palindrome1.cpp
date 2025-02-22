#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int rn = 0;
  int dup=n;
    while(n > 0) { 
        int ld = n % 10; 
        rn = (rn * 10) + ld;
        n = n / 10;
    }
    if(dup==rn)
    cout << "true";
  else cout<<"false";
    return 0; 
}
