#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<vector<char>> arr;
        vector<char> temp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                reverse(temp.begin(), temp.end());
                temp.push_back(s[i]);
                arr.push_back(temp);
                temp.clear();
            }
            else {
                temp.push_back(s[i]);
            }
        }
        reverse(temp.begin(), temp.end());
        arr.push_back(temp);
        string ans = "";
        for (auto i : arr)
            for (auto j : i)
                ans += j;
        return ans;
    }
};