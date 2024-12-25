#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int copy = n;
        if(n < 10) return true;
        int lastDigit = 0;
        int reverseNumber = 0;
        while(n>0){
            if(n < 10) lastDigit = n;
            else lastDigit = n %10;
            reverseNumber = reverseNumber*10 + lastDigit;
            n = n/10;
        } 
        if(reverseNumber == copy) return true;
        return false;
    }
};

int main()
{
    int n = 12321;
    
    /* Creating and instance of 
    Solution class */
    Solution sol; 
    
    // Function call to check if n is a palindrome
    bool ans = sol.isPalindrome(n);
    
    if(ans) cout << "The given number is a palindrome";
    else cout << "The given number is not a palindrome";
    
    return 0;
}