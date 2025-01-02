
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Better approach
        //sort the array 
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 0;
        int longest = 1;
        int lastSmaller = INT_MIN;
        // lastsmaller always invites the new value, while counter hates and restarts
        for(int i=0;i<n;i++){
            if(nums[i]-1 == lastSmaller){
                count++;
                lastSmaller = nums[i];
            }
            else if(nums[i] != lastSmaller){
                lastSmaller = nums[i];
                count = 1;
            }
            longest = max(longest,count);
        }
        return longest;
    }
};

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2}; 

    // Create an instance of solution class
    Solution solution; 
    // Function call for finding longest consecutive sequence
    int ans = solution.longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
