#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int x_idx = -1, y_idx = -1, ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (a[i] == x)
                x_idx = i;
            if (a[i] == y)
                y_idx = i;
            if (x_idx != -1 && y_idx != -1)
                ans = min(ans, abs(x_idx - y_idx));
        }
        if (x_idx == -1 || y_idx == -1) return -1;
        return ans;
    }
};