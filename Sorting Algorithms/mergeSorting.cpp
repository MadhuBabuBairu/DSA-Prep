#include <bits/stdc++.h>
using namespace std;
//Devide and merge
class Solution {
public:
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        ms(nums, 0, n - 1);
        return nums;
    }

private:
    void ms(vector<int>& nums, int low, int high) {
        if (low >= high) return;

        int mid = (low + high) / 2; // Avoid potential overflow
        // Recursively sort both halves
        ms(nums, low, mid);
        ms(nums, mid + 1, high);
        // Merge the sorted halves
        merge(nums, low, mid, high);
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        // Merge the two sorted halves
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        // Add remaining elements from the left half
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        // Add remaining elements from the right half
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // Copy the sorted elements back into the original array
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }
};


int main(){
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Create an instance of the Solution class
    Solution sol;
    // Function call to sort the array
    vector<int> sortedArr = sol.mergeSort(arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << sortedArr[i] << " ";
    cout << endl;

    return 0;
}