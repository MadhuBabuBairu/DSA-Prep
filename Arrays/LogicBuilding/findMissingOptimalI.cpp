#include <bits/stdc++.h>
using namespace std;

class Solution {
public://optimal 1
    int missingNumber(vector<int>& nums) {
        // sum approach
        int n = nums.size();
        int s1 = n * (n+1)/2;
        int s2 = 0;
        for(int i=0;i<n;i++){
            s2 += nums[i];
        }
        return s1 - s2;
    }
};

int main() {
    // Example vector with missing number
    vector<int> nums = {0,1, 2, 4};
    
    // Create an instance of the Solution class
    Solution solution;
    
    /* Call the missingNumber method
    to find the missing number*/
    int ans = solution.missingNumber(nums);
    
    cout << "The missing number is: " << ans << endl;
    
    return 0;
}
   