
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        //optimal
        int n = nums.size();
        int count = 0;
        int prefixSum = 0;
        unordered_map<int , int> mpp;
        mpp[0] = 1;//Starting from [pS = 0 : index = 1]
        for(int i=0;i<n;i++){
            prefixSum += nums[i];
            int rem = prefixSum - k;
             // we just need to count how many times rem occured to count the no. of sub arrays
            count += mpp[rem];
            mpp[prefixSum] += 1;
        }
        return count;
    }
};

int main()
{
    // Create an instance of solution class
    Solution solution;
    vector<int> nums = {3, 1, 2, 4};
    int k = 6;
    // Function call to get the result
    int subarrayCount = solution.subarraySum(nums, k);
    cout << "The number of subarrays is: " << subarrayCount << "\n";
    return 0;
}
