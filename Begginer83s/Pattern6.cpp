#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<j;
            }cout<<endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern6(N);

    return 0;
}
