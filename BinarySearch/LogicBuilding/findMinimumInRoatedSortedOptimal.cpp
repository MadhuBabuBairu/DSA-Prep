#include <bits/stdc++.h>  
using namespace std;   

class Solution {
public:
    int findMin(vector<int> &arr)  {
      int n = arr.size();
      int low = 0,high = n-1;
      int ans = INT_MAX;

      while(low <= high){
        // if(arr[low] <= arr[high]){ Interveiw optimisation
        //     ans = arr[low];
        //     break;
        // }
        int mid = (low + high)/2;
        //Left sorted
        if(arr[low]<= arr[mid]){
            //pick min & go to unsorted part
            ans = min(ans,arr[low]);
            low = mid + 1;
        }
        //right sorted
        else{
            //pick min & go to unsorted part
            ans = min(ans,arr[mid]);
            high = mid - 1;
        }
      }
      return ans;
    }
};

int main() {
    
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};  
    
    // Create an object of the Solution class
    Solution sol; 
     
    int ans = sol.findMin(arr); 
    
    // Print the result
    cout << "The minimum element is: " << ans << "\n";  
    return 0; 
}
