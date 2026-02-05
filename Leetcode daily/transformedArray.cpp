#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res = nums;
        int N = nums.size();
        for(int i=0; i<N; i++){
            int idx = ((nums[i] + i) % N + N) % N;
            res[i] = nums[idx];
        }
        return res;
    }
};