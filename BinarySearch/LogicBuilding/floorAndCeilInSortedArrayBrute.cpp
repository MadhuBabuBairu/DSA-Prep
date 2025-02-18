#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        // Brute force
        int floor = -1;
        int ceil = -1;
        int n = nums.size();
   
        for (int i = 0; i < n; i++) {
            if (nums[i] >= x && (nums[i] < ceil || ceil == -1)) {
                ceil = nums[i];
            }
            if (nums[i] <= x) {
                floor = nums[i];
            }
            if (floor != -1 && ceil != -1) return {floor, ceil};
        }
        return {floor, ceil};
    }
};

int main() {
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    int x = 5;

    // Create an instance of the Solution class
    Solution sol;

    vector<int> result = sol.getFloorAndCeil(nums, x);

    cout << "The floor and ceil are: " << result[0] << " " << result[1] << endl;

    return 0;
}