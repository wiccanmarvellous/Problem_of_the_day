#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        vector<int> rowSumList, colSumList;
        for (int i = 0; i < m; i++) {
            int rowSum = 0;
            for (int j = 0; j < n; j++)
                rowSum += grid[i][j] == 1 ? 1 : -1;
            rowSumList.push_back(rowSum);
        }
        for (int j = 0; j < n; j++) {
            int colSum = 0;
            for (int i = 0; i < m; i++)
                colSum += grid[i][j] == 1 ? 1 : -1;
            colSumList.push_back(colSum);
        }
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                ans[i][j] = rowSumList[i] + colSumList[j];
        return ans;
    }
};