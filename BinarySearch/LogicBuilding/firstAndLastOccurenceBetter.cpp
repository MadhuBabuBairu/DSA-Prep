#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n = nums.size();
        int first = lowerbound(nums, target, n);

        // is the edge case where target not found in array
        if (first == n || nums[first] != target) return {-1, -1};
        int second = upperbound(nums, target, n) - 1;
        return {first, second};
    }

   private:
    int lowerbound(vector<int> &nums, int target, int n) {
        // int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }

    int upperbound(vector<int> &nums, int target, int n) {
        // int n = nums.size();
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    // Create an instance of the Solution class
    Solution sol;

    // Function call to find the first and last occurrences
    vector<int> result = sol.searchRange(nums, target);

    cout << "The first and last occurrences are at indices: " 
         << result[0] << " and " << result[1] << "\n";

    return 0;
}