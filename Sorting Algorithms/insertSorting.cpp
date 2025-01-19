
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        //outer loop 
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0 && nums[j]<nums[j-1]){//swap untill max is found at last
                swap(nums[j],nums[j-1]);
                j--;//inner loop till j decreased to 0 index, i.e first element
            }
        }
        return nums;
    }
};


int main() {
    // Create an instance of solution class
    Solution solution;
    
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    
    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.insertionSort(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
