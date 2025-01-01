#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

 // merge part of algorithm
    long long int merge(vector<int>& nums,int low,int mid,int high){
            //temporary array for merging
            vector<int> temp;

            int left = low;
            int right = mid +1;
            long long int cnt = 0;

        //[low...mid mid+1...high]
        //[left     & right  branches]
        // Play with pointer till left =< mid && right >= high

        while(left <= mid && right <= high){
            //is left small
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            //is right small and also here comes the context of number of inversion pairs n[i]>n[j] i < j in array
            //let consider ni[2,3,5,6] nj[2,2,4,4,8] if ni>nj then ni+1 -> ni.end() possible eg:- 3 > 2 so [3,2] [5,2] [6,2] ct += 3;
            else{
                temp.push_back(nums[right]);
                cnt += (mid - left +1); //i.e (3-1+1)
                right++;
            }
        }
            //left over in left branch adding to temp
            while(left<=mid){
                temp.push_back(nums[left]); left++; 
            } 
            while(right<=high){
                temp.push_back(nums[right]); right++;
            }
                    /* Copy elements from temp 
             array back to original array*/
            for (int i = low; i <= high; i++) {
                nums[i] = temp[i - low];
            }
        
        return cnt;
    }
        // Applying Merge sorting
    //recursive part instead of void am using int as return type is int

    long long int mergeSort(vector<int>& nums,int low,int high){
        long long int cnt = 0;
        if(low < high){
        int mid = low + (high-low)/2;
         cnt += mergeSort(nums,low,mid);    //left branch
         cnt += mergeSort(nums,mid+1,high); //right branch
         cnt += merge(nums,low,mid,high);     //cnt is calculated while merging
        } return cnt;
    }
    

   long long int numberOfInversions(vector<int>& nums) {
    //optimal using merge sort.
    int n = nums.size();

    return mergeSort(nums,0,n-1);
    }


public:
    // Function to find number of inversions in an array
    long long int numberOfInversions(vector<int>& nums) {
        
        // Size of the array
        int n = nums.size();

        // Count the number of pairs
        return mergeSort(nums, 0, n - 1);
    }
};

int main() {
    vector<int> nums = {5, 4, 3, 2, 1};
    
    // Create an instance of Solution class
    Solution sol;

    long long result = sol.numberOfInversions(nums);
    
    // Print the number of inversions found
    cout << "The number of inversions are: " << result << endl;
    
    return 0;
}