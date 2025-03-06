#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        //Optimal
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = n;
        while(low <= high){
           int mid = (high + low)/2;
            if(nums[mid] > x){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
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

    // Function call to find the upper bound
    int ind = sol.upperBound(nums, x);

    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}