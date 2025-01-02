
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int sum = 0;
        map< long long , int> preSumMap;  // [presum : index i] presum can be = sum , rem dynamic;
        int maxLength = 0;

        for(int i=0;i<n;i++){
            sum += nums[i];

            //sum = k
            if(sum == k){
                maxLength = max(maxLength, i+1); // zero based index
            }
            //rem , rem is in preSumMap
            int rem = sum - k;  // this is vissually [[rem][k]] sum = rem + k
            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];  // visualy [[....rem idx ][....i]]
                maxLength = max(maxLength, len);
            }
            //put sum in presummap? if not done yet
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum] = i;
            }
        }
        return maxLength;
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
