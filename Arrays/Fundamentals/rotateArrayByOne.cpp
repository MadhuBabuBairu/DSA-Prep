#include<bits/stdc++.h>
using namespace std;
//Optimal
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        // Store the first element in a temporary variable
        int temp = nums[0];
        
        // Shift elements to the left
        for (int i = 1; i < nums.size(); ++i) {
            nums[i - 1] = nums[i];
        }

        // Place the first element at the end
        nums[nums.size() - 1] = temp;
    }
};
//Brute
// class Solution {
// public:
//     void rotateArrayByOne(vector<int>& nums) {
//         nums.push_back(nums[0]);
//         nums.erase(nums.begin());
//         // return nums;
//     }
// };

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};

    solution.rotateArrayByOne(nums);

    for (int num : nums) {
        cout << num << " "; // Output the rotated array
    }

    return 0;
}
