#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> freq;
        int i = 0, j = 0;
        while (j < nums.size()) {
            freq[nums[j]]++;
            if (freq[nums[j]] > k) {
                ans = max(ans, j - i);
                while (i < j) {
                    if (nums[i] == nums[j]) {
                        freq[nums[i]]--;
                        i++;
                        break;
                    }
                    freq[nums[i]]--;
                    i++;
                }
            }
            j++;
        }
        ans = max(ans, j - i);
        return ans;
    }
};