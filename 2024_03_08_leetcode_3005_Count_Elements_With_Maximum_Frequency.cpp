#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = 0, ans = 0;
        unordered_map<int, int> hash;
        for (auto i : nums) hash[i]++;
        for (auto i : hash) n = max(n, i.second);
        for (auto i : hash)
            if (i.second == n)
                ans += i.second;
        return ans;
    }
};