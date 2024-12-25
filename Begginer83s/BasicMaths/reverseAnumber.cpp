#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        if(n < 10) return n;
        int lastDigit = 0;
        int reverseNumber = 0;
        while(n>0){
            if(n < 10) lastDigit = n;
            else lastDigit = n %10;
            reverseNumber = reverseNumber*10 + lastDigit;
            n = n/10;
        } 
        return reverseNumber;
    }
};

int main()
{
    int n = 6678;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to reverse the digits in n
    int ans = sol.reverseNumber(n);
    cout << "The reverse of given number is: " << ans;
    
    return 0;
}