#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        if(n == 0) return 0;
        int countOddDigit = 0;
        int lastdg = 0;
        while(n>0){
            if(n < 10) lastdg = n;
            else lastdg = n%10;
            if(lastdg%2 != 0) countOddDigit++;
            n=n/10;
        } return countOddDigit;
    }
};

int main() {
    int n = 6678;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to get count of odd digits in n
    int ans = sol.countOddDigit(n);
    cout << "The count of odd digits in the given number is: " << ans;
    
    return 0;
}