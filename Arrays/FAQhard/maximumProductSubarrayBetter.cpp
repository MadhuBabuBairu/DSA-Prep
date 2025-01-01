#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Brute force
        int n = nums.size();
        int maxProduct = INT_MIN;
        for(int i=0;i<n;i++){
            int product = 1;
            for(int j=i;j<n;j++){ // We transversed through each el
                product *= nums[j];
                maxProduct = max(maxProduct,product);
            }
        }
        return maxProduct;
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
