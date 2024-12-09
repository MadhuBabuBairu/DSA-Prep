#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

void pattern16(int n) {

char ch = 'A';

for(int i=0;i<n;i++){

for(int j=0;j<=i;j++){

cout<<ch;

}cout<<endl;

ch++;

}
}

};

int main() {
    int N = 5;

    //Create an instance of Solution class
    Solution sol;

    sol.pattern16(N);

    return 0;
}