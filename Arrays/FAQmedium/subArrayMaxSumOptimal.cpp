#include <bits/stdc++.h>
using namespace std;
// Some times you complicate code pease check
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Optimal Approach
        int n = nums.size();
        int maxSum = INT_MIN;
        int sum = 0;
        //If the interviewer ask to give the maxSum array then
        int start = -1, end =-1, ansStart = -1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum == 0) start = i;
            if(sum > maxSum){
                    maxSum = sum;
                    ansStart = start;
                    end = i;// array with [ansStart,end] are the indices of maxSum array
            } 
            if(sum < 0) sum = 0;//if negative reset to 0
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
