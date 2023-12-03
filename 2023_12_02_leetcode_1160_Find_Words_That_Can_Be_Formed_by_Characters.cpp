#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char, int> map;
        for (auto& i : chars)
            map[i]++;
        for (int i = 0; i < words.size(); i++) {
            int flag = 0;
            unordered_map<char, int> tempMap = map;
            for (int j = 0; j < words[i].size(); j++) {
                if (tempMap.find(words[i][j]) != tempMap.end() && tempMap[words[i][j]] > 0)
                    tempMap[words[i][j]]--;
                else {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                ans += words[i].length();
            tempMap = map;
        }
        return ans;
    }
};