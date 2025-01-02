
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //optimal 
        int n = nums.size();
        if(n == 0) return 0;
        unordered_set<int> st;
        //insert all el in set data structure
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        int longest = 1;

        //check in set , look for previous and don;t count if found
        for(auto it:st){
                    // Check if the current integer `it` is the start of a potential sequence.
                    // This is true if `it - 1` is not present in the set. i.e if previous is not present go down
            if(st.find(it - 1)== st.end()){
                int count = 1;
                int x = it;
                 // If `x + 1` is found in the set, if next is found
                while(st.find(x+1) != st.end()){
                    count++;
                    x++;
                }
                longest = max(longest, count);
            }
            
        }
        return longest;
    }
};

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2}; 

    // Create an instance of solution class
    Solution solution; 
    // Function call for finding longest consecutive sequence
    int ans = solution.longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}