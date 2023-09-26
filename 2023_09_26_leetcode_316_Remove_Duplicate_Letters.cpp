#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<char> arr;
        unordered_map<char, int> freq;
        unordered_map<char, bool> check;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            check[s[i]] = false;
        }
        for (int i = 0; i < s.size(); i++) {
            if (check[s[i]] == false) {
                while (!arr.empty() && arr.back() > s[i] && freq[arr.back()] > 0) {
                    check[arr.back()] = false;
                    arr.pop_back();
                }
                arr.push_back(s[i]);
                check[s[i]] = true;
            }
            freq[s[i]]--;
        }
        string ans = "";
        for (auto i : arr)
            ans += i;
        return ans;
    }
};