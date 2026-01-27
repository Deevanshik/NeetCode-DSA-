#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n,0);
        vector<int> right(n, 0);
        left[0] = height[0];
        right[n-1] = height[n-1];
        for(int i=1; i<n; i++){
            left[i] = max(left[i-1], height[i]);
            right[n-i-1] = max(right[n-i], height[n-i-1]);
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            ans += max(min(left[i], right[i]) - height[i], 0);
        }
        return ans;
    }
};

/*
Pattern - prefix and suffix

Key Idea:

- for each element, get the heighest wall on left and right side
- take the minimum of both and subtract own height from it to get the trapped water

mistake:

- none

*/