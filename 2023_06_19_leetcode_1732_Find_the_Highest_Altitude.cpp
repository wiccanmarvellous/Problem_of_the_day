#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans{0};
        for (auto it : gain)
            ans.push_back(ans.back() + it);
        int m_alt = ans[0];
        for (auto it : ans)
            m_alt = max(m_alt, it);
        return m_alt;
    }
};