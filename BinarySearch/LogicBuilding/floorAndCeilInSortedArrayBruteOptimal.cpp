#include <bits/stdc++.h>
using namespace std;
//using Binary search algorithm
class Solution{
private:
    // Helper function to find the floor of x
    int findFloor(vector<int>& nums, int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        // Perform binary search to find floor value
        while (low <= high) {
            int mid = (low + high) / 2;
            
            /*Check if mid element lesser than 
			      or equal to x, if it is update ans 
		        and eliminate the left half */
            if (nums[mid] <= x) {
                ans = nums[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    // Helper function to find the ceil of x
    int findCeil(vector<int>& nums, int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        // Perform binary search to find ceil value
        while (low <= high) {
            int mid = (low + high) / 2;
            
             /*Check if mid element greater than 
			      or equal to x, if it is update ans 
		        and eliminate the left half */
            if (nums[mid] >= x) {
                ans = nums[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }

public:
    // Function to find both floor and ceil of x in nums
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int floor = findFloor(nums, n, x);
        int ceil = findCeil(nums, n, x);
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