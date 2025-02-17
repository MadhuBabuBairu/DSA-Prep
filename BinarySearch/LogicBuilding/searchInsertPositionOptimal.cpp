#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       //Brute force using lower bound algorithm
       int n = nums.size();
       int low = 0,high = n-1,ans = n;
       while(low <= high){
        int mid = (low + high)/2;
        if(nums[mid] >= target){// lower bound '= sign'
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1; 
       }
       return ans;
    }
};

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    // Create an instance of the Solution class
    Solution sol;

    // Find the insertion index
    int ind = sol.searchInsert(nums, target);

    cout << "The index is: " << ind << "\n";
    return 0;
}
