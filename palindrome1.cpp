#include<iostream>
using namespace std;

int main() {
    int n; 
    cin >> n; // Read input number
    int rn = 0; // Reverse number
    int dup = n; // Store original number

    // Loop to reverse the digits of n
    while(n > 0) {
        int ld = n % 10; // Get last digit
        rn = (rn * 10) + ld; // Build reversed number
        n = n / 10; // Remove last digit
    }

    // Check if the original number equals the reversed number
    if(dup == rn) 
        cout << "true"; // It's a palindrome
    else 
        cout << "false"; // It's not a palindrome
    
    return 0; 
}
