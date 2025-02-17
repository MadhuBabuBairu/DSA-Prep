#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        int low = 0; int high = n-1; int ans = n;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= x){
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid] < x) low = mid + 1;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 2, 3};
    int x = 2;

    // Create an instance of the Solution class
    Solution sol;

    // Function call to find the lower bound
    int ind = sol.lowerBound(nums, x);

    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}