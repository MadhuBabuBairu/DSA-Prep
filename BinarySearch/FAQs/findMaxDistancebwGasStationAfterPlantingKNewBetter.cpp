#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long double minimiseMaxDistance(vector<int> &arr, int k) {
        int n = arr.size();
        priority_queue<pair<long double , int >> pq;
        vector<int> howManyPlanted(n-1,0); //visited array

        // 1st loop for initializing pq [diff, sectionindex]
        for(int i = 0; i < n - 1; i++){
            long double diff = arr[i + 1] - arr[i];
            pq.push({diff, i});
        }

        // 2nd loop is to pick max diff and plant gas station
        for(int i = 1; i <= k; i++){
            auto tp = pq.top();
            pq.pop();
            int sectionindex = tp.second;//for the i = 1 , sectionindex is for sure 0

            // Plant one gas station in the section
            howManyPlanted[sectionindex]++; // Increase the number of gas stations in this section

            long double actualDiff = arr[sectionindex + 1] - arr[sectionindex];
            long double diffAfterPlanting = (long double)(actualDiff) / (long double)(howManyPlanted[sectionindex] + 1);

            // Place the new difference and section index back to the priority queue
            pq.push({diffAfterPlanting, sectionindex});
        }

        // Finally return the top-most element in the queue (the section with the largest distance) after planting all k starions
        return pq.top().first;
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
