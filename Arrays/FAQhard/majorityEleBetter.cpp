#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Better approach
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;//hashing [e:count];
        }
        for(auto it: mpp){
           if(it.second > n/2){
            return it.first;
           } 
        }
        // return -1
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    // Create an instance of Solution class
    Solution sol;

    int ans = sol.majorityElement(arr);
    
    // Print the majority element found
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}
