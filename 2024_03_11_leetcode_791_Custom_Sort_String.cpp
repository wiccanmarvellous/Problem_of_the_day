#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        vector<int> arr(26);

        for (auto i : s)
            arr[i - 'a']++;

        for (auto i : order) {
            int n = arr[i - 'a'];
            for (int j = 0; j < n; j++) {
                ans += i;
                arr[i - 'a']--;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] > 0) {
                int n = arr[i];
                for (int j = 0; j < n; j++) {
                    ans += char(i + 'a');
                    arr[i]--;
                }
            }
        }
        return ans;
    }
};