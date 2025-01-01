#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //optimal
        int n = nums.size();
        int prefix = 1;
        int sufix = 1;
        int maxProd = INT_MIN;

        for(int i=0;i<n;i++){
            prefix *= nums[i];    //forward
            sufix *= nums[n-i-1]; //backward

            maxProd = max(maxProd,max(prefix,sufix));

            //handling with 0 , just restart from 1 . This must be last action
            if(prefix == 0) prefix = 1;
            if(sufix == 0) sufix = 1;
        }
        return maxProd;
    }
};

int main() {
    vector<int> nums = {4, 5, 3, 7, 1, 2};
    
    // Create an instance of the Solution class
    Solution sol;
    
    int maxProd = sol.maxProduct(nums);
    
    // Print the result
    cout << "The maximum product subarray: " << maxProd << endl;
    
    return 0;
}
