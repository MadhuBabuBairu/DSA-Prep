#include <bits/stdc++.h>
using namespace std;

class Solution {
    //Brute force

private:
    int possibleToPlaceCows(vector<int> &nums, int k , int distance){
        int n = nums.size();
        int lastPlacedCow = nums[0];//at first index of array
        int placedCows = 1;
        //iterate through nums and place cows, with a given distance
    
        for(int i=1;i<n;i++){
            if(nums[i]-lastPlacedCow  >= distance){ // how far is it form last placed cow?
                lastPlacedCow = nums[i];
                placedCows++;
            }
        }
        if(placedCows >= k) return 1; 
        else return 0;
    }
public:
    int aggressiveCows(vector<int> &nums, int k) {
        //sort the given array , because while checking possibility we are doing. it in increasing order 
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        int limit = nums[n-1] - nums[0];
        
        //iterate through range of possible [1 - (max - min)]
        for(int i=1;i<= limit;i++){
            if(possibleToPlaceCows(nums,k,i) == 1){
                continue;
            }
            else return (i-1); //possible min or ans is very just before not possible case
        }
        return limit; //edge case if cow = 2
    }
};
       

int main() {
    vector<int> nums = {0, 3, 4, 7, 10, 9};
    int k = 4;

    // Create an instance of the Solution class
    Solution sol;

    int ans = sol.aggressiveCows(nums, k);

    // Output the result
    cout << "The maximum possible minimum distance is: " << ans << "\n";

    return 0;
}
