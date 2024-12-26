#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Better approach
        int n=nums.size();
        set<vector<int> >tripletSet;
        for(int i=0;i<n;i++){
            set<int> hashset;//as i changes hashset is fresh
            for(int j=i+1;j<n;j++){
                int third = -(nums[i]+nums[j]);
                //Check if the third is present in hashmpp 
                if(hashset.find(third) != hashset.end()){//This means "is third found till end? "
                    vector<int> temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    tripletSet.insert(temp);
                }
                // if not found in hashmapp then
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int> >ans(tripletSet.begin(),tripletSet.end());
        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Create an instance of Solution class
    Solution sol;

    vector<vector<int>> ans = sol.threeSum(nums);

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
