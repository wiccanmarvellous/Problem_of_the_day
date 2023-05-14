#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxUncrossedLines(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1));
        for (int i = 0; i <= n1; i++)
        {
            for (int j = 0; j <= n2; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else if (nums1[i - 1] == nums2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n1][n2];
    }
};

int main()
{
    int m, n, a;
    vector<int> nums1, nums2;

    cout << "Enter size of first array: ";
    cin >> m;
    cout << "Enter elements in first array:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        nums1.push_back(a);
    }

    cout << "Enter size of second array: ";
    cin >> n;
    cout << "Enter elements in second array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums2.push_back(a);
    }

    Solution obj;
    int ul = obj.maxUncrossedLines(nums1, nums2);
    cout << "Maximum number of uncrossed lines: " << ul << endl;
    return 0;
}