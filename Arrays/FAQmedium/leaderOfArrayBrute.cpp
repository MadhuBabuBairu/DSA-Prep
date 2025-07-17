#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      
      vector<int> ans;
      for(int i=0;i<nums.size();i++){

        bool leader = true;
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] <= nums[j]) leader = false;
            
        }
        if(leader) ans.push_back(nums[i]);
      }

      return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 5, 3, 1, 2};

    // Create an instance of the Solution class
    Solution finder;

    // Get leaders using class method
    vector<int> ans = finder.leaders(nums);

    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}