#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty())
            return {};
        vector<string> ans;
        string start = to_string(nums[0]);
        string temp;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 != nums[i + 1]) {
                if (stoi(start) == nums[i])
                    ans.push_back(start);
                else {
                    temp = start + "->" + to_string(nums[i]);
                    ans.push_back(temp);
                }
                start = to_string(nums[i + 1]);
            }
        }
        if (stoi(start) == nums.back())
            ans.push_back(start);
        else {
            temp = start + "->" + to_string(nums.back());
            ans.push_back(temp);
        }
        return ans;
    }
};