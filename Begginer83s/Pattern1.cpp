#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
};

int main() {
    int N = 4;
    
    //Create an instance of the Solution class
    Solution sol;
    
    sol.pattern1(N);
    
    return 0;
}
