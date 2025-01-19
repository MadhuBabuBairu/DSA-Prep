#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        // Optimal solution
        int n = nums.size();
        int j;
        // finding 0 and picking pointer
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
        // from j+1 -> n finding non 0 and swaping
        for (int i = j + 1; i < n; i++) {
            // swaping non 0
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;  // we are moving j to next , which will be 0 anyways
            }
        }
        return;
    }
};

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    // Create an instance of the Solution class
    Solution solution;

    // Call the moveZeroes function
    solution.moveZeroes(arr);

    // Print the elements
    for (auto &it : arr) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}