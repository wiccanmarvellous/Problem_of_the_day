#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        char check = '0';
        int i = 0, j = 1, k = 2, n = num.size(), flag = 0;
        while (k < n) {
            if (num[i] == num[j] && num[j] == num[k]) {
                flag = 1;
                check = max(check, num[i]);
            }
            i++;
            j++;
            k++;
        }
        string ans = "";
        ans += check;
        ans += check;
        ans += check;
        if (flag) return ans;
        return "";
    }
};