#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        //optimal MB
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        int j = 0 ; 
        int i=0;
        //logic
        while(i<n1 && j<n2){
            if(nums1[i]>nums2[j]) j++; //we have to visualize
            else if(nums1[i]<nums2[j]) i++;
            else {
                ans.push_back(nums2[j]);
                i++;
                j++;
            }

        }
        return ans;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> nums2 = {3, 3, 4, 4, 5, 8};

    // Create an instance of the Solution class
    Solution finder;

    // Get intersection of nums1 and nums2 using class method
    vector<int> ans = finder.intersectionArray(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is:" << endl;
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
