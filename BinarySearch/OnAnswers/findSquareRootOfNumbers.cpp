#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long floorSqrt(long long n)  {
      //Optimal
      long long ans = 1;
      long long  low = 0;
      long long high = n;

      //Binary search
      while(low <= high){
        long mid = (low + high)/2;
        
        //check
        if(mid * mid  <= n){
            ans = mid; //we pick only the floor or perfect sq as per question
            low = mid + 1; //[low ....mid...high] goo right
        }
        else{
            high = mid - 1; // goo left
        }
      }
      return high; //ans is also fine
    }
};

int main() {
    int n = 28;
    
    // Create an object of the Solution class
    Solution sol;
    
    int ans = sol.floorSqrt(n);
    
    // Print the result
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    
    return 0;
}
