#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        int n = mat[0].size();
        for (int i = 0; i < mat.size(); i++)
            mat[i].push_back(i);
        sort(mat.begin(), mat.end());
        for (int i = 0; i < k; i++)
            ans.push_back(mat[i][n]);
        return ans;
    }
};


class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> temp;
        vector<int> ans;
        for (int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1)
                    count++;
            }
            temp.push_back({count, i});
        }
        sort(temp.begin(), temp.end());
        for (auto it : temp) {
            if (k--) ans.push_back(it.second);
            else break;
        }
        return ans;
    }
};