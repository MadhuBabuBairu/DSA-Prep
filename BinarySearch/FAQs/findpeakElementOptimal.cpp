#include <bits/stdc++.h>
using namespace std;

//optimal binary search
class Solution {
public:
    int findPeakElement(vector<int> &arr) {
      int n = arr.size();
      if(n == 1) return 0;
      //edge cases for first and last elements
      if(arr[0] > arr[1]) return 0;
      if(arr[n-1] > arr[n-2]) return n-1;

      int low = 1;
      int high = n-2;
      // [ sorted or increasing , PEAK , decreasing ] i.e left of peak is accesending & right of peak is descending
      while(low <= high){
        int mid = (low + high)/2;
        //left is asscending , 
        if(arr[mid + 1] > arr[mid]){
            low = mid + 1; //peak can be right part of search space
        }
        else high = mid - 1; // if its a descending part of search space
        // we might not trimp right part as we need the 1st most value of peak in an array
        if(arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid]) return mid;
      }
      return -1;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    
    // Create an instance of the Solution class
    Solution sol;
    
    int ans = sol.findPeakElement(arr);
    
    // Output the result
    cout << "The peak is at index: " << ans << "\n";
    
    return 0;
}
