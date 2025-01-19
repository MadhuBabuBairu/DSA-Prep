#include<bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        // burte force

        set<int> nSet;

        // iterate and store in set container

        for (int i = 0; i < nums.size(); i++) {
            nSet.insert(nums[i]);
        }

        int k = nSet.size();

        // replace the original

        int i = 0;

        for (int it : nSet) {
            nums[i] = it;

            i++;
        }

        return k;  // print updated nums till k elements
    }
};

// Helper function to print first n elements of the array
void printArray(vector<int> &nums, int n) {
    for(int i=0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    
    cout << "Original Array: ";
    printArray(nums, nums.size());
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Function call to remove duplicates from array
    int k = sol.removeDuplicates(nums);
    
    cout << "Array after removing the duplicates: ";
    printArray(nums, k);
    
    return 0;
}