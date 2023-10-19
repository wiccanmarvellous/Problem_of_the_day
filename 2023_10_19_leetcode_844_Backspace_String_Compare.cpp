#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stackS, stackT;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!stackS.empty())
                    stackS.pop();
            }
            else 
                stackS.push(s[i]);
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#') {
                if (!stackT.empty())
                    stackT.pop();
            }
            else 
                stackT.push(t[i]);
        }
        vector<char> checkArrS;
        vector<char> checkArrT;
        while (!stackS.empty()) {
            checkArrS.push_back(stackS.top());
            stackS.pop();
        }
        while (!stackT.empty()) {
            checkArrT.push_back(stackT.top());
            stackT.pop();
        }
        
        if (checkArrS == checkArrT)
            return true;
        return false;
    }
};