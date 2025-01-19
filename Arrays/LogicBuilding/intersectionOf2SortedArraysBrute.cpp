#include<bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        // brute force

        int n1 = nums1.size();

        int n2 = nums2.size();

        vector<int> ans;

        int vis[n2] = {0};

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (nums1[i] == nums2[j] && vis[j] == 0) {
                    ans.push_back(nums2[j]);

                    vis[j] = 1;

                    break;

                }

                else if (nums2[j] > nums1[i])
                    break;  // as arrays are sorted eg.n1 -> 3 cannot be found
                            // at 5 of n2, lets breakup
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
    vector<int> ans = finder.intersectionArrays(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is:" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
