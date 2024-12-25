#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        for(int i=n;i>=1;i--){
            for(int j=0;j<=n-i-1;j++){
                cout<<" ";
            }
            for(int j=2*i-1;j>=1;j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern8(N);

    return 0;
}
