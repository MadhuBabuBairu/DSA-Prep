#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

void pattern17(int n) {

for(int i=0;i<n;i++){

for(int j=n-1-i;j>0;j--){

cout<<" ";

}

char ch = 'A';

int breakpt = (2 * i +1)/2;

for(int j=0;j< 2*i+1;j++){

cout<<ch;

if(j<breakpt) ch++;

else ch--;

}

cout<<endl;

}



}

};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern17(N);
    
    return 0;
}
