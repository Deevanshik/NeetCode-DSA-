#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxi = 0;
        for(int it: s){
            if(s.find(it-1) == s.end()){
                int current = it;
                int current_length = 1;
                while(s.find(current+1) != s.end()){
                    current++;
                    current_length++;
                }
                maxi = max(maxi, current_length);
            }
        }
        return maxi;
    }
};

/*
Pattern - Set + sequence start detection

Key Idea:

- We have to get the longest sequence -> use set instead of array
- for every number in set, check if it can start the sequence
- To check that, (num-1) should not be in set
- If it can start the sequence, start incrementing the number, check and update the length

mistake:

- Using array instead of set. Using set resolves the problem of duplicates
- Also, set has lookup of O(1) so it is faster than array

*/