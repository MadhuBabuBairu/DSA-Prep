#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    // better with hashing

    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int hashmpp[n + 1] = {0};

        // count freq and mark 1;

        for (int i = 0; i < n; i++) {  // remember we should not include n as it
                                       // reaches out of array

            hashmpp[nums[i]]++;
        }

        // finding freq with 0 , that is missing

        for (int i = 0; i <= n; i++) {  // included n as given

            if (hashmpp[i] == 0) return i;
        }

        return -1;
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
