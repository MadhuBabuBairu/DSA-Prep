
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        //Brute in k loop and better with i and j loop
        int n = nums.size();
        int count = 0;
        for(int i = 0;i<n;i++){
            int xorr = 0;
            for(int j = i;j<n;j++){
                xorr = xorr ^ nums[j];
                if(xorr == k) count++;
            }
        }
        return count;
    }
};

int main() {
    vector<int> a = {4, 2, 2, 6, 4}; 
    int k = 6; 

    // Create an instance of the Solution class
    Solution solution;
    // Function call to get the result
    int ans = solution.subarraysWithXorK(a, k);

    
    cout << "The number of subarrays with XOR k is: " << ans << "\n";
    return 0;
}
