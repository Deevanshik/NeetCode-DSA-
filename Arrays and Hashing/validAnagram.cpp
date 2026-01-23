#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp1, mpp2;
        for(auto ch: s){
            mpp1[ch]++;
        }
        for(auto ch: t){
            mpp2[ch]++;
        }
        return bool(mpp1 == mpp2);
    }
};

/*
Pattern - Hashing and comparing

Key Idea:

- make two hashmaps to store character and count of each character for both strings
- compare and return

mistake:

- nothing
*/