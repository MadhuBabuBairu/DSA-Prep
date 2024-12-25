#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

void pattern15(int n) {

for(int i=n;i>0;i--){

for(char ch='A'; ch<'A'+i;ch++){

cout<<ch;

}cout<<endl;

}
}

};

int main() {
    int N = 5;

    //Create an instance of Solution class
    Solution sol;

    sol.pattern15(N);

    return 0;
}