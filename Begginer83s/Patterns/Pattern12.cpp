#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int k=1;k<=2*n-2*i;k++){
                cout<<" ";
            }
            for(int l=i;l>=1;l--){
                cout<<l;
            }
            cout<<endl;
        }
    }
};

int main() {
    int N = 5;

    //Create an instance of Solution class
    Solution sol;

    sol.pattern12(N);

    return 0;
}