
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        //Brute force 
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            int sum = 0;//as we need sub array sum . starting each sub array sum = 0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                if(sum == k) count++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 1, 2, 4};
    int k = 6;
    // Function call to find the result
    int cnt = solution.subarraySum(nums, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
