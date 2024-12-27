#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
//better
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        for(int i=0;i<n;i++){
             int sum = 0;
            for(int j=i;j<n;j++){
                    sum += nums[j];
                    maxSum = max(maxSum,sum);
            }
        }
        return maxSum;
    }
};

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    // Create an instance of Solution class
    Solution sol;

    int maxSum = sol.maxSubArray(arr);

    // Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}
