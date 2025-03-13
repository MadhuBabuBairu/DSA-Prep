#include <bits/stdc++.h>
using namespace std;

//optimal approach
class Solution {
private:
    int calculatePossibility(vector<int> nums , int pages){
        int student = 1;
        int studentPageCount = 0;
        int n = nums.size();
        //now iterate over array and implement logic
        // [1A 1A 2A 3A 4A]
        // [check notes for better understanding]
        for(int i=0;i<n;i++){
            //
            if(studentPageCount + nums[i] <= pages){//count begins with value of nums[i] 
                studentPageCount += nums[i];
            }
            else{
                student++; //go to next student
                studentPageCount = nums[i];//also begin with new value and count 
            }
        }
        return student;
    }
public:
    int findPages(vector<int> &nums, int m)  {
        //The range of answers [max(nums) -> sum(nums)] [best -> worst cases]

        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        if(m > nums.size()) return -1; //edge case
        //iterate over range
        while(low <= high){
            int mid = (low + high)/2;
            int studentGotBooks = calculatePossibility(nums,mid);

            //studentGotBooks function count , we are calculating from element 1 , therefore iterate left -> right in a searchspace
            if(studentGotBooks > m){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;

    }
};

int main() {
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5; 
    int m = 4;

    // Create an instance of the Solution class
    Solution sol;

    int ans = sol.findPages(arr, m);

    // Output the result
    cout << "The answer is: " << ans << "\n";

    return 0;
}
