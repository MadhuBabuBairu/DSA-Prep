#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        //Optimal approach using binary search
        int n = nums.size();
        int low = 1;
        int high = n - 2;

        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-2] != nums[n-1]) return nums[n-1];

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid]!= nums[mid-1] && nums[mid]!= nums[mid+1]) return nums[mid];
            //if we are in left half eleminating left half cus ele is at right i.e (0,1) (even, odd)
            // (0,1) (sit,->check if same) vice versa . if same either ways we are at left half
            if(mid % 2 == 1 && nums[mid] == nums[mid - 1] || mid % 2 == 0 && nums[mid] == nums[mid + 1] ){
                low = mid + 1; //eleminate left half 
            }

            //right half (odd,even) 
            else{ //if(mid % 2 == 1 && nums[mid] == nums[mid + 1] || mid % 2 == 0 && nums[mid] == nums[mid - 1])
                // we are at right half , assuming ele. at left so eliminate right
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    
    // Create an object of the Solution class.
    Solution sol;
    
    int ans = sol.singleNonDuplicate(nums);
    
    // Print the result.
    cout << "The single element is: " << ans << "\n";
    
    return 0;
}
