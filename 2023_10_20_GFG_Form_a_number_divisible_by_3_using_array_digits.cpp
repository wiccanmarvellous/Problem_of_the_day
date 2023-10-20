#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        int a = 0;
        for (int i = 0; i < N; i++) {
            a += arr[i];
            a %= 3;
        }
        if (a == 0)
            return 1;
        return 0;
    }
};