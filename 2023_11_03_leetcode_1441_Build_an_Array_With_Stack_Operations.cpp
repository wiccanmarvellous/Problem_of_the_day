#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i = 1, t_size = target.size(), t_idx = 0;
        vector<string> ans;
        while (i <= n && t_idx < t_size) {
            if (target[t_idx] == i) {
                ans.push_back("Push");
                i++;
                t_idx++;
            }
            else {
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
        }
        return ans;
    }
};