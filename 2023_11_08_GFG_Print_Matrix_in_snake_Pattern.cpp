#include <bits/stdc++.h>
using namespace std;

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int> ans;
        for (int i =0; i < matrix.size(); i++)
            for (int j = 0; j < matrix.size(); j++)
                i % 2 == 0 ? ans.push_back(matrix[i][j]) : ans.push_back(matrix[i][matrix.size() - 1 - j]);
        return ans;
    }
};