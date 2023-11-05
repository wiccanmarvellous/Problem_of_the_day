#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size(), count = 1;
        if (n == 0) return {};
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> freq;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] != nums[i]) {
                freq.push_back({count, nums[i - 1]});
                count = 0;
            }
            count++;
        }
        freq.push_back({count, nums[n - 1]});
        sort(freq.begin(), freq.end(), greater<pair<int, int>>());
        for (int i = 0; i < k; i++)
            ans.push_back(freq[i].second);
        return ans;
    }
};