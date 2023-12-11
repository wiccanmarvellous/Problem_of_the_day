#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return arr[0];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] == arr[i])
                count++;
            else
                count = 1;
            if (count > n / 4)
                return arr[i];
        }
        return -1;
    }
};


class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = -1, ans = -1;
        unordered_map<int, int> map;
        for (auto& i: arr)
            map[i]++;
        for (auto&i : map)
            if (i.second > count) {
                count = i.second;
                ans = i.first;
            }
        return ans;
    }
};