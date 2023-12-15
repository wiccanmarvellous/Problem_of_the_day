#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for (int i = 0; i < paths.size(); i++) {
            int flag = 0;
            for (int j = 0; j < paths.size(); j++) {
                if (paths[i][1] == paths[j][0]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)  return paths[i][1];
        }
        return "";
    }
};


class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> set;
        for (auto &i : paths)
            set.insert(i[0]);
        for (auto &i : paths)
            if (set.find(i[1]) == set.end())
                return i[1];
        return "";
    }
};