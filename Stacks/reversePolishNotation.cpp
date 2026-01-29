#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;
        for(auto ch: tokens){
            if(ch == "+"){
                int second = numbers.top();
                numbers.pop();
                int first = numbers.top();
                numbers.pop();
                numbers.push(first + second);
            }
            else if(ch == "-"){
                int second = numbers.top();
                numbers.pop();
                int first = numbers.top();
                numbers.pop();
                numbers.push(first - second);
            }
            else if(ch == "/"){
                int second = numbers.top();
                numbers.pop();
                int first = numbers.top();
                numbers.pop();
                numbers.push(first / second);
            }
            else if(ch == "*"){
                int second = numbers.top();
                numbers.pop();
                int first = numbers.top();
                numbers.pop();
                numbers.push(first * second);
            }
            else{
                numbers.push(stoi(ch));
            }
        }
        return numbers.top();
    }
};

/*
Pattern - re iterating stack

Key Idea:

- numbers ko daalo jab tak operand na aaye
- jab operand aagya, last k 2 number nikal lo stack se
- operation perform krke stack mein vapis daal do

mistake:

- 

*/