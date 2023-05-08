#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     int diagonalSum(vector<vector<int>> &mat)
//     {
//         int sum = 0, m = mat.size(), n = mat[0].size();
//         for (int i = 0; i < m; i++)
//             for (int j = 0; j < n; j++)
//             {
//                 if (i == j)
//                     sum += mat[i][j];
//                 if (i == m - 1 - j)
//                     sum += mat[i][j];
//             }
//         if (n & 1 == 1)
//             sum -= mat[n / 2][m / 2];
//         return sum;
//     }
// };

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size(), sum = 0;
        for (int i = 0; i < n; i++)
            sum += mat[i][i] + mat[i][n - 1 - i];
        return n & 1 ? (sum - mat[n / 2][n / 2]) : sum;
    }
};

int main()
{
    int n, a;
    cin >> n;
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            temp.push_back(a);
        }
        vec.push_back(temp);
    }
    Solution obj;
    int sum = obj.diagonalSum(vec);
    cout << sum << endl;
    return 0;
}