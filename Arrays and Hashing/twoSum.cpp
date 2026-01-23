#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(mpp.find(target - nums[i]) == mpp.end()){
                mpp[nums[i]] = i;
            }
            else{
                ans = {mpp[target - nums[i]], i};
                break;
            }
        }
        return ans;
    }
};

/*
Pattern - Hashing the indices

Key Idea:

- map value to index
- search for (target - value) and respond accordingly

mistake:

- I was updating mpp[target - mpp[i]]. This is wrong. You have to use target - nums[i] brother
*/