#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  int SumOfDivisors(vector<int> &nums,int limit){
    int n = nums.size();
    int sumD = 0;
    for(int i=0;i<n;i++){
       sumD += ceil((double)(nums[i])/(double)(limit));
    }  
    return sumD;
   }
public:
  int smallestDivisor(vector<int> &nums, int limit) {
       //Optimal approach

       int n = nums.size();
       if (n > limit) return -1;

       int low = 1;
       int high = *max_element(nums.begin(),nums.end()); //possible ans are b/w 1 & highest element in array
       
       while(low <= high){
        int mid = (low + high)/2;
          if(SumOfDivisors(nums , mid) <= limit){
            high = mid - 1; //goo left as we need smaller value
          }
          else{
            low = mid + 1;
          }
       }
       return low;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int limit = 8;

    // Create an object of the Solution class
    Solution sol;

    int ans = sol.smallestDivisor(nums, limit);

    // Print the result
    cout << "The minimum divisor is: " << ans << "\n";

    return 0;
}
