#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int x = 0;
        for (int i = 0; i < pref.size(); i++) {
            ans.push_back(x ^ pref[i]);
            x = pref[i];
        }
        return ans;
    }
};