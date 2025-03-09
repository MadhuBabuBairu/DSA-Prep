#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    long long calculateThreshold(vector<int> & nums, int x){
        long long sum = 0;
        int n = nums.size();
        for(int i=0;i < n;i++){
            sum += ceil((double)(nums[i])/(double)(x));
        }
        return sum;
    }
   public:
    int minimumRateToEatBananas(vector<int> nums, int h) {
        // Brute force

        long long maxElement = *max_element(nums.begin(), nums.end());

        // find min and return
        for (int i = 1; i <= maxElement; i++) {
            long long SumDivisors = calculateThreshold(nums,i);

            if(SumDivisors <= (long long)h) return i;
        }

        //as per request if no value exists 
        return maxElement;
    }
};

int main() {
    vector<int> v = {7, 15, 6, 3};
    int h = 8;

    // Create an object of the Solution class
    Solution sol;

    int ans = sol.minimumRateToEatBananas(v, h);

    // Print the result
    cout << "Koko should eat at least " << ans << " bananas/hr.\n";

    return 0;
}
