#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        if (nums.size() == 0)
            return {};
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int count = 1;
        ans.push_back({nums[0]});
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i]) {
                count++;
                if (ans.size() >= count)
                    ans[count - 1].push_back(nums[i]);
                else
                    ans.push_back({nums[i]});
            }
            else {
                count = 1;
                ans[count - 1].push_back(nums[i]);
            }
        }
        return ans;
    }
};