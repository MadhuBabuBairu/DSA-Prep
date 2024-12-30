#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        //Optimal approach
        int n = nums.size();
        int cnt1=0; int cnt2=0;
        int el1 = INT_MIN,el2 = INT_MIN;
        //Applying Moore's Voting Algorithm
        for(int i=0;i<n;i++){
            //Pick e1 and e2 and start by cnts from 1. Because every time picking ele , cnt must start from 1
            if(cnt1 == 0 && el2!=nums[i]){
                 el1 = nums[i];
                 cnt1 = 1; 
            }
            else if(cnt2 ==0 && el1!=nums[i]){
                 el2 = nums[i];
                 cnt2 = 1;
            }
            //start playing
            else if(nums[i]== el1) cnt1++;
            else if(nums[i]== el2) cnt2++;
            else {//pt to remember {} is required if more than 2 statements ie ; 
                cnt1--; 
                cnt2--; 
            }
        }

        //Now manually confirm if el1 and el2 are really majority
        cnt1 = 0; cnt2 = 0;
        int mini = n/3 + 1;
        vector<int> ans;//This is to return the ans
        for(int i=0;i<n;i++){
            if(el1 == nums[i]) cnt1++;
            if(el2 == nums[i]) cnt2++;
        }
        if(cnt1 >= mini) ans.push_back(el1);
        if(cnt2 >= mini && el1 != el2) ans.push_back(el2);
        sort(ans.begin(),ans.end());
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
