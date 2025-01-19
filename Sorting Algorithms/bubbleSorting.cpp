#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n= nums.size();
        //outer loop 
        for(int i=n-1;i>=0;i--){
            //inner loop compare and swap
            for(int j=i;j<n-1;j++){// exclude n-1 as j+1 room for
                if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]);
            }
        }
        return nums;
    }
};


int main() {
    // Create an instance of solution 
    Solution solution;
    
    vector<int> nums = {7, 4, 1, 5, 3};
    
    cout << "Before Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for Bubble Sort
    nums = solution.bubbleSort(nums);

    cout << "Array After Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
