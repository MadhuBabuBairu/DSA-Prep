#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        //brute force 
        set<vector<int> > triplets;
        int n = nums.size();
        for(int i=0;i<n-2;i++){// 2 places for j,k
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        //to store unique sets
                        vector<int> temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        triplets.insert(temp);// This will store unique triplets
                    }
                }
            }
        }
        vector<vector<int> > ans(triplets.begin(),triplets.end());
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
