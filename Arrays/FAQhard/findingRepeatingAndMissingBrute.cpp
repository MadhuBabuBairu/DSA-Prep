#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        //Bute force
        int n = nums.size();
        int missing = -1,repeating = -1;
        for(int i=1;i<=n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(i==nums[j]) count++;
            }
            // logically count should start form 0 -> 2 . Which determines the index of element.
            
            if(count == 2){
                repeating = i;
            }
            if(count == 0){
                missing = i;
            }

            if(repeating != -1 && missing != -1) break;
        }
        return {repeating,missing};//Hey man check we can return elements directly
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
