
#include <bits/stdc++.h>
using namespace std;

class Solution {

private:
    bool linearSearch(vector<int>& nums, int next){
        //check through the array
        for(int i=0;i<nums.size();i++){
            if(nums[i] == next) return true;
        }
        return false;
    }
public:
    int longestConsecutive(vector<int>& nums) {
        //Brute force linear search for consecutive
        int n = nums.size();
        int longest = 1;

        for(int i=0;i<n;i++){
            int cnt = 1;
            int x = nums[i];
            while(linearSearch(nums,x+1)== true){
                x++;
                cnt++;
            }
            longest = max(longest , cnt);
        }
        return longest;
        
    }
};

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2};

    // Create an instance of the Solution class
    Solution solution;

    // Function call for longest consecutive sequence
    int ans = solution.longestConsecutive(a);
    cout << "The longest consecutive sequence is " << ans << "\n"; 
    return 0;
}
