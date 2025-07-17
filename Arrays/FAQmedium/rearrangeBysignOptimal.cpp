#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        //optimal
        int positive = 0; 
        int negative = 1;
        vector<int> ans(n,0);//initialize with 0 check syntax
        for(int i=0;i<n;i++){
            if(nums[i]> 0){
                ans[positive] = nums[i];
                positive += 2;
            } 
            else{
                ans[negative] = nums[i];
                negative += 2;
            } 
        }
        return ans;
    }
};

int main() {
    vector<int> A = {1, 2, -4, -5}; 
    
    // Create an instance of the Solution class
    Solution sol;  
    vector<int> ans = sol.rearrangeArray(A);  
    
    // Print the rearranged array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}

