#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int ans = s.size();
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j])
                break;
            ans -= 2;
            i++;
            j--;
            while (i <= j && s[i - 1] == s[i]) {
                ans--;
                i++;
            }
            while (i <= j && s[j] == s[j + 1]) {
                ans--;
                j--;
            }
        }
        return ans;
    }
};