#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(auto str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            if(mpp.find(temp) == mpp.end()){
                mpp[temp] = {str};
            }
            else{
                mpp[temp].push_back(str);
            }
        }

        vector<vector<string>> ans;
        for(auto it: mpp){
            ans.push_back(it.second);
        };
        return ans;
    }
};

/*
Pattern - Hashing

Key Idea:

- sort every string and use it as a key in hash map
- print the hashmap

mistake:

- nothing
*/