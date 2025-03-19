#include <bits/stdc++.h>
using namespace std;

// optimal
class Solution {
   private:
    long double numberGasStaionsRequired(long double dist, vector<int> &arr) {
        int count = 0;
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int numberInbetween = ((arr[i] - arr[i - 1]) / dist);
            if ((arr[i] - arr[i - 1]) == numberInbetween * dist) {
                numberInbetween--;
            }
            count += numberInbetween;
        }
        return count;
    }

   public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
        int n = arr.size();

        long double low = 0;
        long double high = 0;

        // find out max dist i.e high
        for (int i = 0; i < n - 1; i++) {
            high = max(high, (long double)(arr[i + 1] - arr[i]));
        }

        long double diff = 1e-6;  // check until 6 decimals
        while (high - low > diff) {
            long double mid = (low + high) / (2.0);
            int count = numberGasStaionsRequired(mid, arr);
            if (count > k)
                low = mid;  // if numberGasStaionsRequired is more than k
            else
                high = mid;
        }
        return high;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;

    // Create an instance of the Solution class
    Solution sol;

    // Call the minimiseMaxDistance method and print the result
    long double ans = sol.minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";

    return 0;
}