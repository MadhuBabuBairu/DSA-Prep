#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int el = 0;
     
        //1st layer Moore's voting algorithm apply
        for(int i=0;i<n;i++){
            if(count == 0){// [1....x][1...x] as moore's voting algorithm works
                count = 1;
                el = nums[i];
            }
            else if(el == nums[i]){
                count++;
                //  confirm++;
                //  if(confirm >= n/2) return el; //This will exclude edge cases where internally count may not equal ot n/2;
            }
            else count--;// el != num[i]
        }
       // Check if Picked element is Majority or not.
        int confirm = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==el) confirm++;
        }
        if(confirm > n/2) return el;// There might be equal majorities so stay out of loop
        return -1;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    // Create an instance of Solution class
    Solution sol;

    int ans = sol.majorityElement(arr);
    
    // Print the majority element found
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}
