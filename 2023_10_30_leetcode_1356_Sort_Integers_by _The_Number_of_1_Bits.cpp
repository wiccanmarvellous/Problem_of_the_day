#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int bin(int n) {
        int count = 0;
        while (n > 0) {
            if (n & 1 == 1) count++;
            n /= 2;
        }
        return count;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
        vector<pair<int, int>> freq;
        for (auto i : arr)
            freq.push_back({bin(i), i});
        sort(freq.begin(), freq.end());
        for (auto i : freq)
            ans.push_back(i.second);
        return ans;
    }
};