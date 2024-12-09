#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k=1;k<=2*n-2*i;k++){
                cout<<" ";
            }
            for(int l=i;l>=1;l--){
                cout<<"*";
            }cout<<endl;
        }
         for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k=1;k<=2*n-2*i;k++){
                cout<<" ";
            }
            for(int l=i;l>=1;l--){
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
    
    sol.pattern19(N);
    
    return 0;
}
