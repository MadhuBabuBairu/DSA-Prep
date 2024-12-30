#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        //Better by reducing TC 0(n*2) using hasing
        int n = nums.size();
        int hash[8] = {0};
        int repeating = -1, missing = -1;

        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        //checking which elements are 
        for(int i=0;i<=n+1;i++){
            if(hash[i] == 2)  repeating = i;
            else if(hash[i] == 0)  missing = i;
        }
        return{repeating,missing};
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
