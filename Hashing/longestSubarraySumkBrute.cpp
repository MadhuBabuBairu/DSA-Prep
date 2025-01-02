
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        //Brute force
        int n = nums.size();
        int longest = 0;
        for(int i=0;i<n;i++){
            int s = 0;
            for(int j=i;j<n;j++){
                s += nums[j];
                if(s == k){
                    longest = max(longest,j-i+1);
                }
            }
        }
        return longest;
    }
};


int main()
{
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    // Create an instance of the Solution class
    Solution solution;
    // Function call to get the result
    int len = solution.longestSubarray(a, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
