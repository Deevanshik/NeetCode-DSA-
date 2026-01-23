#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto it: nums){
            mpp[it]++;
            if(mpp[it] == 2) return true;
        }
        return false;
    }
};

/*
Pattern - Hashing

Key Idea:

- make a hashmap, store every number and increment the count
- whenever count > 1, return false. else return true

mistake:

- nothing
*/