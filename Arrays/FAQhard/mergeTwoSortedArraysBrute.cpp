#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ans[m+n];// as we know size
        int left = 0;
        int right = 0;
        int index = 0;

        while(left < m && right < n){
            // is left small
            if(nums1[left] <= nums2[right]){
                ans[index] = nums1[left];
                left++ ; index++;
            }
            //is right small 
            else{
                ans[index] = nums2[right];
                right++; index++;
            }
        }

        //If any of the pointer left/right outbounds
        while(left < m){
            ans[index++] = nums1[left++];
        }
        while(right < n){
            ans[index++] = nums2[right++];
        }

        //store back into n1 and n2
        for(int i=0;i<m+n;i++){
            //if(i<m) MAN while the ans is single array why are you complicting?
            nums1[i] = ans[i];
            //else nums2[i-n] = ans[i];
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
    cout << "The merged arrays is:\n";
    cout << "nums1[] = ";
    for (int i = 0; i < m; i++) {
        cout << nums1[i] << " ";
    }
  
    cout << endl;

    return 0;
}
