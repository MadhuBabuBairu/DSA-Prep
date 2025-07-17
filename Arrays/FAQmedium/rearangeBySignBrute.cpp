#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n,0);
        vector<int> positive ;
        vector<int> negative ;

        for(int i=0;i<n;i++){
            if(nums[i] > 0) positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }
        int j = 0;
        for(int i=0;i<n;i+=2){
            ans[i] = positive[j];
            j++;
        }

        int k= 0;
        for(int i=1;i<n;i+=2){
            ans[i] = negative[k];
            k++;
        }

        return ans;
    }
};

int main() {
    vector<int> A = {1, 2, -4, -5};
    
    // Create an instance of Solution class
    Solution sol;
    
    // Get the rearranged array
    vector<int> ans = sol.rearrangeArray(A);
    
    // Print the result
    for (int num : ans) {
        cout << num << " ";
    }
    
    return 0;
}
