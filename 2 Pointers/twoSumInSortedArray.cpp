#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = numbers.size() - 1;
        int left = 0;
        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum < target){
                left++;
            }
            else if(sum > target){
                right--;
            }
            else{
                break;
            }
        }
        return {left+1, right+1};
    }
};

/*
Pattern - Two pointers

Key Idea:

- take two pointers - left(0) and right(n-1)
- calculate sum at these two points
- sum > target -> move back
- sum < target -> move front

mistake:

- none

*/