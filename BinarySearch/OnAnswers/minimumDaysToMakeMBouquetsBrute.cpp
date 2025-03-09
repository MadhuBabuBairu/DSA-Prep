#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    int Possible(vector<int> &nums, int days, int k, int m) {
        // need to check and count consequtive bloom days
        int count = 0;
        int NOfBouqes = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= days) {
                count++;
            } else {
                NOfBouqes += count / k;
                count = 0;
            }
        }
        // this is for counting if case bouqes
        NOfBouqes += count / k;
        if (NOfBouqes >= m) //return true if min number of boques can be formed
            return 1;
        else
            return 0;
    }

   public:
    int roseGarden(int n, vector<int> nums, int k, int m) {
        // Brute force
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        for (int i = mini; i <= maxi; i++) {
            if (Possible(nums, i, k, m) == 1) return i;
        }
        return -1;
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
