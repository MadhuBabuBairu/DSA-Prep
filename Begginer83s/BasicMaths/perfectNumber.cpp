#include <bits/stdc++.h>
using namespace std;
//optimal solution
class Solution {
public:
    /* Function to find whether the
    number is perfect or not */
    bool isPerfect(int n) {
        // Edge case
        if(n == 1) return false;
        
        /* Variable to store the sum
        of all proper divisors */
        int sum = 0;
        
        // Loop from 1 to square root of n
        for(int i=1; i <= sqrt(n); ++i) {
            
            // Check if i is a proper divisor
            if(n % i == 0){
                // Update sum
                sum = sum + i;
                
                /* Add the counterpart divisor
                if it's different from i and
                if it is not n itself */
                if(n/i != n && i != n/i) {
                    sum = sum + (n/i);
                }
            }
        }
        
        // Compare sum and n
        if(sum == n) return true;
        return false;
    }
};

int main() {
    int n = 6;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to find whether the
     given number is perfect or not */
    bool ans = sol.isPerfect(n);
    
    if(ans) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
    
    return 0;
}
