#include <bits/stdc++.h>
using namespace std;

//Brute force
class Solution {
public:
    int findPeakElement(vector<int> &arr) {
      int n = arr.size();

      //pick element from index 1 , look back & front for req. condition then return
      for(int i=0;i<n;i++){
        //as problem states -infinite [arr] -ifinite ,so excluding 1st & last element of array
        if((i==0 || arr[i-1] < arr[i] )&& (i== n-1 || arr[i+1] < arr[i])) return i;
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
