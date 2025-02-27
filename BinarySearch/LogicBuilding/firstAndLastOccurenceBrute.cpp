
#include <bits/stdc++.h>
using namespace std;
//Brute force linear search
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int first = -1,second = -1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == target){
                if(first == -1 ) first = i;
                second = i;
            }

        }
        return {first,second};
    }
};

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    // Create an instance of the Solution class
    Solution sol;

    // Function call to find the first and last occurrences
    vector<int> result = sol.searchRange(nums, target);

    cout << "The first and last occurrences are at indices: " 
         << result[0] << " and " << result[1] << "\n";

    return 0;
}
