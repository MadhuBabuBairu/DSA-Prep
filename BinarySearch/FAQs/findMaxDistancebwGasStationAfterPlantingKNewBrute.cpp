#include <bits/stdc++.h>
using namespace std;

//Brute force
class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
       int n = arr.size();

       //visited array has to be placed inside the xtreems, arr[l ....r] 
       vector<int> howManyPlaced(n-1,0);

       //1st loop for planting Gas stations in visited array
       for(int i=1;i<=k;i++){
        double maxSection = -1;
        int maxIndex = -1;

        for(int i=0;i<n-1;i++){
             double ActualDiff = (double)(arr[i + 1] - arr[i])/ (howManyPlaced[i] + 1); //H[0 0 0 0 0 ] before planting

            if(maxSection < ActualDiff){
                maxSection = ActualDiff;
                maxIndex = i;
            }
        }
        howManyPlaced[maxIndex]++; //H[1 1 1 0 0 0] plantation stage
       }

       //2nd loop for , calculating difference after planting GAS Stations
       //we need to find the max distance b/w Gas stations , after planting
        double maxDistance = -1;
       for(int i = 0;i < n-1;i++){ //visited array
         double diff = (double)(arr[i+1] - arr[i])/(howManyPlaced[i] + 1); //H[1 1 1 1 1 1] after planting

        maxDistance = max(maxDistance , diff);
       }
       return maxDistance;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;

    // Create an instance of the Solution class
    Solution sol;

    // Call the minimiseMaxDistance method and print the result
    long double ans = sol.minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";

    return 0;
}
