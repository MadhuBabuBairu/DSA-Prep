#include <bits/stdc++.h>
using namespace std;

class Solution {
    //Optimal approach
private:
    int possibleToPlaceCows(vector<int> nums, int distance , int k){
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
        //sort the array
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int limit = nums[n-1] - nums[0];
        int low = 1 ;
        int high = limit;

        //Binary search
        while(low <= high){
            int mid = (high + low )/2;
            if(possibleToPlaceCows(nums, mid , k) == 1){
                //we need to find max of min value 
                //[1 2 3 4 5 6 7]
                //[p p p p n n n] we need max. of min i.e 4; Therefore go right
                low = mid + 1;
            }
            else high = mid - 1; // come left
        }
        return high; // as we know high end up in opp polarity
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
