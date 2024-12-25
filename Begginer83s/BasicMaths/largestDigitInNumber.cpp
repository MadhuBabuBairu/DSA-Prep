#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        if(n == 0) return n;
        int ld=0;
        vector<int> vt;
        while(n > 0){
            if(n < 10) ld = n;
            else ld = n%10;
            vt.push_back(ld);
            n = n/10;
        }
        auto it = max_element(vt.begin(), vt.end());
        int sol = *it;
        return sol;
    }
};

int main()
{
    int n = 348;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    // Function call to find the largest digit in n
    int ans = sol.largestDigit(n);
    
    cout << "The largest digit in the number is: " << ans;
    
    return 0;
}
