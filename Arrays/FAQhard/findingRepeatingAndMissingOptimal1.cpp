#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();
        // x-y => s - sn => val1 ; x = repeating , y = missing
        // s2 - s2n => val2
        long long s = 0, s2 = 0; //IN ARRAY GIVEN s is sum of n natural numbers s2 is sum of sqs of n natural numbers 
        long long sn = n*(n+1)/2; // sum of n natural numbers
        long long s2n = (n*(n+1)*(2*n+1))/6; //formula for sum of sqs of n natural numbers
        for(int i =0;i<n;i++){
            s +=   nums[i];
           s2 +=   (long long)nums[i] *   (long long)nums[i];
        }

        // Lets do the math
        long long val1 = s - sn;
        long long val2 = s2 - s2n;
        val2 = val2/val1 ;
        long long repeating = (val1 + val2)/2 ;
        long long missing = repeating - val1;

        return {int(repeating),int(missing)};

    }
};

int main() {
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    
    // Create an instance of Solution class
    Solution sol;

    vector<int> result = sol.findMissingRepeatingNumbers(nums);
    
    // Print the repeating and missing numbers found
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    return 0;
}
