#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int counting(vector<int> &vec, vector<vector<int>> &grid)
    {
        int n = grid.size(), flag = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (vec[j] != grid[j][i])
                {
                    flag++;
                    break;
                }
            }
            if (flag == 0)
                count++;
            flag = 0;
        }
        return count;
    }
    
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), count = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> t;
            for (int j = 0; j < n; j++)
            {
                t.push_back(grid[i][j]);
            }
            count += counting(t, grid);
        }
        return count;
    }
};