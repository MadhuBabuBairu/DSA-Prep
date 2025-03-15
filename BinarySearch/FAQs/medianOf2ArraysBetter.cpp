#include <bits/stdc++.h>
using namespace std;

//Better approach with reduced space 
class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     int n1 = arr1.size();
     int n2 = arr2.size();

     int n = n1 + n2;
     int index1 = (n/2 - 1);// case of even
     int index2 = n/2 ; //case of odd no. of elements

     int count = 0;// we use this as index of hypothetical arr3 i.e merdged

     int i = 0, j = 0;
     int index1element = -1,index2element = -1;

     //iterate throung hypothetical array

     while(i < n1 && j < n2){
        // pick from least value
        if(arr1[i] < arr2[j]){
            if(count == index1) index1element = arr1[i]; //case of odd
            if(count == index2) index2element = arr1[i]; //case of even
            i++;
            count++;
        }
        else{
            if(count == index1) index1element = arr2[j]; //case of odd
            if(count == index2) index2element = arr2[j]; //case of even
            j++;
            count++;
        }
     }
        
        //left over elements in arr1
        while(i < n1){
            if(count == index1) index1element = arr1[i]; //case of odd
            if(count == index2) index2element = arr1[i]; //case of even
            i++;
            count++;

        }
        //left over in arr2
        while(j < n2){
            if(count == index1) index1element = arr2[j]; //case of odd
            if(count == index2) index2element = arr2[j]; //case of even
            j++;
            count++;
        }

        //we successfully picked up 1 and 2 elements 
        if(n%2 == 0){
            return (double)((double)(index1element + index2element))/2 ;//even?
        }

        return (double)index2element ; //odd?
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
