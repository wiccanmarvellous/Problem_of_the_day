#include <bits/stdc++.h>
using namespace std;

//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long ans = 0;
        for (int i = 1; i <= N; i++) {
            ans += i * (N / i);
        }
        return ans;
    }
};