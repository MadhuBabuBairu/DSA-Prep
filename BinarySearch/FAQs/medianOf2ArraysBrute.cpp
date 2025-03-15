#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     //Brute force apply merge sorting
     int n1 = arr1.size();
     int n2 = arr2.size();
     vector<int> arr;
     int i = 0,j= 0;
     while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr.push_back(arr1[i++]);
        }
        else arr.push_back(arr2[j++]);
     }

     //left over elements in arr1
     while(i < n1){ arr.push_back(arr1[i++]);}
     while(j < n2){ arr.push_back(arr2[j++]);}

     int n = n1 + n2;
     if(n%2 == 1){
        return arr[n/2];
     }

     return (double) (double)((arr[n/2]) + (double)(arr[n/2 - 1])) / 2;
    }
};

int main() {
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};

    // Create an instance of the Solution class
    Solution sol;

    // Print the median of the two sorted arrays
    cout << "The median of two sorted arrays is " << fixed << setprecision(1)
         << sol.median(a, b) << '\n';

    return 0;
}
