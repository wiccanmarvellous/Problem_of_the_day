#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int, int> sDict, tDict;
        for (int i = 0; i < s.length(); i++) {
            if (sDict.find(s[i]) != sDict.end() && sDict[s[i]] != t[i]) return false;
            else sDict[s[i]] = t[i];
            if (tDict.find(t[i]) != tDict.end() && tDict[t[i]] != s[i]) return false;
            else tDict[t[i]] = s[i];
        }
        return true;
    }
};