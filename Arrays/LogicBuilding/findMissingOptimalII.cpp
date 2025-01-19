#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;

        // Calculate XOR of all array elements
        for (int i = 0; i < nums.size(); i++) {
            xor1 = xor1 ^ (i + 1); //XOR up to [1...N] i+1 at last includes n
            xor2 = xor2 ^ nums[i]; // XOR of array elements
        }

        // XOR of xor1 and xor2 gives missing number
        return (xor1 ^ xor2);
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 5};

    // Create an instance of the Solution class
    Solution solution;

    /* Call the missingNumber method 
    to find the missing number*/
    int ans = solution.missingNumber(nums);

    cout << "The missing number is: " << ans << endl;

    return 0;
}
