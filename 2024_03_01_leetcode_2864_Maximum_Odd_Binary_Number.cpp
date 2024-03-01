#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        int zeros = count(s.begin(), s.end(), '0');
        int ones = count(s.begin(), s.end(), '1');
        for (int i = 0; i < ones - 1; i++)
            ans += '1';
        for (int i = 0; i < zeros; i++)
            ans += '0';
        ans += '1';
        return ans;
    }
};