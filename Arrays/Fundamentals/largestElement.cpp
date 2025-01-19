#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largestElement = nums[0];
        for(int i=0;i<nums.size();i++){
            if(largestElement < nums[i]) largestElement = nums[i];
        }
        return largestElement;
    }
};

int main() {
    std::vector<int> nums = {3, 2, 1, 5, 2};

    // Create an instance of the Solution class
    Solution sol;

    int largest = sol.largestElement(nums);

    // Print the largest element.
    std::cout << largest << std::endl;

    return 0;
}
