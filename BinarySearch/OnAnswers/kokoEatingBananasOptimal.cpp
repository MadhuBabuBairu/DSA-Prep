#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    // we are calclating total sum of elements/mid each time mid changes
    int CalculateSum(vector<int> &nums, int mid, int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(nums[i]) / (double)(mid));
        }
        return sum;
    }

   public:
    int minimumRateToEatBananas(vector<int> nums, int h) {
        // Optimal approach

        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());

        int low = 1;
        int high = maxi;

        // Binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            // find sum of divisors
            int SumDivisors = CalculateSum(nums, mid, n);

            // go left
            if (SumDivisors <= h) {
                high = mid - 1;
            }
            // go right if(sumDivisors <= h)
            else {
                low = mid + 1;
            }
        }
        // low & high ends up at extremes i.e [1,2,3,4,5,6,7,8,9]
        // [1,2,3,4,5,6,7,8,9]
        // [n,n,n,y,y,y,y,y,y] n is SumDivisors > h & y is SumDivisors <= h
        // and we need lower most y i.e 4
        // low end up being 4 & high beiong 3
        return low;
    }
};


int main() {
    vector<int> nums = {7, 15, 6, 3};
    int h = 8;

    // Create an object of the Solution class
    Solution sol;

    int ans = sol.minimumRateToEatBananas(nums, h);

    // Print the result
    cout << "Koko should eat at least " << ans << " bananas/hr.\n";

    return 0;
}
