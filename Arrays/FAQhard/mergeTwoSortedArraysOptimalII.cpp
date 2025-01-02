#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void swapIfGreater(vector<int>& nums1, vector<int>& nums2,  int ind1, int ind2){
        if(nums1[ind1] > nums2[ind2]){
            swap(nums1[ind1],nums2[ind2]);
        }
    }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Optimal II 

        int len = m+n;
        int gap = (len/2) + (len%2); //This will give round of value for len/2;

        //logic
        while(gap > 0){
            int left = 0;
            int right = left + gap;

            while(right < len){
                    // left in arr1 , right in arr2
                if(left < m && right >=m){
                    swapIfGreater(nums1 , nums2, left,right-m);// as right is 2nd array . Its original indexing starts out side m 
                }
                // left and right in arr2
                else if(left >= m ){ // anyway right will be ahead of left
                    swapIfGreater(nums2, nums2, left-m, right-m); //as Both in right array
                }
                // Both in arr1
                else{
                    swapIfGreater(nums1, nums1, left, right);
                } 
                left++; 
                right++;
            }
            if(gap == 1) break;
            // gap reduces if right > len .
            gap = (gap/2) + (gap%2);
        }
        //as the return type is single array lets put num2 in num1
        for(int i=m;i<m+n;i++){
            nums1[i] = nums2[i - m];
        }
        
    }
};

int main() {
    vector<int> nums1 = {-5, -2, 4, 5, 0, 0, 0};
    vector<int> nums2 = {-3, 1, 8};
    int m = 4, n = 3;

    // Create an instance of the Solution class
    Solution sol;

    sol.merge(nums1, m, nums2, n);

    // Output the merged arrays
    cout << "The merged array is:\n";
    cout << "nums1[] = ";
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
