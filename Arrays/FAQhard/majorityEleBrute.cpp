#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Brute force
        int n  = nums.size();
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]) count++;
            }
            if(count > n/2) return nums[i];
        }
        return -1;
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
