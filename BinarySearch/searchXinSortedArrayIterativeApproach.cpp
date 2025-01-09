#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int search(vector<int> &nums, int target){
        //Iterative approach
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        for(int i=0;i<n;i++){
            while(high >= low){
                mid = low + (high - low)/2 ;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]){
                low = mid + 1;
            }
            else high = mid - 1;
            }
            return -1;
        }
    }
};

int main() {
    vector<int> a = {-1, 0, 3, 5, 9, 12}; 
    int target = 9; 

    // Creating an instance of Solution class
    Solution sol; 

    // Function call to find the given target in a sorted array
    int ind = sol.search(a, target); 
    
    if(ind == -1) 
        cout << "The target is not present." << endl;
    else 
        cout << "The target is at index: " << ind << endl;
    
    return 0;
}