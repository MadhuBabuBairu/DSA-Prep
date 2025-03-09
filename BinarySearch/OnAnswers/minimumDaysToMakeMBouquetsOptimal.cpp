#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    int possibleBouques(vector<int> &nums, int k, int m, int mid) {
        int n = nums.size();
        int count = 0, NoBouques = 0;
        for (int i = 0; i < n; i++) {
            if (mid >= nums[i]) {
                count++;
            } else {
                NoBouques += (count / k);
                count = 0;
            }
        }
        // count for if clause outside the loop
        NoBouques += (count / k);
        if (NoBouques >= m)
            return 1;
        else
            return 0;
    }

   public:
    int roseGarden(int n, vector<int> nums, int k, int m) {
        // Binary search optimal approach
        if (n < m * k) return -1;  // impossible case
        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while (low <= high) {
            //[7 7 7 7 13 11 12 7 ] -> possible range [7 11 12 13]
            int mid = (low + high) / 2;

            // if bouques are not possible at mid then low-mid aren't possible
            // trim left and go to right part of array
            if (possibleBouques(nums, k, m, mid) == 0) {
                low = mid + 1;
            }
            // if possible then we need to find the least possible
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};

int main() {
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7}; 
    
    int n = arr.size();
    
    // Number of flowers per bouquet
    int k = 3; 
    
    // Number of bouquets needed
    int m = 2; 

    // Create an instance of the Solution class
    Solution sol; 
    
    int ans = sol.roseGarden(n, arr, k, m); 

    if (ans == -1) {
        cout << "We cannot make m bouquets.\n"; 
    } else {
        cout << "We can make bouquets on day " << ans << "\n"; 
    }

    return 0; 
}
