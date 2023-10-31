#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if (nums.front() > nums.back())
            reverse(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }
        return true;
    }
};