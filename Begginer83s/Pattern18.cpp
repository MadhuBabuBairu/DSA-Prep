#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
        for(int i=1;i<=n;i++){
            char ch = 'A'+ n - i;
            for(char ch ='A'+n-i;ch<'A'+n;ch++){
                cout<<ch<<" ";
            }cout<<endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern18(N);
    
    return 0;
}
