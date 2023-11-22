#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int, vector<int>> hash;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                int sum = i + j;
                hash[sum].push_back(nums[i][j]);
            }
        }
        for (auto& i : hash) 
            reverse(i.second.begin(), i.second.end());
        for (auto i : hash)
            for (auto j : i.second)
                ans.push_back(j);
        return ans;
    }
};