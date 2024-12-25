#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int p;
        int cn = n;
        if(cn<10) p = 1;
        vector <int> vt;
        while(cn>0){
           int ld=cn%10;
           vt.push_back(ld);
           p++;
           cn= cn/10;
        }
        int sum=0;
        if(n<10) return true;
        for(auto it: vt){
            sum = sum + pow(it,p);
        }
        if(sum == n) return true;
        else return false;
    }
};

int main() {
    int n = 153;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to find whether the
     given number is Armstrong or not */
    bool ans = sol.isArmstrong(n);
    
    if(ans) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    
    return 0;
}