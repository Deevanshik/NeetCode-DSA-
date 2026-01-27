#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxi = 0;
        while(left < right){
            maxi = max(maxi, min(height[left], height[right])*(right-left));
            if(height[right] < height[left]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxi;
    }
};

/*
Pattern - Two pointers

Key Idea:

- start with two pointers at extreme. this helps to figure out all possibilities
- jo bhi chota hai height mein, uss pointer ko centre ki trf badha do
- this is because agar hum badhe vale ko badhaye toh area original se kamm hi milega

mistake:

- none

*/

