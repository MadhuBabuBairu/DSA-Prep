//Optimal approach
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int mid = 0,low = 0,high = n-1; //mid -> high [ ~]
        // play with pointers
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                mid++; low++;
            }
            else if(nums[mid] == 1) 
                mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            } 
        }
    }
};

int main() {
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    
    // Create an instance of Solution class
    Solution sol;

    sol.sortZeroOneTwo(nums);
    
    // Print the array elements after sorting
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
