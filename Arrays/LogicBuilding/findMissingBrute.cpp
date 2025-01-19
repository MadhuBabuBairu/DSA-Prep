#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int missingNumber(vector<int>& nums) {
        // brute force by linear search

        // as 0 till n (included)

        for (int i = 0; i <= nums.size(); i++) {
            int found = 0;

            // inner for checking and break if found

            for (int j = 0; j <= nums.size(); j++) {
                if (nums[j] == i) {
                    found = 1;

                    break;
                }
            }

            if (found == 0) return i;
        }
    }
};

int main() {
    vector<int> nums = {0,1, 2, 4};
    
    // Create an instance of the Solution class
    Solution solution;
    
    /* Call the missingNumber method 
    to find the missing number*/
    int ans = solution.missingNumber(nums);
    
    
    cout << "The missing number is: " << ans << endl;
    
    return 0;
}
