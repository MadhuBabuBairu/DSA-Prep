#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //Better approach
        int n = nums.size();
        set<vector<int> > st;//store unique
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long > hashset;// hasset will be fresh everytime j changes
                for(int k=j+1;k<n;k++){
                    long long sum = nums[i]+nums[j]+nums[k];
                    long long fourth = target - sum;
                    //Check if its present in hashset
                    if(hashset.find(fourth)!=hashset.end()){
                        vector<int> temp = {nums[i],nums[j],nums[k],static_cast<int>(fourth)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);//[i,j,h,h,k,0,0] as k moves it becomes h
                }
            }
        }
        vector<vector<int> > ans(st.begin(),st.end());
        return ans;
    }
};

int main() {
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    
    // Create an instance of Solution class
    Solution sol;
    
    vector<vector<int>> ans = sol.fourSum(nums, target);
    
    // Print the result
    cout << "The quadruplets are: \n";
    for (auto& it : ans) {
        cout << "[";
        for (auto& ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    
    return 0;
}
