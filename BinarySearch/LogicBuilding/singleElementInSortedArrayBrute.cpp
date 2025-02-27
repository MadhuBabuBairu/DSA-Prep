#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        //Brute force
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            // if(nums[i] != nums[i-1] && nums[i] != nums[i+1]) return nums[i];
            ans = ans ^ nums[i];//XOR will find the unique element, cus 1 ^ 1 = 0 & 0 ^ 0 = 0 , all the duplicates cancel itselves
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    
    // Create an object of the Solution class.
    Solution sol;
    
    int ans = sol.singleNonDuplicate(nums);
    
    // Print the result.
    cout << "The single element is: " << ans << "\n";
    
    return 0;
}
