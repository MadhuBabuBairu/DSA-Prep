#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        int count;
        for(int i=0;i<n;i++){
            for(int j =i;j<n;j++){
                if(nums[i]>nums[j]*2){
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    
    vector<int> nums = {6, 4, 1, 2, 7}; 
    
    // Create an instance of the Solution class
    Solution sol; 
    
    int cnt = sol.reversePairs(nums); 
    
    // Output the result
    cout << "The number of reverse pairs is: " << cnt << endl;
    return 0; 
}
