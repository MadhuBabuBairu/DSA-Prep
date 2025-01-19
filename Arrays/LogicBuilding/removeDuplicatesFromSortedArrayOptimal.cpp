#include<bits/stdc++.h>
using namespace std;

class Solution {//optimal
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[i]){ // if j points unique element place that infront of i, i.e i+1;
                nums[i+1] = nums[j];
                i++;// moving i next 
            }
        }
        return i+1;//as the last unique element remains at i+1 place
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    
    // Create an instance of the Solution class
    Solution solution;
    
    // Call removeDuplicates to remove duplicates from nums
    int k = solution.removeDuplicates(nums);
    
    cout << "The vector after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
