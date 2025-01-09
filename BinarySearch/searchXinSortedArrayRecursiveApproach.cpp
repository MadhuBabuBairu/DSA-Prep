#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    int found(vector<int> &nums,int low,int high,int target){
        if(high < low) return -1;
        int mid = low + (high - low)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target){
            return found(nums,mid+1,high,target);// goo left
        }
        else return found(nums,low,mid - 1,target);// goo right
    }
public:
    int search(vector<int> &nums, int target){
        int n = nums.size();
        return found(nums,0,n-1,target);
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