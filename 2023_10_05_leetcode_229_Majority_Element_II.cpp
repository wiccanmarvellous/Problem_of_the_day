#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count = 1, n = nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                if (count > n / 3)
                    ans.push_back(nums[i - 1]);
                count = 1;
            }
            else {
                count++;
            }
        }
        if (count > n /3)
            ans.push_back(nums.back());
        return ans;
    }
};