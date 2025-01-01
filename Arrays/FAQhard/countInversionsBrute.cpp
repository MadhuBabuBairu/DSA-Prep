#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   long long int numberOfInversions(vector<int> nums) {
        //brute force
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[i]>nums[j]) count++;
            }
        }
        return count;
    }
};

int main() {
    vector<int> nums = {5, 4, 3, 2, 1};
    
    // Create an instance of Solution class
    Solution sol;

    long long int result = sol.numberOfInversions(nums);
    
    // Print the repeating and missing numbers found
    cout << "The number of inversions is: "
         << result << endl;
    
    return 0;
}