#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first =  firstOccr(nums, target, n);
        if (first == -1) return {-1, -1};
        int second =  secondOccr(nums, target, n);
        return {first, second};
    }
    // custimising Binary search algorithm
   private:
    int firstOccr(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;
        int first = -1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                first = mid;
                // now we goo left if any previously occured [low   mid.   high]
                // -> [low   high new.   high]
                high = mid - 1;  // going left
            } else if (nums[mid] > target) {
                high = mid - 1;  //[low..Target....mid...high] go left <-
            } else
                low = mid + 1;  //[low...mid....Target...high]
        }
        return first;
    }
    // second occurence might be at right part of the array
    int secondOccr(vector<int>& nums, int target, int n) {
        int low = 0, high = n - 1;

        int second = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                second = mid;
                // general we go right *32   [low ....mid(Target)....high]
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;  //[low .....Target....mid....high]
            } else
                low = mid + 1;  //[low...mid...Target....high]
        }
        return second;
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