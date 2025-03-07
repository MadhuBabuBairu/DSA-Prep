#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  // [low .....0.....mid/1.....2......high]
  int helper(int mid,int N,int M){
    //here we calculate pow(i,N) we don't user direct pow() because we face some edge cases causing "Time limit exceed"
    long long ans = 1; 
    for(int i=1;i<=N;i++){
      ans = ans * mid;
      if(ans > M){
        return 2; //early exit you are in right part
      }
    }
    if(ans == M) return 1; //you are the one perfect root
    else return 0;    // you at left part
  }
public:
  int NthRoot(int N, int M) {
       //optimal approvach
      int low = 1;
      int high = M;

      //Applying Binary search algo
      while(low <= high){
        int mid = (low + high)/2;
        int midN = helper(mid,N,M);

        //helper = 1
        if(midN == 1) return mid; // you are perfect root

        //helper = 2
        else if(midN == 2){
          high = mid - 1; //go left
        }

        //heper = 0
        else {
          low = mid + 1; //go right
        }
      }

      //if no perfect root exists
      return -1;
    }
};


int main() {
    int n = 3, m = 27;
    
    // Create an object of the Solution class
    Solution sol;
    
    // Function call to find the Nth root of M
    int ans = sol.NthRoot(n, m);
    
    // Print the result
    cout << "The answer is: " << ans << "\n";
    
    return 0;
}
