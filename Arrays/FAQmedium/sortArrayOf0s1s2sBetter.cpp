#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        //better approach
        int n = nums.size(),c0 = 0,c1 =0,c2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) c0++;
            else if(nums[i]==1) c1++;
            else c2++;
        }
        for(int i=0;i<c0;i++) nums[i] = 0;
        for(int i=c0;i<c1+c0;i++) nums[i] = 1;
        for(int i=c1+c0;i<n;i++) nums[i] = 2;
    }
};

int main() {
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    
    // Create an instance of Solution class
    Solution sol;
    
    sol.sortZeroOneTwo(nums);
    
    // Print the array elements after sorting
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
