#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, count = 0;
        for (auto i : s) {
            if (i == '(') {
                count++;
                ans = max(ans, count);
            }
            else if (i == ')')
                count--;
        }
        return ans;
    }
};