#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        //brute force
        int n = nums.size();
        vector<int> ans;
        for(int i =0 ;i < n;i++){
            if(ans.size() == 0 || ans[0]!= nums[i]){
                int count = 0;
                for(int j=0;j<n;j++){
                    if(nums[i]==nums[j]){
                        count++;
                    }
                    
                }
                if(count > n/3) ans.push_back(nums[i]);// it stay out of j loop because we adding n[i] with check of loop j 
            }
            if(ans.size()==2) break;
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    
    // Create an instance of Solution class
    Solution sol;

    vector<int> ans = sol.majorityElementTwo(arr);
    
    // Print the majority elements found
    cout << "The majority elements are: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}
