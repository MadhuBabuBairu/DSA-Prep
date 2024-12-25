#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        int k;
        for(int i=1;i<=n;i++){
            k=1;
            for(int j=1;j<=i;j++){
                cout<<k;
                k--;
            }   
            cout<<endl;
        }
    }
};

int main() {
    int N = 5;

    //Create an instance of Solution class
    Solution sol;

    sol.pattern11(N);

    return 0;
}