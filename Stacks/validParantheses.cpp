#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it: s){
            if(it == '(' || it == '[' || it == '{'){
                st.push(it);
            }
            else if(st.empty() || (it == ')' && st.top() != '(') || (it == ']' && st.top() != '[') || (it == '}' && st.top() != '{')) return false;
            else st.pop();
        }
        return st.empty() ? true: false;
    }
};

/*
Pattern - Stack operations

Key Idea:

- opening bracket ko daalo
- agar closing bracket mile toh check kro top pe corresponding hai ya nahi
- last mein stack khali hona chahiye

mistake:

- stack khali ho last mein yeh miss kr gya

*/