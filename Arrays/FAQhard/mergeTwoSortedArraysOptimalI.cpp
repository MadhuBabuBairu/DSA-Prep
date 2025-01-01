#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        //optimal approach I 
        int left = m-1;     //[0,1,...m] nums1
        int right = 0;      //[0,1,...n] nums2

        while(left >= 0 && right < n){
            if(nums1[left] > nums2[right]){
                swap(nums1[left],nums2[right]);
                left--, right++;
            }
            else break;
        }

        //Assuming final array is like [0,1,....m][0,1,2.....m-1,m....m+n] the combined array [0...m+n]

        //sort num1 till 0 - m-1
        sort(nums1.begin()+0,nums1.begin()+m);//OMG 
        //sort entire nums2
        sort(nums2.begin(),nums2.end());

        //put the el of nums2 in num1 . Because we are merging after sorted each
        for(int i=m;i< m+n ;i++){
            nums1[i] = nums2[i-m];
        }
    }

};

int main() {
 
    vector<int> nums1 = {-5, -2, 4, 5,0,0,0};
    vector<int> nums2 = {-3, 1, 8};
    int m = 4, n = 3; 

    // Create an instance of the Solution class
    Solution sol;

    sol.merge(nums1, m, nums2, n);

    // Output the merged arrays
    cout << "The merged arrays are:\n";
    cout << "nums1[] = ";
    for (int i = 0; i < nums1.size( ); i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
