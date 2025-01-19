#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // in cases of k exceeding n
        if (k == 0 || n <= 1)
            return;  // as we are recusing , its conditional stop
        vector<int> temp;
        reverse(nums, 0, k - 1);  // k=2, till index 1
        reverse(nums, k, n - 1);
        reverse(nums, 0, n - 1);
    }

   private:
    void reverse(vector<int>& nums, int begin, int end) {
        while (end > begin) {
            int temp = nums[begin];
            nums[begin] = nums[end];
            nums[end] = temp;
            begin++;
            end--;
        }
    }
};

// Helper function to print the array
void printArray(vector<int> nums) {
    for(int val : nums) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector nums = {1, 2, 3, 4, 5, 6};
    int k = 2;

    cout << "Initial array: ";
    printArray(nums);

    // Create an instance of the Solution class
    Solution sol;
    
    /* Function call to rotate the 
    array to the left by k places */
    sol.rotateArray(nums, k);
    
    cout << "Array after rotating elements by " << k << " places: ";
    printArray(nums);

    return 0;
}