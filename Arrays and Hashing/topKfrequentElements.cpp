#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        priority_queue<pair<int, int>> pq;
        for(auto it: mpp){
            pq.push({it.second, it.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

/*
Pattern - Hashing + Priority queue

Key Idea:

- map each element to its frequency
- make a max heap and push {frequency, element}
- return top k elements

mistake:

- I was first making an array having {frequency, element} and then sorting it in descending order
- It takes a lot of time and space as compared to a heap

*/