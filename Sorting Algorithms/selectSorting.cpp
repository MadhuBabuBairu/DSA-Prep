#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n= nums.size();
       //outer loop for selecting i , and transversing till 2 before last index
       for(int i=0;i<n-1;i++){
            int minIndex = i;
            //inner loop for min(i+1 -> n i.e 1 before last index) to find min index , right array 
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[minIndex]) minIndex = j;
            }
            //swap if only minIndex is changed, i.e if min is found in right array then swap
            if(minIndex != i) swap(nums[i],nums[minIndex]);
       }
       return nums;
    }
};


int main() {

    vector<int> arr = {7, 5, 9, 2, 8};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Create an instance of the Solution class
    Solution s1;

    // function call for Selection Sort
    vector<int> sortedArr = s1.selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}