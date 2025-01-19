#include <bits/stdc++.h>
using namespace std;
//Brute sort return back
//Better iterate loop and max(max,n[i])
//Optimal below
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if(nums.size() < 2) return -1;
        int largestElement = INT_MIN;
        int secondLargestElement = INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            if(largestElement < nums[i]){
                    secondLargestElement = largestElement;
                    largestElement = nums[i];
                }
            else if(nums[i]<largestElement && nums[i]>secondLargestElement){
                secondLargestElement  = nums[i];//this is when second largest element is after the largest element while tranversing
            }
        }
        return secondLargestElement == INT_MIN ? -1 : secondLargestElement;//i.e sL is not  updated
      
    }
};

int main() {
    vector nums = {1, 2, 4, 6, 7, 5};

    //Create an instance of the Solution class
    Solution sol;

    /* Function call to find 
    the second largest element*/
    int ans = sol.secondLargestElement(nums);

    cout << "The second largest element is: " << ans << endl;
    return 0;
}