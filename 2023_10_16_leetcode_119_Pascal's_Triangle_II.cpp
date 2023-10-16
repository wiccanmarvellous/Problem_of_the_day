#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0)  return {1};
        else if (rowIndex == 1) return {1, 1};
        vector<int> ans = {1, 1};
        for (int i = 1; i < rowIndex; i++) {
            vector<int> temp = {1};
            for (int j = 1; j < ans.size(); j++) {
                int sum = ans[j - 1] + ans[j];
                temp.push_back(sum);
            }
            temp.push_back(1);
            ans = temp;
        }
        return ans;
    }
};