#include <bits/stdc++.h>
using namespace std;

class Solution {

private:
//mergeSort algorithm
    int mergeSort(vector<int>& nums,int low,int high){//low = 0,high = n-1
        int cnt = 0;// initiaze count ----1
        if(low >= high){
            return cnt;
        }
        int mid = low + (high - low)/2;
        cnt += mergeSort( nums,low,mid);
        cnt += mergeSort( nums,mid+1,high);
        //just before merge we have to implement our solution
        cnt += count( nums,low,mid,high);// -----count ---3
        merge( nums,low,mid,high);
        return cnt;
    }
private:
    int merge(vector<int>& nums,int low,int mid,int high){
        // visualize in this pic [low.....mid mid+1.....high] left = low,right = mid+1;
        int left = low;
        int right = mid + 1;
        vector<int> temp;
        while(left <= mid && right <= high){
            //is left small 
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]); left++;
            }
            //is right small
            else{
                temp.push_back(nums[right]); right++;
            }
        }
        //Deal with left over elements in left branch
        while(left<=mid){
            temp.push_back(nums[left]); left++;
        }
        //now right branch
        while(right<=high){
            temp.push_back(nums[right]); right++;
        }
        // Transfer sorted el in temp to nums
        for(int i = low;i<=high; i++){
            nums[i] = temp[i - low];//...
        }
    }
private:
    //Solution logic
    int count(vector<int>& nums,int low,int mid,int high){
        int right = mid + 1;
        //Count should start fresh each time as we count freshly and add to existing count---2
        int cnt = 0;

        for(int i = low;i<=mid;i++){
            while(right <= high && nums[i] > 2 * nums[right]){
                right++;
            }
            //where ever right stops , count till there from mid+1 i.e [mid+1..........right...high] of left branch
            cnt += right - (mid + 1);
        }
        return cnt;
    }
private:
    int team(vector <int> & nums, int n){
        return mergeSort(nums, 0, n - 1);
    }
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return team(nums,n);
    }
};

int main() {
    vector<int> nums = {6, 4, 1, 2, 7};
    
    //Create an instance of Solution class
    Solution sol;
    
    int cnt = sol.reversePairs(nums);
    
    //Print the count of reverse pairs
    cout << "The number of reverse pairs is: " << cnt << endl;
    return 0;
}
