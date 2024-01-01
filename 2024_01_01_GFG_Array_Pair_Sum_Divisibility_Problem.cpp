#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        if(n%2) return 0;
        for(int i = 0; i < n; i++) nums[i] = nums[i]%k;
        unordered_map<int,int>mp;
        for(auto it: nums) mp[it]++;
        for(int i = 0; i < n; i++){
            if(mp[nums[i]] == 0) continue;
            mp[nums[i]]--;
            int rem = (k-nums[i])%k;
            if(mp[rem] > 0) mp[rem]--;
            else return 0;
        }
        return 1;
    }
};