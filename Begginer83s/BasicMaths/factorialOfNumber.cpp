#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        int factorial=1;
        if(n == 0 ) return factorial;
        for(int i=1;i<=n;i++){
            factorial = factorial * i;
        }
        return factorial;
    }
};


int main()
{
    int n = 4;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to find the factorial of n
    int ans = sol.factorial(n);
    
    cout << "The factorial of given number is: " << ans;
    
    return 0;
}
