#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      //Optimal
      int n = nums.size();
      vector<int> leads;
      int nMax = INT_MIN;
      for(int i=n-1;i>=0;i--){
        if(nums[i]>nMax){
             nMax = nums[i];
             leads.push_back(nMax);
        }
      } reverse(leads.begin(),leads.end());
      return leads;
    }
};

int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    
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