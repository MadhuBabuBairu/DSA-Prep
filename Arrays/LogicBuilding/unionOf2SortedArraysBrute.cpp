#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        // Brute MB

        set<int> unionNum;

        for (int i = 0; i < nums1.size(); i++) {
            unionNum.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            unionNum.insert(nums2[i]);
        }

        vector<int> ans;

        for (auto it : unionNum) {
            ans.push_back(it);
        }

        return ans;
    }
};

int main() {
    // Initialize the arrays
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> nums2 = {2, 3, 4, 4, 5, 11, 12};
    
    // Create an instance of the Solution class
    Solution finder;
    
    /* Get the union of nums1 and 
    nums2 using the class method*/
    vector<int> Union = finder.unionArray(nums1, nums2);
    
    // Output the result
    cout << "Union of nums1 and nums2 is:" << endl;
    for (int val : Union) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}