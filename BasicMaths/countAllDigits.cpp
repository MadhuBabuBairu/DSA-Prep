#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {

        if(n == 0) return 1;
        int count = 0;
        while(n > 0){
            
            n = n/10;
            count++;
        } return count;

    }
};

int main()
{
    int n = 6678;
    
    /* Creating and instance of 
    Solution class */
    Solution sol; 
    
    // Function call to get count of digits in n
    int ans = sol.countDigit(n);
    cout << "The count of digits in the given number is:" << ans;
    
    return 0;
}