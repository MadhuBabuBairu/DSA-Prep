#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
       int n = nums.size();
       int low = 0,high = n-1;
       
       //searching element in a sorted & rotated array
       while(low <= high){
        int mid = (high + low)/2;
        if(nums[mid] == k) return true;

        //Edge case 
        if(nums[low] == nums[mid] && nums[mid] == nums[high] ){
            low++;
            high--;
            continue; // as we need to recalculate mid 
        }
        //left sorted part
        if(nums[low] <= nums[mid]){
            //if  K in sorted part , then COME LEFT
            if(nums[low] <= k && k <= nums[mid]){
                high = mid - 1;
            }
            else //if(nums[mid] <= k <= nums[high])or k is in unsorted part GO RIGHT
            {
                low = mid + 1;
            }
        }
        //right sorted part
        else {// if(nums[mid]  <= nums[high])
            //if k in sorted part , then GO RIGHT
            if(nums[mid] <= k && k <= nums[high]){
                low = mid + 1;
            }
            else //if k is in unsorted part COME LEFT{
                high = mid - 1;
            }
        }
        return false;
    }
};

int main() {
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3; 

    // Create an instance of the Solution class
    Solution sol;

    // Function call to search for the target element
    bool result = sol.searchInARotatedSortedArrayII(arr, target);

    if (!result)
        cout << "Target is not present.\n";
    else
        cout << "Target is present in the array.\n";

    return 0;
}