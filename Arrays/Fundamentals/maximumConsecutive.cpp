#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) {
                count++;
                max_count = max(count,max_count);
            }
            else count = 0;//if 0 and max_count has non 0
        }
        return max_count;
    }
};

int main() {
    
    vector nums = {1, 1, 0, 1, 1, 1};

    // Create an instance of the Solution class
    Solution sol;

    int ans = sol.findMaxConsecutiveOnes(nums);

    cout << "The maximum consecutive 1's are " << ans << endl;
    return 0;
}
