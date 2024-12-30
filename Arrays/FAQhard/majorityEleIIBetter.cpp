#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        //Better approach
        int n = nums.size();
        int min = n/3 + 1;
        vector<int> ans;
        unordered_map<int , int> mpp;
        //transversing the array
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;//This is frequency
            if(mpp[nums[i]]==min) ans.push_back(nums[i]);
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
