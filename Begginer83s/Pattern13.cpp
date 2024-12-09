#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

void pattern13(int n) {

int k=1;

for(int i=1;i<=n;i++){

for(int j=1;j<=i;j++){

cout<<k<<" ";

k++;

}cout<<endl;

}
}

};

int main() {
    int N = 5;

    //Create an instance of Solution class
    Solution sol;

    sol.pattern13(N);

    return 0;
}