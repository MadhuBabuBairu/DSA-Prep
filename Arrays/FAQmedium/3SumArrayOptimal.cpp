#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        //Optimal approach
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int> >ans;//to return ans
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;//if i points to a duplicate ele. continue to next iteration
            // two pointer approvach
            int j = i+1;// i<j<k
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;//after finding triplet j & k should move to break inner loop and i incriments
                    while(j<k && nums[j]==nums[j-1]) j++;//as j-> next new elment
                    while(j<k && nums[k]==nums[k-1]) k--;//as k-> next new elemnt
                }
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    
    // Create an instance of Solution class
    Solution sol;
    
    vector<vector<int> > ans = sol.threeSum(nums);
    
    // Print the result
    for (auto& triplet : ans) {
        cout << "[";
        for (auto& num : triplet) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    
    return 0;
}
