#include <bits/stdc++.h>
using namespace std;
//divide and conqer
class Solution {
public:
    vector<int> quickSort(vector<int>& nums) {
        qs(nums,0,nums.size()-1);
        return nums;
    }
private:
    void qs(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pIndex = partition(nums, low, high);
            qs(nums, low, pIndex - 1);
            qs(nums, pIndex + 1, high);
        }
    }

    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;

        while (i < j) {
            while (nums[i] <= pivot && i <= high - 1) i++; // not exceeding extremes
            while (nums[j] > pivot && j >= low + 1) j--;   // not exceeding extremes

            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }

        // Swap the pivot with nums[j]
        swap(nums[low], nums[j]); // By the end, j reaches the correct pivot position
        return j;
    }
};

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Create an instance of Solution class
    Solution solution;

    // Function call to sort the array using quick sort
    vector<int> sortedArr = solution.quickSort(arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}