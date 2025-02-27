//number of roations are equal to the minIndex of an array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        //optimal
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = INT_MAX;
        int index = -1;//Idea is , min value index

        while(low <= high){
            int mid = (high + low)/2;
            //left sorted
            if(nums[low] <= nums[mid]){
                if(nums[low] < ans){//elemet at low is least 
                    ans = nums[low];
                    index = low;
                }
                low = mid + 1;
            }
            //right sorted
            else{
                if(nums[mid] < ans){ //element at mid is least posssible
                    ans = nums[mid];
                    index = mid;
                }
                high = mid - 1;
            }
        }
        return index;
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3}; 
    
    // Create an object of the Solution class
    Solution sol;
    
    int ans = sol.findKRotation(nums);
    
    // Print the result
    cout << "The array is rotated " << ans << " times.\n";
    
    return 0;
}
