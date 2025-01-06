
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        //Optimal
        map<int,int> mpp;
        int xr = 0;
        int count = 0;               //(0,0)
        mpp[xr]++;                   // (0,1) (xr,count) i.e we have xr = 0 of count = 1;
        for(int i=0;i<nums.size();i++){
            xr = xr ^ nums[i];
            int rem = xr ^ k;       //as we proved in explanation
            count += mpp[rem];       //this will count the rem adding with  frequency eg (4,2)
            mpp[xr]++;              //This will keep updating freq of xr i.e pre Xor till i
        }
        return count;
    }
};

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;

    // Create an instance of the Solution class
    Solution solution;

    // Function call to get the result
    int ans = solution.subarraysWithXorK(a, k);

    cout << "The number of subarrays with XOR k is: " << ans << "\n";
    return 0;
}
