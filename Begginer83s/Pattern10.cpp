#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
        void pattern2(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }cout<<endl;
        }
    }
        void pattern5(int n) {
        for(int i=n;i>=1;i--){
            for(int j=i;j>=1;j--){
                cout<<"*";
            }cout<<endl;
        }
    }
public:
    void pattern10(int n) {
        pattern2(n);
        pattern5(n-1);
    }
};

int main() {
    int N = 5;

    //Create an instance of Solution class
    Solution sol;

    sol.pattern10(N);

    return 0;
}