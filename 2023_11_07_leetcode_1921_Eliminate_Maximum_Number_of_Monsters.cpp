#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int ans = 0, n = dist.size();
        vector<float> rank;
        for (int i = 0; i < n; i++)
            rank.push_back((float)dist[i] / speed[i]);
        sort(rank.begin(), rank.end());
        for (int i = 0; i < n; i++) {
            if (i < rank[i])
                ans++;
            else
                break;
        }
        return ans;
    }
};