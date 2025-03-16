#include <bits/stdc++.h>
using namespace std;

//optimal approach using binary search
class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     //assuming elements arr1 < arr2 , if not exchange in method
     int n1 = arr1.size();
     int n2 = arr2.size();
     int n = n1 + n2;
     if(n2 > n1) return median(arr2 , arr1);

     int left = (n1 + n2 + 1)/2; //lenght of left half  works with cobination of odd and even no. of elements
     int low = 0 , high = n1; // we are assuming arr1 has least elements ,

     while(low <= high){
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;
        //initializing l1,l2 defaultly INT_min ,r1,r2 defaulty INT_max
        //we know conditions for symetric parrtern (l1 < r2) & (l2 < r1)
        // ls takes the right most values of LEFT Search space
        // rs takes the left most values of RIGHT Search space
        int l1 = (mid1 > 0)? arr1[mid1 - 1] : INT_MIN;
        int l2 = (mid2 > 0)? arr2[mid2 - 1] : INT_MIN;
        int r1 = (mid1 < n1)? arr1[mid1] : INT_MAX;
        int r2 = (mid2 < n2)? arr2[mid2] : INT_MAX;

        //in symmetry not possible cases trim down 
        if(l1 <= r2 && l2 <= r1){
            if(n % 2 == 1) return max(l1, l2);
            else return (max(l1,l2) + min(r1,r2))/2.0;
        }
        else if(l1 > r2) high = mid1 - 1; //right not possible just trim it
        else  low = mid1 + 1; // left is not possible just trim it
    
     }
     return 0;
    }
};

int main() {
    vector<int> arr1 = {1, 4, 7, 10, 12};
    vector<int> arr2 = {2, 3, 6, 15};

    // Create an instance of the Solution class
    Solution sol;

    // Print the median of the two sorted arrays
    cout << "The median of two sorted arrays is " << fixed << setprecision(1)
         << sol.median(arr1, arr2) << '\n';

    return 0;
}
