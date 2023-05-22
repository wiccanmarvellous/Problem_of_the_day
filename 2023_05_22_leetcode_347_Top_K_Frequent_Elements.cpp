#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> hash;
        vector<int> ans;
        int n = nums.size(), num;
        for (int i = 0; i < n; i++)
            hash[nums[i]]++;
        while (k--)
        {
            int mFreq = 0;
            for (auto it : hash)
            {
                if (mFreq < it.second)
                {
                    mFreq = it.second;
                    num = it.first;
                }
            }
            ans.push_back(num);
            hash.erase(num);
        }
        return ans;
    }
};