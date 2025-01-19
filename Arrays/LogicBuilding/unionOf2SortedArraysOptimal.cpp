#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> Union;//vector to return ans
        //Algo logic
        int i=0;
        int j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){// compare and take the smallest i.e not took before
                if(Union.size()== 0 || Union.back()!=nums1[i] ) Union.push_back(nums1[i]);
                i++;
            } 
            else{
                if(Union.size()== 0 || Union.back()!=nums2[j] ) Union.push_back(nums2[j]);
                j++;
            }  
        }
        while(i<n1){//left over in n1
            if(Union.size()== 0 || Union.back()!=nums1[i] ) Union.push_back(nums1[i]);
            i++;
        } 
        while(j<n2){//left over in n2
            if(Union.size()== 0 || Union.back()!=nums2[j] ) Union.push_back(nums2[j]);
            j++;
        }
        return Union;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> nums2 = {2, 3, 4, 4, 5, 11, 12};

    // Create an instance of the Solution class
    Solution finder;

    // Get union of nums1 and nums2 using class method
    vector<int> Union = finder.unionArray(nums1, nums2);

    cout << "Union of nums1 and nums2 is:" << endl;
    for (int val : Union) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
