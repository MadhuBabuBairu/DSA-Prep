#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        for(int i=0;i<=2*n-2;i++){
            for(int j=0;j<=2*n-2;j++){
                int T = i;
                int B = j;
                int L = (2*n-2)-i;
                int R = (2*n-2)-j;
                cout<<(n-min(min(T,B),min(L,R)))<<" ";
            } cout<<endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern22(N);
    
    return 0;
}
