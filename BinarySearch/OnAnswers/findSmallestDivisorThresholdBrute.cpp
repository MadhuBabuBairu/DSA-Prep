#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int smallestDivisor(vector<int> &nums, int limit) {
        // Brute force sum of smallest divisors <= treshold
        int n = nums.size();

        int MaxElement = *max_element(nums.begin(), nums.end());

        for (int i = 1; i <= MaxElement; i++) {
            int sum = 0;

            for (int j = 0; j < n; j++) {
                sum += ceil((double)nums[j] / (double)i);
            }
            if (sum <= limit) return i;
        }
        return -1;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    
    // Create an object of the Solution class
    Solution sol;
    
    int ans = sol.smallestDivisor(arr, limit);
    
    // Print the result
    cout << "The minimum divisor is: " << ans << "\n";
    
    return 0;
}
