#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /* Public method to find the index of the 
        target or where it would be inserted*/
    int searchInsert(vector<int> &nums, int target)
    {
        // Iterate through the vector
        for (int i = 0; i < nums.size(); ++i) {
            /* If current element is greater than 
           or equal to the target */
            if (nums[i] >= target) {
                // Return the current index
                return i;
            }
        }
        /* If target is greater than all elements,
              return the size of the vector */
        return nums.size();
    }
};

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    // Create an instance of the Solution class
    Solution sol;

    // Find the insertion index
    int ind = sol.searchInsert(nums, target);

    cout << "The index is: " << ind << "\n";
    return 0;
}
