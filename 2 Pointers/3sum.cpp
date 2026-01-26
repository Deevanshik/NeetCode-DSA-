#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] > 0) break;
            if(i>0 && nums[i-1] == nums[i]) continue;
            int target = -1*nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                int sum = nums[left] + nums[right];
                if(sum < target){
                    left++;
                }
                else if(sum > target){
                    right--;
                }
                else{
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while((left < right) && (nums[left] == nums[left-1])) left++;
                    while((left < right) && (nums[right] == nums[right+1])) right--;
                }
            }
        }
        return ans;
    }
};

/*
Pattern - Two pointers with additional optimisations

Key Idea:

- sort the array because we have to implement the two sum solution
- target = -nums[i] 
- left = i+1, right = n-1 -> then implement two sum simply

mistake:

- Not thinking about these optimisations:
-- agar i pe element 0 se badha hua, you cannot get a solution -> break krdo
-- agar i vala element pichle i vale se same hua, then skip it
-- I was thinking about to use set to skip duplicates but that increases complexity of the solution
-- instead use logic with i, left and right
-- jab push krdiya hai answer array mein, then check if left-1 pe same element hai. agar haan toh left++
-- same with right, check agar right+1 pe same element hai

*/