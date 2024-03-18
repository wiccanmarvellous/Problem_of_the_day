#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        vector<pair<int, int>> range;
        range.push_back({points[0][0], points[0][1]});

        for (int i = 1; i < points.size(); i++) {
            auto [i1, j1] = range.back();
            int i2 = points[i][0], j2 = points[i][1];
            int last = range.size() - 1;

            if (i1 <= j2 && j2 <= j1)      range[last] = {i1, j2};
            else if (i1 <= i2 && i2 <= j1) range[last] = {i2, j1};
            else if (i1 <= i2 && j2 <= j1) range[last] = {i2, j2};
            else    range.push_back({i2, j2});
        }
        return range.size();
    }
};