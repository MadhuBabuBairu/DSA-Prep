#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
   
   //optimal approach
   int n1 = a.size();
   int n2 = b.size();
   //asuming n1 > n2
   int n = n1 + n2 ;
   if(n1 < n2) return kthElement(b , a , k);//exhange if not

   int left = k; //lenght of left half
   int low = max(k-n2 , 0) , high = min(k , n1);//define search space 


   while(low <= high){
    int mid1 = (low + high) / 2;
    int mid2 = left - mid1;

                // Initialize l1, l2, r1, r2
            int l1 = (mid1 > 0) ? a[mid1 - 1] : INT_MIN;
            int l2 = (mid2 > 0) ? b[mid2 - 1] : INT_MIN;
            int r1 = (mid1 < n1) ? a[mid1] : INT_MAX;
            int r2 = (mid2 < n2) ? b[mid2] : INT_MAX;

    if(l1 <= r2 && l2 <= r1) return max(l1 , l2);
    else if(l1 > r2) high = mid1 - 1; // trimmed right half
    else low = mid1 + 1;//trim left half 
   }
   return -1;
  }
};

int main() {
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int k = 5;
    
    //Create an instance of Solution class
    Solution solution;
    
    //Print the answer
    cout << "The " << k << "-th element of two sorted arrays is: "
         << solution.kthElement(a, b, k) << '\n';

    return 0;
}
