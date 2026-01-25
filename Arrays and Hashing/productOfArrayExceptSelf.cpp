#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1]*nums[i-1];
            suffix[n-1-i] = suffix[n-i]*nums[n-i];
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(prefix[i]*suffix[i]);
        }
        return ans;

    }
};

/*
Pattern - prefix and suffix array

Key Idea:

- prefix array will store the product of previous numbers
- suffix array will store the product of upcoming numbers
- for each element, answer - prefix[i]*suffix[i]

mistake:

- nothing

*/