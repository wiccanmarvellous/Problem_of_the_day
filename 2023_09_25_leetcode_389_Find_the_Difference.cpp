#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> map;
        for (auto i : t)
            map[i]++;
        for (auto i : s)
            map[i]--;
        for (auto i : map)
            if (i.second != 0)
                return i.first;
        return 'a';
    }
};