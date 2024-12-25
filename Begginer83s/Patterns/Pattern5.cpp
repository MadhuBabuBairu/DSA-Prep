#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern5(int n) {
        for(int i=n;i>=1;i--){
            for(int j=i;j>=1;j--){
                cout<<"*";
            }cout<<endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern5(N);

    return 0;
}
